/*
 This project is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 Multiprotocol is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Multiprotocol.  If not, see <http://www.gnu.org/licenses/>.
 */

//******************
// Version
//******************
#define VERSION_MAJOR		1
#define VERSION_MINOR		1
#define VERSION_REVISION	6
#define VERSION_PATCH_LEVEL	38
//******************
// Protocols
//******************
enum PROTOCOLS
{
	MODE_SERIAL		= 0,	// Serial commands
	MODE_FLYSKY 	= 1,	// =>A7105
	MODE_HUBSAN		= 2,	// =>A7105
	MODE_FRSKYD		= 3,	// =>CC2500
	MODE_HISKY		= 4,	// =>NRF24L01
	MODE_V2X2		= 5,	// =>NRF24L01
	MODE_DSM		= 6,	// =>CYRF6936
	MODE_DEVO		= 7,	// =>CYRF6936
	MODE_YD717		= 8,	// =>NRF24L01
	MODE_KN			= 9,	// =>NRF24L01
	MODE_SYMAX		= 10,	// =>NRF24L01
	MODE_SLT		= 11,	// =>NRF24L01
	MODE_CX10		= 12,	// =>NRF24L01
	MODE_CG023		= 13,	// =>NRF24L01
	MODE_BAYANG		= 14,	// =>NRF24L01
	MODE_FRSKYX		= 15,	// =>CC2500
	MODE_ESKY		= 16,	// =>NRF24L01
	MODE_MT99XX		= 17,	// =>NRF24L01
	MODE_MJXQ		= 18,	// =>NRF24L01
	MODE_SHENQI		= 19,	// =>NRF24L01
	MODE_FY326		= 20,	// =>NRF24L01
	MODE_SFHSS		= 21,	// =>CC2500
	MODE_J6PRO		= 22,	// =>CYRF6936
	MODE_FQ777		= 23,	// =>NRF24L01
	MODE_ASSAN		= 24,	// =>NRF24L01
	MODE_FRSKYV		= 25,	// =>CC2500
	MODE_HONTAI		= 26,	// =>NRF24L01
	MODE_OPENLRS	= 27,	// =>OpenLRS hardware
	MODE_AFHDS2A	= 28,	// =>A7105
	MODE_Q2X2		= 29,	// =>NRF24L01, extension of CX-10 protocol
	MODE_WK2x01		= 30,	// =>CYRF6936
	MODE_Q303		= 31,	// =>NRF24L01
	MODE_GW008		= 32,	// =>NRF24L01
	MODE_DM002		= 33,	// =>NRF24L01
	MODE_CABELL		= 34,	// =>NRF24L01
	MODE_ESKY150	= 35,	// =>NRF24L01
	MODE_H8_3D		= 36,	// =>NRF24L01
};

