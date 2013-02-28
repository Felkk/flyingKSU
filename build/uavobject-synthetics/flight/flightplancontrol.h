/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightPlanControl FlightPlanControl 
 * @brief Control the flight plan script
 *
 * Autogenerated files and functions for FlightPlanControl Object
 
 * @{ 
 *
 * @file       flightplancontrol.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the FlightPlanControl object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightplancontrol.xml. 
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

#ifndef FLIGHTPLANCONTROL_H
#define FLIGHTPLANCONTROL_H

// Object constants
#define FLIGHTPLANCONTROL_OBJID 0x53E3F180
#define FLIGHTPLANCONTROL_ISSINGLEINST 1
#define FLIGHTPLANCONTROL_ISSETTINGS 0
#define FLIGHTPLANCONTROL_NUMBYTES 1

// Generic interface functions
int32_t FlightPlanControlInitialize();
UAVObjHandle FlightPlanControlHandle();
void FlightPlanControlSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t Command;

} __attribute__((packed)) __attribute__((aligned(4))) FlightPlanControlData;

// Typesafe Object access functions
/**
 * @function FlightPlanControlGet(dataOut)
 * @brief Populate a FlightPlanControlData object
 * @param[out] dataOut 
 */
static inline int32_t FlightPlanControlGet(FlightPlanControlData *dataOut) { return UAVObjGetData(FlightPlanControlHandle(), dataOut); }

static inline int32_t FlightPlanControlSet(const FlightPlanControlData *dataIn) { return UAVObjSetData(FlightPlanControlHandle(), dataIn); }

static inline int32_t FlightPlanControlInstGet(uint16_t instId, FlightPlanControlData *dataOut) { return UAVObjGetInstanceData(FlightPlanControlHandle(), instId, dataOut); }

static inline int32_t FlightPlanControlInstSet(uint16_t instId, const FlightPlanControlData *dataIn) { return UAVObjSetInstanceData(FlightPlanControlHandle(), instId, dataIn); }

static inline int32_t FlightPlanControlConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FlightPlanControlHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t FlightPlanControlConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FlightPlanControlHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t FlightPlanControlCreateInstance() { return UAVObjCreateInstance(FlightPlanControlHandle(), &FlightPlanControlSetDefaults); }

static inline void FlightPlanControlRequestUpdate() { UAVObjRequestUpdate(FlightPlanControlHandle()); }

static inline void FlightPlanControlRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FlightPlanControlHandle(), instId); }

static inline void FlightPlanControlUpdated() { UAVObjUpdated(FlightPlanControlHandle()); }

static inline void FlightPlanControlInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FlightPlanControlHandle(), instId); }

static inline int32_t FlightPlanControlGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FlightPlanControlHandle(), dataOut); }

static inline int32_t FlightPlanControlSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FlightPlanControlHandle(), dataIn); }

static inline int8_t FlightPlanControlReadOnly() { return UAVObjReadOnly(FlightPlanControlHandle()); }

// Field information
// Field Command information
/* Enumeration options for field Command */
typedef enum { FLIGHTPLANCONTROL_COMMAND_START=0, FLIGHTPLANCONTROL_COMMAND_STOP=1, FLIGHTPLANCONTROL_COMMAND_KILL=2 } FlightPlanControlCommandOptions;


// set/Get functions
extern void FlightPlanControlCommandSet( uint8_t *NewCommand );
extern void FlightPlanControlCommandGet( uint8_t *NewCommand );


#endif // FLIGHTPLANCONTROL_H

/**
 * @}
 * @}
 */
