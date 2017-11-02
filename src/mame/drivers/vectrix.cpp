// license:BSD-3-Clause
// copyright-holders:
/***********************************************************************************************************************************

2017-11-02 Skeleton

Vectrix Graphics Processor. The VX384 was the main model, with 384K of RAM, and used an analog monitor.
 The VX128 was the cheaper model with 128K of RAM and less colours. It used a TTL-level monitor.
 Don't know which one this is, but VX384 is assumed.

It replaced your serial or centronics printer, which then plugged into the unit instead. The unit could be considered as a
terminal which could decode simple commands into complex graphics.


************************************************************************************************************************************/

#include "emu.h"
//#include "cpu/mcs51/mcs51.h"

class vectrix_state : public driver_device
{
public:
	vectrix_state(const machine_config &mconfig, device_type type, const char *tag)
		: driver_device(mconfig, type, tag)
//		, maincpu(*this, "maincpu")
	{ }

protected:
//	required_device<i80c52_device> maincpu;
};

static INPUT_PORTS_START( vectrix )
INPUT_PORTS_END

//static ADDRESS_MAP_START( prg_map, AS_PROGRAM, 8, vectrix_state )
//ADDRESS_MAP_END

static MACHINE_CONFIG_START( vectrix )
MACHINE_CONFIG_END

ROM_START( vectrix )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "vectrixl.bin", 0x0000, 0x2000, CRC(10b93e38) SHA1(0b1a23d384bfde4cd27c482f667eedd94f8f2406) )
	ROM_LOAD( "vectrixr.bin", 0x0000, 0x2000, CRC(33f9b06b) SHA1(6a1dffe5c2c0254824a8dddb8543f86d9ad8f173) )
ROM_END

COMP( 1983, vectrix, 0, 0, vectrix, vectrix, vectrix_state, 0, "Vectrix", "VX384 Graphics Processor Terminal", MACHINE_IS_SKELETON )