enum Flysky
{
	Flysky	= 0,
	V9X9	= 1,
	V6X6	= 2,
	V912	= 3,
	CX20	= 4
};
enum Hubsan
{
	H107	= 0,
	H301	= 1,
	H501	= 2,
};
enum AFHDS2A
{
	PWM_IBUS = 0,
	PPM_IBUS = 1,
	PWM_SBUS = 2,
	PPM_SBUS = 3,
};
enum Hisky
{
	Hisky	= 0,
	HK310	= 1
};
enum DSM
{
	DSM2_22	= 0,
	DSM2_11	= 1,
	DSMX_22	= 2,
	DSMX_11	= 3,
	DSM_AUTO = 4
};
enum YD717
{       			
	YD717	= 0,
	SKYWLKR	= 1,
	SYMAX4	= 2,
	XINXUN	= 3,
	NIHUI	= 4
};
enum KN
{
	WLTOYS	= 0,
	FEILUN	= 1
};
enum SYMAX
{
	SYMAX	= 0,
	SYMAX5C	= 1
};
enum SLT
{
	SLT		= 0,
	VISTA	= 1
};
enum CX10
{
	CX10_GREEN	= 0,
	CX10_BLUE	= 1,	// also compatible with CX10-A, CX12
	DM007		= 2,
	JC3015_1	= 4,
	JC3015_2	= 5,
	MK33041		= 6,
};
enum Q2X2
{
	Q222		= 8,
	Q242		= 9,
	Q282		= 10,
};
enum CG023
{
    CG023	= 0,
    YD829	= 1,
};
enum BAYANG
{
    BAYANG	= 0,
    H8S3D	= 1,
    X16_AH  = 2,
	IRDRONE = 3,
};
enum MT99XX
{
	MT99	= 0,
	H7		= 1,
	YZ		= 2,
	LS		= 3,
	FY805	= 4
};
enum MJXQ
{
	WLH08	= 0,
	X600	= 1,
	X800	= 2,
	H26D	= 3,
	E010	= 4,
	H26WH	= 5,
};
enum FRSKYX
{
	CH_16	= 0,
	CH_8	= 1,
	EU_16	= 2,
	EU_8	= 3,
};
enum HONTAI
{
	FORMAT_HONTAI	= 0,
	FORMAT_JJRCX1	= 1,
	FORMAT_X5C1		= 2,
	FORMAT_FQ777_951 =3
};
enum V2X2
{
	V2X2	= 0,
	JXD506	= 1,
};
enum FY326
{
	FY326	= 0,
	FY319	= 1,
};
enum WK2x01
{
	WK2801	= 0,
	WK2401	= 1,
	W6_5_1	= 2,
	W6_6_1	= 3,
	W6_HEL	= 4,
	W6_HEL_I= 5,
};
enum Q303
{
	Q303	= 0,
	CX35	= 1,
	CX10D	= 2,
	CX10WD	= 3,
};
enum CABELL
{
	CABELL_V3			= 0,
	CABELL_V3_TELEMETRY	= 1,
	CABELL_SET_FAIL_SAFE= 6,
	CABELL_UNBIND		= 7,
};
enum H8_3D
{
	H8_3D	= 0,
	H20H	= 1,
	H20MINI	= 2,
	H30MINI	= 3,
};

#define NONE 		0
#define P_HIGH		1
#define P_LOW		0
#define AUTOBIND	1
#define NO_AUTOBIND	0

struct PPM_Parameters
{
	uint8_t protocol : 6;
	uint8_t sub_proto : 3;
	uint8_t rx_num : 4;
	uint8_t power : 1;
	uint8_t autobind : 1;
	uint8_t option;
};

// Telemetry

enum MultiPacketTypes {
	MULTI_TELEMETRY_STATUS  = 1,
	MULTI_TELEMETRY_SPORT   = 2,
	MULTI_TELEMETRY_HUB     = 3,
	MULTI_TELEMETRY_DSM     = 4,
	MULTI_TELEMETRY_DSMBIND = 5,
	MULTI_TELEMETRY_AFHDS2A = 6,
	MULTI_TELEMETRY_INPUTSYNC=8,
	MULTI_COMMAND_CONFIG    = 0x80,
	MULTI_COMMAND_FAILSAFE	 =0x81,
};

enum FailSafeMode {
	FAILSAFE_NOTSET 	= 0,
	FAILSAFE_HOLD		= 1,
	FAILSAFE_CUSTOM		= 2,
	FAILSAFE_NOPULSES	= 3,
	FAILSAFE_RECEIVER	= 4,
	// Use during update so we can get away with only one copy of Failsafe channels
	FAILSEFASE_INVALID	= 0xfe
};

#define FAILSAFE_CHANNEL_HOLD	0
#define	FAILSAFE_CHANNEL_NOPULSES	2047

// Macros
#define NOP() __asm__ __volatile__("nop")

