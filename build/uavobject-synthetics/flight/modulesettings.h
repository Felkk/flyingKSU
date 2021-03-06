/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ModuleSettings ModuleSettings 
 * @brief Optional module enable/disable configuration.
 *
 * Autogenerated files and functions for ModuleSettings Object
 
 * @{ 
 *
 * @file       modulesettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the ModuleSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: modulesettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef MODULESETTINGS_H
#define MODULESETTINGS_H

// Object constants
#define MODULESETTINGS_OBJID 0xA9418B16
#define MODULESETTINGS_ISSINGLEINST 1
#define MODULESETTINGS_ISSETTINGS 1
#define MODULESETTINGS_NUMBYTES 23

// Generic interface functions
int32_t ModuleSettingsInitialize();
UAVObjHandle ModuleSettingsHandle();
void ModuleSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t State[18];
    uint8_t TelemetrySpeed;
    uint8_t GPSSpeed;
    uint8_t GPSDataProtocol;
    uint8_t ComUsbBridgeSpeed;
    uint8_t I2CVMProgramSelect;

} __attribute__((packed)) __attribute__((aligned(4))) ModuleSettingsData;

// Typesafe Object access functions
/**
 * @function ModuleSettingsGet(dataOut)
 * @brief Populate a ModuleSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t ModuleSettingsGet(ModuleSettingsData *dataOut) { return UAVObjGetData(ModuleSettingsHandle(), dataOut); }

static inline int32_t ModuleSettingsSet(const ModuleSettingsData *dataIn) { return UAVObjSetData(ModuleSettingsHandle(), dataIn); }

static inline int32_t ModuleSettingsInstGet(uint16_t instId, ModuleSettingsData *dataOut) { return UAVObjGetInstanceData(ModuleSettingsHandle(), instId, dataOut); }

static inline int32_t ModuleSettingsInstSet(uint16_t instId, const ModuleSettingsData *dataIn) { return UAVObjSetInstanceData(ModuleSettingsHandle(), instId, dataIn); }

static inline int32_t ModuleSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(ModuleSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t ModuleSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(ModuleSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t ModuleSettingsCreateInstance() { return UAVObjCreateInstance(ModuleSettingsHandle(), &ModuleSettingsSetDefaults); }

static inline void ModuleSettingsRequestUpdate() { UAVObjRequestUpdate(ModuleSettingsHandle()); }

static inline void ModuleSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(ModuleSettingsHandle(), instId); }

static inline void ModuleSettingsUpdated() { UAVObjUpdated(ModuleSettingsHandle()); }

static inline void ModuleSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(ModuleSettingsHandle(), instId); }

static inline int32_t ModuleSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(ModuleSettingsHandle(), dataOut); }

static inline int32_t ModuleSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(ModuleSettingsHandle(), dataIn); }

static inline int8_t ModuleSettingsReadOnly() { return UAVObjReadOnly(ModuleSettingsHandle()); }

// Field information
// Field State information
/* Enumeration options for field State */
typedef enum { MODULESETTINGS_STATE_DISABLED=0, MODULESETTINGS_STATE_ENABLED=1 } ModuleSettingsStateOptions;
/* Array element names for field State */
typedef enum { MODULESETTINGS_STATE_AIRSPEED=0, MODULESETTINGS_STATE_ALTITUDE=1, MODULESETTINGS_STATE_ALTITUDEHOLD=2, MODULESETTINGS_STATE_AUTOTUNE=3, MODULESETTINGS_STATE_BATTERY=4, MODULESETTINGS_STATE_CAMERASTAB=5, MODULESETTINGS_STATE_COMUSBBRIDGE=6, MODULESETTINGS_STATE_FIXEDWINGPATHFOLLOWER=7, MODULESETTINGS_STATE_FAULT=8, MODULESETTINGS_STATE_GPS=9, MODULESETTINGS_STATE_OVEROSYNC=10, MODULESETTINGS_STATE_PATHPLANNER=11, MODULESETTINGS_STATE_RADIO=12, MODULESETTINGS_STATE_TXPID=13, MODULESETTINGS_STATE_VTOLPATHFOLLOWER=14, MODULESETTINGS_STATE_GENERICI2CSENSOR=15, MODULESETTINGS_STATE_UAVOMAVLINKBRIDGE=16, MODULESETTINGS_STATE_VIBRATIONANALYSIS=17 } ModuleSettingsStateElem;
/* Number of elements for field State */
#define MODULESETTINGS_STATE_NUMELEM 18
// Field TelemetrySpeed information
/* Enumeration options for field TelemetrySpeed */
typedef enum { MODULESETTINGS_TELEMETRYSPEED_2400=0, MODULESETTINGS_TELEMETRYSPEED_4800=1, MODULESETTINGS_TELEMETRYSPEED_9600=2, MODULESETTINGS_TELEMETRYSPEED_19200=3, MODULESETTINGS_TELEMETRYSPEED_38400=4, MODULESETTINGS_TELEMETRYSPEED_57600=5, MODULESETTINGS_TELEMETRYSPEED_115200=6 } ModuleSettingsTelemetrySpeedOptions;
// Field GPSSpeed information
/* Enumeration options for field GPSSpeed */
typedef enum { MODULESETTINGS_GPSSPEED_2400=0, MODULESETTINGS_GPSSPEED_4800=1, MODULESETTINGS_GPSSPEED_9600=2, MODULESETTINGS_GPSSPEED_19200=3, MODULESETTINGS_GPSSPEED_38400=4, MODULESETTINGS_GPSSPEED_57600=5, MODULESETTINGS_GPSSPEED_115200=6 } ModuleSettingsGPSSpeedOptions;
// Field GPSDataProtocol information
/* Enumeration options for field GPSDataProtocol */
typedef enum { MODULESETTINGS_GPSDATAPROTOCOL_NMEA=0, MODULESETTINGS_GPSDATAPROTOCOL_UBX=1 } ModuleSettingsGPSDataProtocolOptions;
// Field ComUsbBridgeSpeed information
/* Enumeration options for field ComUsbBridgeSpeed */
typedef enum { MODULESETTINGS_COMUSBBRIDGESPEED_2400=0, MODULESETTINGS_COMUSBBRIDGESPEED_4800=1, MODULESETTINGS_COMUSBBRIDGESPEED_9600=2, MODULESETTINGS_COMUSBBRIDGESPEED_19200=3, MODULESETTINGS_COMUSBBRIDGESPEED_38400=4, MODULESETTINGS_COMUSBBRIDGESPEED_57600=5, MODULESETTINGS_COMUSBBRIDGESPEED_115200=6 } ModuleSettingsComUsbBridgeSpeedOptions;
// Field I2CVMProgramSelect information
/* Enumeration options for field I2CVMProgramSelect */
typedef enum { MODULESETTINGS_I2CVMPROGRAMSELECT_ENDIANTEST=0, MODULESETTINGS_I2CVMPROGRAMSELECT_MATHTEST=1, MODULESETTINGS_I2CVMPROGRAMSELECT_NONE=2, MODULESETTINGS_I2CVMPROGRAMSELECT_OPBAROALTIMETER=3, MODULESETTINGS_I2CVMPROGRAMSELECT_USER=4 } ModuleSettingsI2CVMProgramSelectOptions;


