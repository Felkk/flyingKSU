/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FirmwareIAPObj FirmwareIAPObj 
 * @brief Queries board for SN, model, revision, and sends reset command
 *
 * Autogenerated files and functions for FirmwareIAPObj Object
 
 * @{ 
 *
 * @file       firmwareiapobj.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the FirmwareIAPObj object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: firmwareiapobj.xml. 
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

#ifndef FIRMWAREIAPOBJ_H
#define FIRMWAREIAPOBJ_H

// Object constants
#define FIRMWAREIAPOBJ_OBJID 0x5E6E8FDC
#define FIRMWAREIAPOBJ_ISSINGLEINST 1
#define FIRMWAREIAPOBJ_ISSETTINGS 0
#define FIRMWAREIAPOBJ_NUMBYTES 122

// Generic interface functions
int32_t FirmwareIAPObjInitialize();
UAVObjHandle FirmwareIAPObjHandle();
void FirmwareIAPObjSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint32_t crc;
    uint16_t Command;
    uint16_t BoardRevision;
    uint8_t Description[100];
    uint8_t CPUSerial[12];
    uint8_t BoardType;
    uint8_t ArmReset;

} __attribute__((packed)) __attribute__((aligned(4))) FirmwareIAPObjData;

// Typesafe Object access functions
/**
 * @function FirmwareIAPObjGet(dataOut)
 * @brief Populate a FirmwareIAPObjData object
 * @param[out] dataOut 
 */
static inline int32_t FirmwareIAPObjGet(FirmwareIAPObjData *dataOut) { return UAVObjGetData(FirmwareIAPObjHandle(), dataOut); }

static inline int32_t FirmwareIAPObjSet(const FirmwareIAPObjData *dataIn) { return UAVObjSetData(FirmwareIAPObjHandle(), dataIn); }

static inline int32_t FirmwareIAPObjInstGet(uint16_t instId, FirmwareIAPObjData *dataOut) { return UAVObjGetInstanceData(FirmwareIAPObjHandle(), instId, dataOut); }

static inline int32_t FirmwareIAPObjInstSet(uint16_t instId, const FirmwareIAPObjData *dataIn) { return UAVObjSetInstanceData(FirmwareIAPObjHandle(), instId, dataIn); }

static inline int32_t FirmwareIAPObjConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FirmwareIAPObjHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t FirmwareIAPObjConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FirmwareIAPObjHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t FirmwareIAPObjCreateInstance() { return UAVObjCreateInstance(FirmwareIAPObjHandle(), &FirmwareIAPObjSetDefaults); }

static inline void FirmwareIAPObjRequestUpdate() { UAVObjRequestUpdate(FirmwareIAPObjHandle()); }

static inline void FirmwareIAPObjRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FirmwareIAPObjHandle(), instId); }

static inline void FirmwareIAPObjUpdated() { UAVObjUpdated(FirmwareIAPObjHandle()); }

static inline void FirmwareIAPObjInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FirmwareIAPObjHandle(), instId); }

static inline int32_t FirmwareIAPObjGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FirmwareIAPObjHandle(), dataOut); }

static inline int32_t FirmwareIAPObjSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FirmwareIAPObjHandle(), dataIn); }

static inline int8_t FirmwareIAPObjReadOnly() { return UAVObjReadOnly(FirmwareIAPObjHandle()); }

// Field information
// Field crc information
// Field Command information
// Field BoardRevision information
// Field Description information
/* Number of elements for field Description */
#define FIRMWAREIAPOBJ_DESCRIPTION_NUMELEM 100
// Field CPUSerial information
/* Number of elements for field CPUSerial */
#define FIRMWAREIAPOBJ_CPUSERIAL_NUMELEM 12
// Field BoardType information
// Field ArmReset information


// set/Get functions
extern void FirmwareIAPObjcrcSet( uint32_t *Newcrc );
extern void FirmwareIAPObjcrcGet( uint32_t *Newcrc );
extern void FirmwareIAPObjCommandSet( uint16_t *NewCommand );
extern void FirmwareIAPObjCommandGet( uint16_t *NewCommand );
extern void FirmwareIAPObjBoardRevisionSet( uint16_t *NewBoardRevision );
extern void FirmwareIAPObjBoardRevisionGet( uint16_t *NewBoardRevision );
extern void FirmwareIAPObjDescriptionSet( uint8_t *NewDescription );
extern void FirmwareIAPObjDescriptionGet( uint8_t *NewDescription );
extern void FirmwareIAPObjCPUSerialSet( uint8_t *NewCPUSerial );
extern void FirmwareIAPObjCPUSerialGet( uint8_t *NewCPUSerial );
extern void FirmwareIAPObjBoardTypeSet( uint8_t *NewBoardType );
extern void FirmwareIAPObjBoardTypeGet( uint8_t *NewBoardType );
extern void FirmwareIAPObjArmResetSet( uint8_t *NewArmReset );
extern void FirmwareIAPObjArmResetGet( uint8_t *NewArmReset );


#endif // FIRMWAREIAPOBJ_H

/**
 * @}
 * @}
 */