//***************
//***  Flags  ***
//***************
#define RX_FLAG_on			protocol_flags |= _BV(0)
#define RX_FLAG_off			protocol_flags &= ~_BV(0)
#define IS_RX_FLAG_on		( ( protocol_flags & _BV(0) ) !=0 )
//
#define CHANGE_PROTOCOL_FLAG_on		protocol_flags |= _BV(1)
#define CHANGE_PROTOCOL_FLAG_off	protocol_flags &= ~_BV(1)
#define IS_CHANGE_PROTOCOL_FLAG_on	( ( protocol_flags & _BV(1) ) !=0 )
//
#define POWER_FLAG_on		protocol_flags |= _BV(2)
#define POWER_FLAG_off		protocol_flags &= ~_BV(2)
#define IS_POWER_FLAG_on	( ( protocol_flags & _BV(2) ) !=0 )
//
#define RANGE_FLAG_on		protocol_flags |= _BV(3)
#define RANGE_FLAG_off		protocol_flags &= ~_BV(3)
#define IS_RANGE_FLAG_on	( ( protocol_flags & _BV(3) ) !=0 )
//
#define AUTOBIND_FLAG_on	protocol_flags |= _BV(4)
#define AUTOBIND_FLAG_off	protocol_flags &= ~_BV(4)
#define IS_AUTOBIND_FLAG_on	( ( protocol_flags & _BV(4) ) !=0 )
//
#define BIND_BUTTON_FLAG_on		protocol_flags |= _BV(5)
#define BIND_BUTTON_FLAG_off	protocol_flags &= ~_BV(5)
#define IS_BIND_BUTTON_FLAG_on	( ( protocol_flags & _BV(5) ) !=0 )
//PPM RX OK
#define PPM_FLAG_off		protocol_flags &= ~_BV(6)
#define PPM_FLAG_on			protocol_flags |= _BV(6)
#define IS_PPM_FLAG_on		( ( protocol_flags & _BV(6) ) !=0 )
//Bind flag
#define BIND_IN_PROGRESS	protocol_flags &= ~_BV(7)
#define BIND_DONE			protocol_flags |= _BV(7)
#define IS_BIND_DONE_on		( ( protocol_flags & _BV(7) ) !=0 )
//
#define BAD_PROTO_off		protocol_flags2 &= ~_BV(0)
#define BAD_PROTO_on		protocol_flags2 |= _BV(0)
#define IS_BAD_PROTO_on		( ( protocol_flags2 & _BV(0) ) !=0 )
//
#define RX_DONOTUPDTAE_off	protocol_flags2 &= ~_BV(1)
#define RX_DONOTUPDTAE_on	protocol_flags2 |= _BV(1)
#define IS_RX_DONOTUPDTAE_on	( ( protocol_flags2 & _BV(1) ) !=0 )
//
#define RX_MISSED_BUFF_off	protocol_flags2 &= ~_BV(2)
#define RX_MISSED_BUFF_on	protocol_flags2 |= _BV(2)
#define IS_RX_MISSED_BUFF_on	( ( protocol_flags2 & _BV(2) ) !=0 )
//TX Pause
#define TX_MAIN_PAUSE_off	protocol_flags2 &= ~_BV(3)
#define TX_MAIN_PAUSE_on		protocol_flags2 |= _BV(3)
#define IS_TX_MAIN_PAUSE_on	( ( protocol_flags2 & _BV(3) ) !=0 )
#define TX_RX_PAUSE_off		protocol_flags2 &= ~_BV(4)
#define TX_RX_PAUSE_on		protocol_flags2 |= _BV(4)
#define IS_TX_RX_PAUSE_on	( ( protocol_flags2 & _BV(4) ) !=0 )
#define IS_TX_PAUSE_on		( ( protocol_flags2 & (_BV(4)|_BV(3)) ) !=0 )
//Signal OK
#define INPUT_SIGNAL_off	protocol_flags2 &= ~_BV(5)
#define INPUT_SIGNAL_on		protocol_flags2 |= _BV(5)
#define IS_INPUT_SIGNAL_on	( ( protocol_flags2 & _BV(5) ) !=0 )
#define IS_INPUT_SIGNAL_off	( ( protocol_flags2 & _BV(5) ) ==0 )
//Bind from channel
#define BIND_CH_PREV_off	protocol_flags2 &= ~_BV(6)
#define BIND_CH_PREV_on		protocol_flags2 |= _BV(6)
#define IS_BIND_CH_PREV_on	( ( protocol_flags2 & _BV(6) ) !=0 )
#define IS_BIND_CH_PREV_off	( ( protocol_flags2 & _BV(6) ) ==0 )
//Wait for bind
#define WAIT_BIND_off		protocol_flags2 &= ~_BV(7)
#define WAIT_BIND_on		protocol_flags2 |= _BV(7)
#define IS_WAIT_BIND_on		( ( protocol_flags2 & _BV(7) ) !=0 )
#define IS_WAIT_BIND_off	( ( protocol_flags2 & _BV(7) ) ==0 )

//Configuration
#define IS_TELEMTRY_INVERSION_ON	(multi_config & 0x01)
#define IS_MULTI_TELEMETRY_ON		(multi_config & 0x02)
#define IS_EXTRA_TELEMETRY_ON       (multi_config & 0x04)

