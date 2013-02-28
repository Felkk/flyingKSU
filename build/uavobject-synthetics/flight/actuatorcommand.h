/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ActuatorCommand ActuatorCommand 
 * @brief Contains the pulse duration sent to each of the channels.  Set by @ref ActuatorModule
 *
 * Autogenerated files and functions for ActuatorCommand Object
 
 * @{ 
 *
 * @file       actuatorcommand.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the ActuatorCommand object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: actuatorcommand.xml. 
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

#ifndef ACTUATORCOMMAND_H
#define ACTUATORCOMMAND_H

// Object constants
#define ACTUATORCOMMAND_OBJID 0x5324CB8
#define ACTUATORCOMMAND_ISSINGLEINST 1
#define ACTUATORCOMMAND_ISSETTINGS 0
#define ACTUATORCOMMAND_NUMBYTES 24

// Generic interface functions
int32_t ActuatorCommandInitialize();
UAVObjHandle ActuatorCommandHandle();
void ActuatorCommandSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    int16_t Channel[10];
    uint16_t MaxUpdateTime;
    uint8_t UpdateTime;
    uint8_t NumFailedUpdates;

} __attribute__((packed)) __attribute__((aligned(4))) ActuatorCommandData;

// Typesafe Object access functions
/**
 * @function ActuatorCommandGet(dataOut)
 * @brief Populate a ActuatorCommandData object
 * @param[out] dataOut 
 */
static inline int32_t ActuatorCommandGet(ActuatorCommandData *dataOut) { return UAVObjGetData(ActuatorCommandHandle(), dataOut); }

static inline int32_t ActuatorCommandSet(const ActuatorCommandData *dataIn) { return UAVObjSetData(ActuatorCommandHandle(), dataIn); }

static inline int32_t ActuatorCommandInstGet(uint16_t instId, ActuatorCommandData *dataOut) { return UAVObjGetInstanceData(ActuatorCommandHandle(), instId, dataOut); }

static inline int32_t ActuatorCommandInstSet(uint16_t instId, const ActuatorCommandData *dataIn) { return UAVObjSetInstanceData(ActuatorCommandHandle(), instId, dataIn); }

static inline int32_t ActuatorCommandConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(ActuatorCommandHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t ActuatorCommandConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(ActuatorCommandHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t ActuatorCommandCreateInstance() { return UAVObjCreateInstance(ActuatorCommandHandle(), &ActuatorCommandSetDefaults); }

static inline void ActuatorCommandRequestUpdate() { UAVObjRequestUpdate(ActuatorCommandHandle()); }

static inline void ActuatorCommandRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(ActuatorCommandHandle(), instId); }

static inline void ActuatorCommandUpdated() { UAVObjUpdated(ActuatorCommandHandle()); }

static inline void ActuatorCommandInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(ActuatorCommandHandle(), instId); }

static inline int32_t ActuatorCommandGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(ActuatorCommandHandle(), dataOut); }

static inline int32_t ActuatorCommandSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(ActuatorCommandHandle(), dataIn); }

static inline int8_t ActuatorCommandReadOnly() { return UAVObjReadOnly(ActuatorCommandHandle()); }

// Field information
// Field Channel information
/* Number of elements for field Channel */
#define ACTUATORCOMMAND_CHANNEL_NUMELEM 10
// Field MaxUpdateTime information
// Field UpdateTime information
// Field NumFailedUpdates information


// set/Get functions
extern void ActuatorCommandChannelSet( int16_t *NewChannel );
extern void ActuatorCommandChannelGet( int16_t *NewChannel );
extern void ActuatorCommandMaxUpdateTimeSet( uint16_t *NewMaxUpdateTime );
extern void ActuatorCommandMaxUpdateTimeGet( uint16_t *NewMaxUpdateTime );
extern void ActuatorCommandUpdateTimeSet( uint8_t *NewUpdateTime );
extern void ActuatorCommandUpdateTimeGet( uint8_t *NewUpdateTime );
extern void ActuatorCommandNumFailedUpdatesSet( uint8_t *NewNumFailedUpdates );
extern void ActuatorCommandNumFailedUpdatesGet( uint8_t *NewNumFailedUpdates );


#endif // ACTUATORCOMMAND_H

/**
 * @}
 * @}
 */