// set/Get functions
extern void ModuleSettingsStateSet( uint8_t *NewState );
extern void ModuleSettingsStateGet( uint8_t *NewState );
extern void ModuleSettingsTelemetrySpeedSet( uint8_t *NewTelemetrySpeed );
extern void ModuleSettingsTelemetrySpeedGet( uint8_t *NewTelemetrySpeed );
extern void ModuleSettingsGPSSpeedSet( uint8_t *NewGPSSpeed );
extern void ModuleSettingsGPSSpeedGet( uint8_t *NewGPSSpeed );
extern void ModuleSettingsGPSDataProtocolSet( uint8_t *NewGPSDataProtocol );
extern void ModuleSettingsGPSDataProtocolGet( uint8_t *NewGPSDataProtocol );
extern void ModuleSettingsComUsbBridgeSpeedSet( uint8_t *NewComUsbBridgeSpeed );
extern void ModuleSettingsComUsbBridgeSpeedGet( uint8_t *NewComUsbBridgeSpeed );
extern void ModuleSettingsI2CVMProgramSelectSet( uint8_t *NewI2CVMProgramSelect );
extern void ModuleSettingsI2CVMProgramSelectGet( uint8_t *NewI2CVMProgramSelect );


#endif // MODULESETTINGS_H

/**
 * @}
 * @}
 */