// Failsafe
#define failsafeToPPM(i)			(Failsafe_data[i]* 5/8+860)
#define isNormalFailsafeChanel(i)	(Failsafe_data[i] != FAILSAFE_CHANNEL_HOLD && Failsafe_data[i] != FAILSAFE_CHANNEL_NOPULSES)


//Status messages
#if defined(STM32_BOARD) && defined (SERIAL_DEBUG)
	#define debug(msg, ...)  {char buf[64]; sprintf(buf, msg "\r\n", ##__VA_ARGS__); Serial.write(buf);}
#else
	#define debug(...)
	#undef SERIAL_DEBUG
#endif

//********************
//*** Blink timing ***
//********************
#define BLINK_BIND_TIME				100
#define BLINK_SERIAL_TIME			500
#define BLINK_PPM_TIME				1000
#define BLINK_BAD_PROTO_TIME_HIGH	50
#define BLINK_BAD_PROTO_TIME_LOW	1000
#define BLINK_WAIT_BIND_TIME_HIGH	1000
#define BLINK_WAIT_BIND_TIME_LOW	100


//*******************
//***  AUX flags  ***
//*******************
#define GET_FLAG(ch, mask) ( ch ? mask : 0)
#define Servo_AUX1	(Servo_AUX & _BV(0))
#define Servo_AUX2	(Servo_AUX & _BV(1))
#define Servo_AUX3	(Servo_AUX & _BV(2))
#define Servo_AUX4	(Servo_AUX & _BV(3))
#define Servo_AUX5	(Servo_AUX & _BV(4))
#define Servo_AUX6	(Servo_AUX & _BV(5))
#define Servo_AUX7	(Servo_AUX & _BV(6))
#define Servo_AUX8	(Servo_AUX & _BV(7))
#define Servo_AUX9	(Servo_data[AUX9 ]>PPM_SWITCH)
#define Servo_AUX10	(Servo_data[AUX10]>PPM_SWITCH)

//************************
//***  Power settings  ***
//************************
enum {
	TXPOWER_100uW,
	TXPOWER_300uW,
	TXPOWER_1mW,
	TXPOWER_3mW,
	TXPOWER_10mW,
	TXPOWER_30mW,
	TXPOWER_100mW,
	TXPOWER_150mW
};

// A7105 power
//	Power amp is ~+16dBm so:
enum A7105_POWER
{
	A7105_POWER_0 = 0x00<<3 | 0x00,	// TXPOWER_100uW  = -23dBm == PAC=0 TBG=0
	A7105_POWER_1 = 0x00<<3 | 0x01,	// TXPOWER_300uW  = -20dBm == PAC=0 TBG=1
	A7105_POWER_2 = 0x00<<3 | 0x02,	// TXPOWER_1mW    = -16dBm == PAC=0 TBG=2
	A7105_POWER_3 = 0x00<<3 | 0x04,	// TXPOWER_3mW    = -11dBm == PAC=0 TBG=4
	A7105_POWER_4 = 0x01<<3 | 0x05,	// TXPOWER_10mW   =  -6dBm == PAC=1 TBG=5
	A7105_POWER_5 = 0x02<<3 | 0x07,	// TXPOWER_30mW   =   0dBm == PAC=2 TBG=7
	A7105_POWER_6 = 0x03<<3 | 0x07,	// TXPOWER_100mW  =   1dBm == PAC=3 TBG=7
	A7105_POWER_7 = 0x03<<3 | 0x07	// TXPOWER_150mW  =   1dBm == PAC=3 TBG=7
};
#define A7105_HIGH_POWER	A7105_POWER_7
#define	A7105_LOW_POWER		A7105_POWER_3
#define	A7105_RANGE_POWER	A7105_POWER_0
#define	A7105_BIND_POWER	A7105_POWER_0

// NRF Power
// Power setting is 0..3 for nRF24L01
// Claimed power amp for nRF24L01 from eBay is 20dBm. 
enum NRF_POWER
{						//      Raw            w 20dBm PA
	NRF_POWER_0 = 0x00,	// 0 : -18dBm  (16uW)   2dBm (1.6mW)
	NRF_POWER_1 = 0x01,	// 1 : -12dBm  (60uW)   8dBm   (6mW)
	NRF_POWER_2 = 0x02,	// 2 :  -6dBm (250uW)  14dBm  (25mW)
	NRF_POWER_3 = 0x03	// 3 :   0dBm   (1mW)  20dBm (100mW)
};
#define NRF_HIGH_POWER		NRF_POWER_2
#define	NRF_LOW_POWER		NRF_POWER_1
#define	NRF_RANGE_POWER		NRF_POWER_0
#define	NRF_BIND_POWER		NRF_POWER_0

