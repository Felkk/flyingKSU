/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup SystemStats SystemStats
 * @brief CPU and memory usage from OpenPilot computer. 
 *
 * Autogenerated files and functions for SystemStats Object
 * @{ 
 *
 * @file       systemstats.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the SystemStats object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: systemstats.xml. 
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

#include "openpilot.h"
#include "systemstats.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t SystemStatsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(SYSTEMSTATS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(SYSTEMSTATS_OBJID,
			SYSTEMSTATS_ISSINGLEINST, SYSTEMSTATS_ISSETTINGS, SYSTEMSTATS_NUMBYTES, &SystemStatsSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void SystemStatsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	SystemStatsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(SystemStatsData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 1000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 1000;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle SystemStatsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void SystemStatsFlightTimeSet( uint32_t *NewFlightTime )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewFlightTime, offsetof( SystemStatsData, FlightTime), sizeof(uint32_t));
}
void SystemStatsFlightTimeGet( uint32_t *NewFlightTime )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewFlightTime, offsetof( SystemStatsData, FlightTime), sizeof(uint32_t));
}
void SystemStatsHeapRemainingSet( uint32_t *NewHeapRemaining )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewHeapRemaining, offsetof( SystemStatsData, HeapRemaining), sizeof(uint32_t));
}
void SystemStatsHeapRemainingGet( uint32_t *NewHeapRemaining )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewHeapRemaining, offsetof( SystemStatsData, HeapRemaining), sizeof(uint32_t));
}
void SystemStatsEventSystemWarningIDSet( uint32_t *NewEventSystemWarningID )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewEventSystemWarningID, offsetof( SystemStatsData, EventSystemWarningID), sizeof(uint32_t));
}
void SystemStatsEventSystemWarningIDGet( uint32_t *NewEventSystemWarningID )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewEventSystemWarningID, offsetof( SystemStatsData, EventSystemWarningID), sizeof(uint32_t));
}
void SystemStatsObjectManagerCallbackIDSet( uint32_t *NewObjectManagerCallbackID )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewObjectManagerCallbackID, offsetof( SystemStatsData, ObjectManagerCallbackID), sizeof(uint32_t));
}
void SystemStatsObjectManagerCallbackIDGet( uint32_t *NewObjectManagerCallbackID )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewObjectManagerCallbackID, offsetof( SystemStatsData, ObjectManagerCallbackID), sizeof(uint32_t));
}
void SystemStatsObjectManagerQueueIDSet( uint32_t *NewObjectManagerQueueID )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewObjectManagerQueueID, offsetof( SystemStatsData, ObjectManagerQueueID), sizeof(uint32_t));
}
void SystemStatsObjectManagerQueueIDGet( uint32_t *NewObjectManagerQueueID )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewObjectManagerQueueID, offsetof( SystemStatsData, ObjectManagerQueueID), sizeof(uint32_t));
}
void SystemStatsIRQStackRemainingSet( uint16_t *NewIRQStackRemaining )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewIRQStackRemaining, offsetof( SystemStatsData, IRQStackRemaining), sizeof(uint16_t));
}
void SystemStatsIRQStackRemainingGet( uint16_t *NewIRQStackRemaining )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewIRQStackRemaining, offsetof( SystemStatsData, IRQStackRemaining), sizeof(uint16_t));
}
void SystemStatsCPULoadSet( uint8_t *NewCPULoad )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewCPULoad, offsetof( SystemStatsData, CPULoad), sizeof(uint8_t));
}
void SystemStatsCPULoadGet( uint8_t *NewCPULoad )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewCPULoad, offsetof( SystemStatsData, CPULoad), sizeof(uint8_t));
}
void SystemStatsCPUTempSet( int8_t *NewCPUTemp )
{
	UAVObjSetDataField(SystemStatsHandle(), (void*)NewCPUTemp, offsetof( SystemStatsData, CPUTemp), sizeof(int8_t));
}
void SystemStatsCPUTempGet( int8_t *NewCPUTemp )
{
	UAVObjGetDataField(SystemStatsHandle(), (void*)NewCPUTemp, offsetof( SystemStatsData, CPUTemp), sizeof(int8_t));
}


/**
 * @}
 */

