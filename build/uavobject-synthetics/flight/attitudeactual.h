/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup AttitudeActual AttitudeActual 
 * @brief The updated Attitude estimation from @ref AHRSCommsModule.
 *
 * Autogenerated files and functions for AttitudeActual Object
 
 * @{ 
 *
 * @file       attitudeactual.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the AttitudeActual object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: attitudeactual.xml. 
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

#ifndef ATTITUDEACTUAL_H
#define ATTITUDEACTUAL_H

// Object constants
#define ATTITUDEACTUAL_OBJID 0x33DAD5E6
#define ATTITUDEACTUAL_ISSINGLEINST 1
#define ATTITUDEACTUAL_ISSETTINGS 0
#define ATTITUDEACTUAL_NUMBYTES 28

// Generic interface functions
int32_t AttitudeActualInitialize();
UAVObjHandle AttitudeActualHandle();
void AttitudeActualSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float q1;
    float q2;
    float q3;
    float q4;
    float Roll;
    float Pitch;
    float Yaw;

} __attribute__((packed)) __attribute__((aligned(4))) AttitudeActualData;

// Typesafe Object access functions
/**
 * @function AttitudeActualGet(dataOut)
 * @brief Populate a AttitudeActualData object
 * @param[out] dataOut 
 */
static inline int32_t AttitudeActualGet(AttitudeActualData *dataOut) { return UAVObjGetData(AttitudeActualHandle(), dataOut); }

static inline int32_t AttitudeActualSet(const AttitudeActualData *dataIn) { return UAVObjSetData(AttitudeActualHandle(), dataIn); }

static inline int32_t AttitudeActualInstGet(uint16_t instId, AttitudeActualData *dataOut) { return UAVObjGetInstanceData(AttitudeActualHandle(), instId, dataOut); }

static inline int32_t AttitudeActualInstSet(uint16_t instId, const AttitudeActualData *dataIn) { return UAVObjSetInstanceData(AttitudeActualHandle(), instId, dataIn); }

static inline int32_t AttitudeActualConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(AttitudeActualHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t AttitudeActualConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(AttitudeActualHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t AttitudeActualCreateInstance() { return UAVObjCreateInstance(AttitudeActualHandle(), &AttitudeActualSetDefaults); }

static inline void AttitudeActualRequestUpdate() { UAVObjRequestUpdate(AttitudeActualHandle()); }

static inline void AttitudeActualRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(AttitudeActualHandle(), instId); }

static inline void AttitudeActualUpdated() { UAVObjUpdated(AttitudeActualHandle()); }

static inline void AttitudeActualInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(AttitudeActualHandle(), instId); }

static inline int32_t AttitudeActualGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(AttitudeActualHandle(), dataOut); }

static inline int32_t AttitudeActualSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(AttitudeActualHandle(), dataIn); }

static inline int8_t AttitudeActualReadOnly() { return UAVObjReadOnly(AttitudeActualHandle()); }

// Field information
// Field q1 information
// Field q2 information
// Field q3 information
// Field q4 information
// Field Roll information
// Field Pitch information
// Field Yaw information


// set/Get functions
extern void AttitudeActualq1Set( float *Newq1 );
extern void AttitudeActualq1Get( float *Newq1 );
extern void AttitudeActualq2Set( float *Newq2 );
extern void AttitudeActualq2Get( float *Newq2 );
extern void AttitudeActualq3Set( float *Newq3 );
extern void AttitudeActualq3Get( float *Newq3 );
extern void AttitudeActualq4Set( float *Newq4 );
extern void AttitudeActualq4Get( float *Newq4 );
extern void AttitudeActualRollSet( float *NewRoll );
extern void AttitudeActualRollGet( float *NewRoll );
extern void AttitudeActualPitchSet( float *NewPitch );
extern void AttitudeActualPitchGet( float *NewPitch );
extern void AttitudeActualYawSet( float *NewYaw );
extern void AttitudeActualYawGet( float *NewYaw );


#endif // ATTITUDEACTUAL_H

/**
 * @}
 * @}
 */