// CC2500 power output from the chip itself
// The numbers do not take into account any outside amplifier
enum CC2500_POWER
{
	CC2500_POWER_0  = 0x00,	// –55dbm or less
	CC2500_POWER_1  = 0x50,	// -30dbm
	CC2500_POWER_2  = 0x44, // –28dbm
	CC2500_POWER_3  = 0xC0, // –26dbm
	CC2500_POWER_4  = 0x84, // –24dbm
	CC2500_POWER_5  = 0x81, // –22dbm
	CC2500_POWER_6  = 0x46, // –20dbm
	CC2500_POWER_7  = 0x93, // –18dbm
	CC2500_POWER_8  = 0x55, // –16dbm
	CC2500_POWER_9  = 0x8D, // –14dbm
	CC2500_POWER_10 = 0xC6,	// -12dbm
	CC2500_POWER_11 = 0x97,	// -10dbm
	CC2500_POWER_12 = 0x6E,	//  -8dbm
	CC2500_POWER_13 = 0x7F,	//  -6dbm
	CC2500_POWER_14 = 0xA9,	//  -4dbm
	CC2500_POWER_15 = 0xBB,	//  -2dbm
	CC2500_POWER_16 = 0xFE,	//   0dbm
	CC2500_POWER_17 = 0xFF	//  +1dbm
};
#define CC2500_HIGH_POWER	CC2500_POWER_17
#define CC2500_LOW_POWER	CC2500_POWER_13
#define CC2500_RANGE_POWER	CC2500_POWER_1
#define CC2500_BIND_POWER	CC2500_POWER_1

// CYRF power
enum CYRF_POWER
{
	CYRF_POWER_0 = 0x00,	// -35dbm
	CYRF_POWER_1 = 0x01,	// -30dbm
	CYRF_POWER_2 = 0x02,	// -24dbm
	CYRF_POWER_3 = 0x03,	// -18dbm
	CYRF_POWER_4 = 0x04,	// -13dbm
	CYRF_POWER_5 = 0x05,	//  -5dbm
	CYRF_POWER_6 = 0x06,	//   0dbm
	CYRF_POWER_7 = 0x07		//  +4dbm
};
#define CYRF_HIGH_POWER		CYRF_POWER_7
#define	CYRF_LOW_POWER		CYRF_POWER_3
#define	CYRF_RANGE_POWER	CYRF_POWER_1	// 1/30 of the full power distance
#define	CYRF_BIND_POWER		CYRF_POWER_0

enum TXRX_State {
	TXRX_OFF,
	TX_EN,
	RX_EN
};

// Packet ack status values
enum {
	PKT_PENDING = 0,
	PKT_ACKED,
	PKT_TIMEOUT
};

// baudrate defines for serial
#define SPEED_100K	0
#define SPEED_9600	1
#define SPEED_57600	2
#define SPEED_125K	3

/** EEPROM Layout */
#define EEPROM_ID_OFFSET		10		// Module ID (4 bytes)
#define EEPROM_ID_VALID_OFFSET	20		// 1 byte flag that ID is valid
#define MODELMODE_EEPROM_OFFSET	30		// Autobind mode, 1 byte per model, end is 46
#define AFHDS2A_EEPROM_OFFSET	50		// RX ID, 4 byte per model id, end is 114
#define CONFIG_EEPROM_OFFSET 	120		// Current configuration of the multimodule


