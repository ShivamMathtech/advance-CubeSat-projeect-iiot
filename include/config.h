/******************************************************************************
 *
 * Project      : CubeSat_UNO Flight Computer
 * File         : config.h
 * Author       : Shivam Singh
 * Description  :
 *      Centralized configuration parameters for flight software.
 *
 * Design Notes :
 *      NASA and CubeSat projects maintain all configurable values
 *      in dedicated configuration modules to avoid hardcoded values.
 *
 ******************************************************************************/

#ifndef CONFIG_H
#define CONFIG_H

/* Scheduler Periods (ms) */
#define SENSOR_UPDATE_PERIOD      100
#define TELEMETRY_UPDATE_PERIOD   1000
#define DISPLAY_UPDATE_PERIOD     500

/* GPS */
#define GPS_BAUD_RATE             9600

/* Battery */
#define LOW_BATTERY_THRESHOLD     6.8f

/* NRF24 */
#define RADIO_CHANNEL             90

#endif