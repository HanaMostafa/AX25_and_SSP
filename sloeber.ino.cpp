#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2022-05-07 17:25:57

#include "Arduino.h"
#include <stdio.h>
#include <stdlib.h>
#include "ax25.h"
#include "AX25_CRC.h"
#include "Arduino.h"
#include "AX25_CRC.h"
#include "Arduino.h"
#include "ssp.h"
#include <stdlib.h>
#include <stdio.h>
#include "ax25.h"
#include "ssp.h"
#include "Arduino.h"
#include "ax25.h"

uint8 AX25_getControl(frameType frameType, frameSecondaryType secondaryType,     uint8 NS, uint8 NR, uint8 pollFinal) ;
void fillBuffer(uint16 *tx_ax_length,uint8 *layerflag,uint8 dest_to_framing,uint8 type_to_framing,uint8 *dataflag,uint8 *data,uint16 *data_length,uint8 *checkcontrol)  ;
void incrementStateVar(uint8 *stateVar) ;
void AX25_Manager(uint8 *a_control) ;
void AX25_buildFrame(uint8 *buffer, uint8 *a_info_ptr, uint16 *frameSize,     uint8 *ADDR, uint8 control, uint8 infoSize) ;
void AX25_deFrame(uint8 *buffer, uint16 frameSize, uint8 infoSize) ;
uint16 computeCRC( uint8* data_p, uint16 *length) ;
void AX25_putCRC(uint8 *buffer, uint16 *OpArrSize) ;
void receive_frame_here() ;
void serial_flush_buffer() ;
void printSerialTXBufferToSerial() ;
void readFrameFromSerial() ;
void setup() ;
void loop() ;
unsigned short compute_crc16(unsigned char *data_p, unsigned char length) ;
void getdata(uint8 *data, uint16 *data_length, uint8 *dataflag) ;
void control_layer(uint8 *Tx_App_data, uint16 data_length, uint8 Tx_App_desti,                    uint8 *Tx_Frm_srce, uint8 Tx_App_type, uint8 *Tx_Frm_type,                    uint8 *Tx_Frm_data, uint8 *Tx_Frm_desti, uint8 *Rx_Frm_type,                    uint8 *Rx_Frm_data, uint8 *Rx_Frm_dest, uint16 *Rx_length,                    uint8 *dataflag, uint8 *deframeflag, uint8 *txflag, uint8 *Rx_App_data,                    uint8 crcflag, uint16 *tx_size, uint8 *Rx_Frm_src, uint8 *layerflag, uint8 *checkcontrol,uint8 *dest_to_framing,uint8 *src_to_framing,uint8 *type_to_framing) ;
void ssp_build_frame(uint8 *txframe, uint8 *data, uint8 desti, uint8 srce,                      uint8 typee, uint16 tx_size, uint8 *txflag) ;
void ssp_deframing(uint8 *rxframe, uint8 *adddest, uint8 *addsrc, uint8 *type,                    uint8 *Rx_data, uint16 *length, uint8 *rxflag, uint8 *crcflag, uint8 *deframeflag) ;
void ssp_ax_deframing(uint8 *Control_To_SSP, uint8 *ax_rx_data, uint16 *ax_rx_length) ;
void ax_ssp_framing(uint8 *ax_ssp_frame, uint8 *Rx_App_data, uint8 *desti, uint8 srce,                      uint8 *typee, uint16 Rx_length, uint16 *tx_ax_length) ;


#include "AX25.ino"
#include "AX25_CRC.ino"
#include "gradAXandSSP.ino"
#include "ssp.ino"

#endif