//****************************************
//*** MULTI protocol serial definition ***
//****************************************
/*
**************************
16 channels serial protocol
**************************
Serial: 100000 Baud 8e2      _ xxxx xxxx p --
  Total of 26 bytes
  Stream[0]   = 0x55	sub_protocol values are 0..31
  Stream[0]   = 0x54	sub_protocol values are 32..63
   header
  Stream[1]   = sub_protocol|BindBit|RangeCheckBit|AutoBindBit;
   sub_protocol is 0..31 (bits 0..4), value should be added with 32 if Stream[0] = 0x54
   =>	Reserved	0
					Flysky		1
					Hubsan		2
					FrskyD		3
					Hisky		4
					V2x2		5
					DSM			6
					Devo		7
					YD717		8
					KN			9
					SymaX		10
					SLT			11
					CX10		12
					CG023		13
					Bayang		14
					FrskyX		15
					ESky		16
					MT99XX		17
					MJXQ		18
					SHENQI		19
					FY326		20
					SFHSS		21
					J6PRO		22
					FQ777		23
					ASSAN		24
					FrskyV		25
					HONTAI		26
					OpenLRS		27
					AFHDS2A		28
					Q2X2		29
					WK2x01		30
					Q303		31
					GW008		32
					DM002		33
					CABELL		34
					ESKY150		35
					H8_3D		36
   BindBit=>		0x80	1=Bind/0=No
   AutoBindBit=>	0x40	1=Yes /0=No
   RangeCheck=>		0x20	1=Yes /0=No
  Stream[2]   = RxNum | Power | Type;
   RxNum value is 0..15 (bits 0..3)
   Type is 0..7 <<4     (bit 4..6)
		sub_protocol==Flysky
			Flysky		0
			V9x9		1
			V6x6		2
			V912		3
			CX20		4
		sub_protocol==Hubsan
			H107		0
			H301		1
			H501		2
		sub_protocol==Hisky
			Hisky		0
			HK310		1
		sub_protocol==DSM
			DSM2_22 	0
			DSM2_11 	1
			DSMX_22 	2
			DSMX_11 	3
			DSM_AUTO	4
		sub_protocol==YD717
			YD717		0
			SKYWLKR		1
			SYMAX4		2
			XINXUN		3
			NIHUI		4
		sub_protocol==KN
			WLTOYS		0
			FEILUN		1
		sub_protocol==SYMAX
			SYMAX		0
			SYMAX5C		1
		sub_protocol==CX10
			CX10_GREEN	0
			CX10_BLUE	1	// also compatible with CX10-A, CX12
			DM007		2
			---			3
			JC3015_1	4
			JC3015_2	5
			MK33041		6
		sub_protocol==Q2X2
			Q222		0
			Q242		1
			Q282		2
		sub_protocol==SLT
			SLT			0
			VISTA		1
		sub_protocol==CG023
			CG023		0
			YD829		1
		sub_protocol==BAYANG
			BAYANG		0
			H8S3D		1
			X16_AH		2
			IRDRONE		3
		sub_protocol==MT99XX
			MT99		0
			H7			1
			YZ			2
			LS			3
			FY805		4
		sub_protocol==MJXQ
			WLH08		0
			X600		1
			X800		2
			H26D		3
			E010		4
			H26WH		5
		sub_protocol==FRSKYX
			CH_16		0
			CH_8		1
			EU_16		2
			EU_8		3
		sub_protocol==HONTAI
			FORMAT_HONTAI	0
			FORMAT_JJRCX1	1
			FORMAT_X5C1		2
			FORMAT_FQ777_951 3
		sub_protocol==AFHDS2A
			PWM_IBUS	0
			PPM_IBUS	1
			PWM_SBUS	2
			PPM_SBUS	3
		sub_protocol==V2X2
			V2X2		0
			JXD506		1
		sub_protocol==FY326
			FY326		0
			FY319		1
		sub_protocol==WK2x01
			WK2801		0
			WK2401		1
			W6_5_1		2
			W6_6_1		3
			W6_HEL		4
			W6_HEL_I	5
		sub_protocol==Q303
			Q303		0
			CX35		1
			CX10D		2
			CX10WD		3
		sub_protocol==CABELL
			CABELL_V3				0
			CABELL_V3_TELEMETRY		1
			CABELL_SET_FAIL_SAFE	6
			CABELL_UNBIND			7
		sub_protocol==H8_3D
			H8_3D		0
			H20H		1
			H20MINI		2
			H30MINI		3

   Power value => 0x80	0=High/1=Low
  Stream[3]   = option_protocol;
   option_protocol value is -128..127
  Stream[4] to [25] = Channels
   16 Channels on 11 bits (0..2047)
	0		-125%
    204		-100%
	1024	   0%
	1843	+100%
	2047	+125%
   Channels bits are concatenated to fit in 22 bytes like in SBUS protocol
*/
/*
  Multimodule Status
  Based on #define MULTI_STATUS

  Serial: 100000 Baud 8e2 (same as input)

  Format: header (2 bytes) + data (variable)
   [0] = 'M' (0x4d)
   [1] Length (excluding the 2 header bytes)
   [2-xx] data

  Type = 0x01 Multimodule Status:
   [2] Flags
   0x01 = Input signal detected
   0x02 = Serial mode enabled
   0x04 = protocol is valid
   0x08 = module is in binding mode
   0x10 = module waits a bind event to load the protocol
   [3] major
   [4] minor
   [5] revision
   [6] patchlevel,
   version of multi code, should be displayed as major.minor.revision.patchlevel
*/
/*
  Multiprotocol telemetry/command definition for OpenTX
  Based on #define MULTI_TELEMETRY enables OpenTX to get the multimodule status and select the correct telemetry type automatically.

  Serial: 100000 Baud 8e2 (same as input)

  TLV Protocol (type, length, value), allows a TX to ignore unknown messages

  Format: header (4 byte) + data (variable)
   [0] = 'M' (0x4d)
   [1] = 'P' (0x50)

   The first byte is deliberatly chosen to be different from other telemetry protocols
   (e.g. 0xAA for DSM/Multi, 0xAA for FlySky and 0x7e for Frsky) to allow a TX to detect
   the telemetry format of older versions

   [2] Type (see below)
   [3] Length (excluding the 4 header bytes)

   [4-xx] data

  Commands from TX to multi cannot be longer than 22 bytes (RXLen -4byte header)

  Type = 0x01 Multimodule Status:
   [4] Flags
   0x01 = Input signal detected
   0x02 = Serial mode enabled
   0x04 = protocol is valid
   0x08 = module is in binding mode
   0x10 = module waits a bind event to load the protocol
   [5] major
   [6] minor
   [7] revision
   [8] patchlevel,
   version of multi code, should be displayed as major.minor.revision.patchlevel

   more information can be added by specifing a longer length of the type, the TX will just ignore these bytes


  Type 0x02 Frksy S.port telemetry
  Type 0x03 Frsky Hub telemetry

	*No* usual frsky byte stuffing and without start/stop byte (0x7e)


  Type 0x04 Spektrum telemetry data
   data[0] RSSI
   data[1-15] telemetry data

  Type 0x05 DSM bind data
	data[0-16] DSM bind data

    technically DSM bind data is only 10 bytes but multi sends 16
    like with telemtery, check length field)

  Type 0x06 Flysky AFHDS2 telemetry data
   length: 29
   data[0] = RSSI value
   data[1-28] telemetry data


 Type 0x08 Input synchronisation
    Informs the TX about desired rate and current delay
    length: 4
    data[0-1]     Desired refresh rate in µs
    data[2-3]     Time (µs) between last serial servo input received and servo input needed (lateness), TX should adjust its
                  sending time to minimise this value.
	data[4]		  Interval of this message in ms
 	data[5]		  Input delay target in 10µs

   Note that there are protocols (AFHDS2A) that have a refresh rate that is smaller than the maximum achievable
   refresh rate via the serial protocol, in this case, the TX should double the rate and also subract this
   refresh rate from the input lag if the input lag is more than the desired refresh rate.

   The remote should try to get to zero of  (inputdelay+target*10).

Commands from TX to module use values > 127 for command type

 Type 0x80 Module Configuration
   This sent from the TX to Multi to configure inversion and multi telemetry type
   length: 1
   data[0] flags
     0x01 Telemetry inversion (1 = inverted)
     0x02 Use Multi telemetry protocol (if 0 use multi status)
     0x04 Send extra telemetry (type 0x08) to allow input synchronisation


 Type 0x81 Failsafe data
	length: 23
	data[0] Failsafe mode:
		 0 - Failsafe not set
		 1 - Failsafe hold, keep last received values
		 2 - Failsafe custom, use the values from the channels
		 3 - Failsafe nopulses, stop sending pulses from the receiver
		 4 - Failsafe receiver, use receiver stored values

		Many of these many modes don't work with all protocols, fallback to best
		available method
	data[1-22] Failsafe data, encoded like normal channel data, with the expection
		that 0 means hold for that channel and 2047 means no pulses

*/
