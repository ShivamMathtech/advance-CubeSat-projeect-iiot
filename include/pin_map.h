/******************************************************************************
 *
 * Project      : CubeSat_UNO Flight Computer
 * File         : pin_map.h
 * Description  :
 *      Defines all hardware pin assignments.
 *
 ******************************************************************************/

#ifndef PIN_MAP_H
#define PIN_MAP_H

/* NRF24 */
#define NRF_CE_PIN      7
#define NRF_CSN_PIN     8

/* SD Card */
#define SD_CS_PIN       10

/* Battery Monitor */
#define BATTERY_PIN     A0

/* GPS Software UART */
#define GPS_RX_PIN      3
#define GPS_TX_PIN      4

#endif