/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup BaroAirspeed BaroAirspeed 
 * @brief The raw data from the dynamic pressure sensor with pressure, temperature and airspeed.
 *
 * Autogenerated files and functions for BaroAirspeed Object
 
 * @{ 
 *
 * @file       baroairspeed.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the BaroAirspeed object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: baroairspeed.xml. 
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

#ifndef BAROAIRSPEED_H
#define BAROAIRSPEED_H

// Object constants
#define BAROAIRSPEED_OBJID 0x10D6BD7C
#define BAROAIRSPEED_ISSINGLEINST 1
#define BAROAIRSPEED_ISSETTINGS 0
#define BAROAIRSPEED_NUMBYTES 15

// Generic interface functions
int32_t BaroAirspeedInitialize();
UAVObjHandle BaroAirspeedHandle();
void BaroAirspeedSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float CalibratedAirspeed;
    float GPSAirspeed;
    float TrueAirspeed;
    uint16_t SensorValue;
    uint8_t BaroConnected;

} __attribute__((packed)) __attribute__((aligned(4))) BaroAirspeedData;

// Typesafe Object access functions
/**
 * @function BaroAirspeedGet(dataOut)
 * @brief Populate a BaroAirspeedData object
 * @param[out] dataOut 
 */
static inline int32_t BaroAirspeedGet(BaroAirspeedData *dataOut) { return UAVObjGetData(BaroAirspeedHandle(), dataOut); }

static inline int32_t BaroAirspeedSet(const BaroAirspeedData *dataIn) { return UAVObjSetData(BaroAirspeedHandle(), dataIn); }

static inline int32_t BaroAirspeedInstGet(uint16_t instId, BaroAirspeedData *dataOut) { return UAVObjGetInstanceData(BaroAirspeedHandle(), instId, dataOut); }

static inline int32_t BaroAirspeedInstSet(uint16_t instId, const BaroAirspeedData *dataIn) { return UAVObjSetInstanceData(BaroAirspeedHandle(), instId, dataIn); }

static inline int32_t BaroAirspeedConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(BaroAirspeedHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t BaroAirspeedConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(BaroAirspeedHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t BaroAirspeedCreateInstance() { return UAVObjCreateInstance(BaroAirspeedHandle(), &BaroAirspeedSetDefaults); }

static inline void BaroAirspeedRequestUpdate() { UAVObjRequestUpdate(BaroAirspeedHandle()); }

static inline void BaroAirspeedRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(BaroAirspeedHandle(), instId); }

static inline void BaroAirspeedUpdated() { UAVObjUpdated(BaroAirspeedHandle()); }

static inline void BaroAirspeedInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(BaroAirspeedHandle(), instId); }

static inline int32_t BaroAirspeedGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(BaroAirspeedHandle(), dataOut); }

static inline int32_t BaroAirspeedSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(BaroAirspeedHandle(), dataIn); }

static inline int8_t BaroAirspeedReadOnly() { return UAVObjReadOnly(BaroAirspeedHandle()); }

// Field information
// Field CalibratedAirspeed information
// Field GPSAirspeed information
// Field TrueAirspeed information
// Field SensorValue information
// Field BaroConnected information
/* Enumeration options for field BaroConnected */
typedef enum { BAROAIRSPEED_BAROCONNECTED_FALSE=0, BAROAIRSPEED_BAROCONNECTED_TRUE=1 } BaroAirspeedBaroConnectedOptions;


// set/Get functions
extern void BaroAirspeedCalibratedAirspeedSet( float *NewCalibratedAirspeed );
extern void BaroAirspeedCalibratedAirspeedGet( float *NewCalibratedAirspeed );
extern void BaroAirspeedGPSAirspeedSet( float *NewGPSAirspeed );
extern void BaroAirspeedGPSAirspeedGet( float *NewGPSAirspeed );
extern void BaroAirspeedTrueAirspeedSet( float *NewTrueAirspeed );
extern void BaroAirspeedTrueAirspeedGet( float *NewTrueAirspeed );
extern void BaroAirspeedSensorValueSet( uint16_t *NewSensorValue );
extern void BaroAirspeedSensorValueGet( uint16_t *NewSensorValue );
extern void BaroAirspeedBaroConnectedSet( uint8_t *NewBaroConnected );
extern void BaroAirspeedBaroConnectedGet( uint8_t *NewBaroConnected );


#endif // BAROAIRSPEED_H

/**
 * @}
 * @}
 */