/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GCSReceiver GCSReceiver 
 * @brief A receiver channel group carried over the telemetry link.
 *
 * Autogenerated files and functions for GCSReceiver Object
 
 * @{ 
 *
 * @file       gcsreceiver.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the GCSReceiver object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gcsreceiver.xml. 
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

#ifndef GCSRECEIVER_H
#define GCSRECEIVER_H

// Object constants
#define GCSRECEIVER_OBJID 0xCC7E1470
#define GCSRECEIVER_ISSINGLEINST 1
#define GCSRECEIVER_ISSETTINGS 0
#define GCSRECEIVER_NUMBYTES 16

// Generic interface functions
int32_t GCSReceiverInitialize();
UAVObjHandle GCSReceiverHandle();
void GCSReceiverSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint16_t Channel[8];

} __attribute__((packed)) __attribute__((aligned(4))) GCSReceiverData;

// Typesafe Object access functions
/**
 * @function GCSReceiverGet(dataOut)
 * @brief Populate a GCSReceiverData object
 * @param[out] dataOut 
 */
static inline int32_t GCSReceiverGet(GCSReceiverData *dataOut) { return UAVObjGetData(GCSReceiverHandle(), dataOut); }

static inline int32_t GCSReceiverSet(const GCSReceiverData *dataIn) { return UAVObjSetData(GCSReceiverHandle(), dataIn); }

static inline int32_t GCSReceiverInstGet(uint16_t instId, GCSReceiverData *dataOut) { return UAVObjGetInstanceData(GCSReceiverHandle(), instId, dataOut); }

static inline int32_t GCSReceiverInstSet(uint16_t instId, const GCSReceiverData *dataIn) { return UAVObjSetInstanceData(GCSReceiverHandle(), instId, dataIn); }

static inline int32_t GCSReceiverConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(GCSReceiverHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t GCSReceiverConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(GCSReceiverHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t GCSReceiverCreateInstance() { return UAVObjCreateInstance(GCSReceiverHandle(), &GCSReceiverSetDefaults); }

static inline void GCSReceiverRequestUpdate() { UAVObjRequestUpdate(GCSReceiverHandle()); }

static inline void GCSReceiverRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(GCSReceiverHandle(), instId); }

static inline void GCSReceiverUpdated() { UAVObjUpdated(GCSReceiverHandle()); }

static inline void GCSReceiverInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(GCSReceiverHandle(), instId); }

static inline int32_t GCSReceiverGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(GCSReceiverHandle(), dataOut); }

static inline int32_t GCSReceiverSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(GCSReceiverHandle(), dataIn); }

static inline int8_t GCSReceiverReadOnly() { return UAVObjReadOnly(GCSReceiverHandle()); }

// Field information
// Field Channel information
/* Number of elements for field Channel */
#define GCSRECEIVER_CHANNEL_NUMELEM 8


// set/Get functions
extern void GCSReceiverChannelSet( uint16_t *NewChannel );
extern void GCSReceiverChannelGet( uint16_t *NewChannel );


#endif // GCSRECEIVER_H

/**
 * @}
 * @}
 */