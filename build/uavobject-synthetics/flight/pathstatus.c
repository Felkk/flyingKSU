/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PathStatus PathStatus
 * @brief Status of the current path mode  Can come from any @ref PathFollower module
 *
 * Autogenerated files and functions for PathStatus Object
 * @{ 
 *
 * @file       pathstatus.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the PathStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: pathstatus.xml. 
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
#include "pathstatus.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t PathStatusInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(PATHSTATUS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(PATHSTATUS_OBJID,
			PATHSTATUS_ISSINGLEINST, PATHSTATUS_ISSETTINGS, PATHSTATUS_NUMBYTES, &PathStatusSetDefaults);

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
void PathStatusSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	PathStatusData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(PathStatusData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle PathStatusHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void PathStatusfractional_progressSet( float *Newfractional_progress )
{
	UAVObjSetDataField(PathStatusHandle(), (void*)Newfractional_progress, offsetof( PathStatusData, fractional_progress), sizeof(float));
}
void PathStatusfractional_progressGet( float *Newfractional_progress )
{
	UAVObjGetDataField(PathStatusHandle(), (void*)Newfractional_progress, offsetof( PathStatusData, fractional_progress), sizeof(float));
}
void PathStatuserrorSet( float *Newerror )
{
	UAVObjSetDataField(PathStatusHandle(), (void*)Newerror, offsetof( PathStatusData, error), sizeof(float));
}
void PathStatuserrorGet( float *Newerror )
{
	UAVObjGetDataField(PathStatusHandle(), (void*)Newerror, offsetof( PathStatusData, error), sizeof(float));
}
void PathStatusStatusSet( uint8_t *NewStatus )
{
	UAVObjSetDataField(PathStatusHandle(), (void*)NewStatus, offsetof( PathStatusData, Status), sizeof(uint8_t));
}
void PathStatusStatusGet( uint8_t *NewStatus )
{
	UAVObjGetDataField(PathStatusHandle(), (void*)NewStatus, offsetof( PathStatusData, Status), sizeof(uint8_t));
}


/**
 * @}
 */

