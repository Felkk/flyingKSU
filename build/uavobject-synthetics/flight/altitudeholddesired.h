/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AltitudeHoldDesired AltitudeHoldDesired 
 * @brief Holds the desired altitude (from manual control) as well as the desired attitude to pass through
 *
 * Autogenerated files and functions for AltitudeHoldDesired Object
 
 * @{ 
 *
 * @file       altitudeholddesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the AltitudeHoldDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: altitudeholddesired.xml. 
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

#ifndef ALTITUDEHOLDDESIRED_H
#define ALTITUDEHOLDDESIRED_H

// Object constants
#define ALTITUDEHOLDDESIRED_OBJID 0x495BAD6E
#define ALTITUDEHOLDDESIRED_ISSINGLEINST 1
#define ALTITUDEHOLDDESIRED_ISSETTINGS 0
#define ALTITUDEHOLDDESIRED_NUMBYTES 16

// Generic interface functions
int32_t AltitudeHoldDesiredInitialize();
UAVObjHandle AltitudeHoldDesiredHandle();
void AltitudeHoldDesiredSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Altitude;
    float Roll;
    float Pitch;
    float Yaw;

} __attribute__((packed)) __attribute__((aligned(4))) AltitudeHoldDesiredData;

// Typesafe Object access functions
/**
 * @function AltitudeHoldDesiredGet(dataOut)
 * @brief Populate a AltitudeHoldDesiredData object
 * @param[out] dataOut 
 */
static inline int32_t AltitudeHoldDesiredGet(AltitudeHoldDesiredData *dataOut) { return UAVObjGetData(AltitudeHoldDesiredHandle(), dataOut); }

static inline int32_t AltitudeHoldDesiredSet(const AltitudeHoldDesiredData *dataIn) { return UAVObjSetData(AltitudeHoldDesiredHandle(), dataIn); }

static inline int32_t AltitudeHoldDesiredInstGet(uint16_t instId, AltitudeHoldDesiredData *dataOut) { return UAVObjGetInstanceData(AltitudeHoldDesiredHandle(), instId, dataOut); }

static inline int32_t AltitudeHoldDesiredInstSet(uint16_t instId, const AltitudeHoldDesiredData *dataIn) { return UAVObjSetInstanceData(AltitudeHoldDesiredHandle(), instId, dataIn); }

static inline int32_t AltitudeHoldDesiredConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(AltitudeHoldDesiredHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t AltitudeHoldDesiredConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(AltitudeHoldDesiredHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t AltitudeHoldDesiredCreateInstance() { return UAVObjCreateInstance(AltitudeHoldDesiredHandle(), &AltitudeHoldDesiredSetDefaults); }

static inline void AltitudeHoldDesiredRequestUpdate() { UAVObjRequestUpdate(AltitudeHoldDesiredHandle()); }

static inline void AltitudeHoldDesiredRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(AltitudeHoldDesiredHandle(), instId); }

static inline void AltitudeHoldDesiredUpdated() { UAVObjUpdated(AltitudeHoldDesiredHandle()); }

static inline void AltitudeHoldDesiredInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(AltitudeHoldDesiredHandle(), instId); }

static inline int32_t AltitudeHoldDesiredGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(AltitudeHoldDesiredHandle(), dataOut); }

static inline int32_t AltitudeHoldDesiredSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(AltitudeHoldDesiredHandle(), dataIn); }

static inline int8_t AltitudeHoldDesiredReadOnly() { return UAVObjReadOnly(AltitudeHoldDesiredHandle()); }

// Field information
// Field Altitude information
// Field Roll information
// Field Pitch information
// Field Yaw information


// set/Get functions
extern void AltitudeHoldDesiredAltitudeSet( float *NewAltitude );
extern void AltitudeHoldDesiredAltitudeGet( float *NewAltitude );
extern void AltitudeHoldDesiredRollSet( float *NewRoll );
extern void AltitudeHoldDesiredRollGet( float *NewRoll );
extern void AltitudeHoldDesiredPitchSet( float *NewPitch );
extern void AltitudeHoldDesiredPitchGet( float *NewPitch );
extern void AltitudeHoldDesiredYawSet( float *NewYaw );
extern void AltitudeHoldDesiredYawGet( float *NewYaw );


#endif // ALTITUDEHOLDDESIRED_H

/**
 * @}
 * @}
 */
