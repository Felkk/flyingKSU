/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup I2CStats I2CStats
 * @brief Tracks statistics on the I2C bus.
 *
 * Autogenerated files and functions for I2CStats Object
 * @{ 
 *
 * @file       i2cstats.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the I2CStats object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: i2cstats.xml. 
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
#include "i2cstats.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t I2CStatsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(I2CSTATS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(I2CSTATS_OBJID,
			I2CSTATS_ISSINGLEINST, I2CSTATS_ISSETTINGS, I2CSTATS_NUMBYTES, &I2CStatsSetDefaults);

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
void I2CStatsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	I2CStatsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(I2CStatsData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 10000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 30000;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle I2CStatsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void I2CStatsevirq_logSet( uint32_t *Newevirq_log )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newevirq_log, offsetof( I2CStatsData, evirq_log), 5*sizeof(uint32_t));
}
void I2CStatsevirq_logGet( uint32_t *Newevirq_log )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newevirq_log, offsetof( I2CStatsData, evirq_log), 5*sizeof(uint32_t));
}
void I2CStatserirq_logSet( uint32_t *Newerirq_log )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newerirq_log, offsetof( I2CStatsData, erirq_log), 5*sizeof(uint32_t));
}
void I2CStatserirq_logGet( uint32_t *Newerirq_log )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newerirq_log, offsetof( I2CStatsData, erirq_log), 5*sizeof(uint32_t));
}
void I2CStatsevent_errorsSet( uint8_t *Newevent_errors )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newevent_errors, offsetof( I2CStatsData, event_errors), sizeof(uint8_t));
}
void I2CStatsevent_errorsGet( uint8_t *Newevent_errors )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newevent_errors, offsetof( I2CStatsData, event_errors), sizeof(uint8_t));
}
void I2CStatsfsm_errorsSet( uint8_t *Newfsm_errors )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newfsm_errors, offsetof( I2CStatsData, fsm_errors), sizeof(uint8_t));
}
void I2CStatsfsm_errorsGet( uint8_t *Newfsm_errors )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newfsm_errors, offsetof( I2CStatsData, fsm_errors), sizeof(uint8_t));
}
void I2CStatsirq_errorsSet( uint8_t *Newirq_errors )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newirq_errors, offsetof( I2CStatsData, irq_errors), sizeof(uint8_t));
}
void I2CStatsirq_errorsGet( uint8_t *Newirq_errors )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newirq_errors, offsetof( I2CStatsData, irq_errors), sizeof(uint8_t));
}
void I2CStatsnacksSet( uint8_t *Newnacks )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newnacks, offsetof( I2CStatsData, nacks), sizeof(uint8_t));
}
void I2CStatsnacksGet( uint8_t *Newnacks )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newnacks, offsetof( I2CStatsData, nacks), sizeof(uint8_t));
}
void I2CStatstimeoutsSet( uint8_t *Newtimeouts )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newtimeouts, offsetof( I2CStatsData, timeouts), sizeof(uint8_t));
}
void I2CStatstimeoutsGet( uint8_t *Newtimeouts )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newtimeouts, offsetof( I2CStatsData, timeouts), sizeof(uint8_t));
}
void I2CStatslast_error_typeSet( uint8_t *Newlast_error_type )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newlast_error_type, offsetof( I2CStatsData, last_error_type), sizeof(uint8_t));
}
void I2CStatslast_error_typeGet( uint8_t *Newlast_error_type )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newlast_error_type, offsetof( I2CStatsData, last_error_type), sizeof(uint8_t));
}
void I2CStatsevent_logSet( uint8_t *Newevent_log )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newevent_log, offsetof( I2CStatsData, event_log), 5*sizeof(uint8_t));
}
void I2CStatsevent_logGet( uint8_t *Newevent_log )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newevent_log, offsetof( I2CStatsData, event_log), 5*sizeof(uint8_t));
}
void I2CStatsstate_logSet( uint8_t *Newstate_log )
{
	UAVObjSetDataField(I2CStatsHandle(), (void*)Newstate_log, offsetof( I2CStatsData, state_log), 5*sizeof(uint8_t));
}
void I2CStatsstate_logGet( uint8_t *Newstate_log )
{
	UAVObjGetDataField(I2CStatsHandle(), (void*)Newstate_log, offsetof( I2CStatsData, state_log), 5*sizeof(uint8_t));
}


/**
 * @}
 */

