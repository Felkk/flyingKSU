/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ActuatorSettings ActuatorSettings
 * @brief Settings for the @ref ActuatorModule that controls the channel assignments for the mixer based on AircraftType
 *
 * Autogenerated files and functions for ActuatorSettings Object
 * @{ 
 *
 * @file       actuatorsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the ActuatorSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: actuatorsettings.xml. 
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
#include "actuatorsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t ActuatorSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(ACTUATORSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(ACTUATORSETTINGS_OBJID,
			ACTUATORSETTINGS_ISSINGLEINST, ACTUATORSETTINGS_ISSETTINGS, ACTUATORSETTINGS_NUMBYTES, &ActuatorSettingsSetDefaults);

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
void ActuatorSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	ActuatorSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(ActuatorSettingsData));
	data.ChannelUpdateFreq[0] = 50;
	data.ChannelUpdateFreq[1] = 50;
	data.ChannelUpdateFreq[2] = 50;
	data.ChannelUpdateFreq[3] = 50;
	data.ChannelUpdateFreq[4] = 50;
	data.ChannelUpdateFreq[5] = 50;
	data.ChannelMax[0] = 1000;
	data.ChannelMax[1] = 1000;
	data.ChannelMax[2] = 1000;
	data.ChannelMax[3] = 1000;
	data.ChannelMax[4] = 1000;
	data.ChannelMax[5] = 1000;
	data.ChannelMax[6] = 1000;
	data.ChannelMax[7] = 1000;
	data.ChannelMax[8] = 1000;
	data.ChannelMax[9] = 1000;
	data.ChannelNeutral[0] = 1000;
	data.ChannelNeutral[1] = 1000;
	data.ChannelNeutral[2] = 1000;
	data.ChannelNeutral[3] = 1000;
	data.ChannelNeutral[4] = 1000;
	data.ChannelNeutral[5] = 1000;
	data.ChannelNeutral[6] = 1000;
	data.ChannelNeutral[7] = 1000;
	data.ChannelNeutral[8] = 1000;
	data.ChannelNeutral[9] = 1000;
	data.ChannelMin[0] = 1000;
	data.ChannelMin[1] = 1000;
	data.ChannelMin[2] = 1000;
	data.ChannelMin[3] = 1000;
	data.ChannelMin[4] = 1000;
	data.ChannelMin[5] = 1000;
	data.ChannelMin[6] = 1000;
	data.ChannelMin[7] = 1000;
	data.ChannelMin[8] = 1000;
	data.ChannelMin[9] = 1000;
	data.ChannelType[0] = 0;
	data.ChannelType[1] = 0;
	data.ChannelType[2] = 0;
	data.ChannelType[3] = 0;
	data.ChannelType[4] = 0;
	data.ChannelType[5] = 0;
	data.ChannelType[6] = 0;
	data.ChannelType[7] = 0;
	data.ChannelType[8] = 0;
	data.ChannelType[9] = 0;
	data.ChannelAddr[0] = 0;
	data.ChannelAddr[1] = 1;
	data.ChannelAddr[2] = 2;
	data.ChannelAddr[3] = 3;
	data.ChannelAddr[4] = 4;
	data.ChannelAddr[5] = 5;
	data.ChannelAddr[6] = 6;
	data.ChannelAddr[7] = 7;
	data.ChannelAddr[8] = 8;
	data.ChannelAddr[9] = 9;
	data.MotorsSpinWhileArmed = 0;

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		1 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		1 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_ONCHANGE << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 0;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle ActuatorSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void ActuatorSettingsChannelUpdateFreqSet( uint16_t *NewChannelUpdateFreq )
{
	UAVObjSetDataField(ActuatorSettingsHandle(), (void*)NewChannelUpdateFreq, offsetof( ActuatorSettingsData, ChannelUpdateFreq), 6*sizeof(uint16_t));
}
void ActuatorSettingsChannelUpdateFreqGet( uint16_t *NewChannelUpdateFreq )
{
	UAVObjGetDataField(ActuatorSettingsHandle(), (void*)NewChannelUpdateFreq, offsetof( ActuatorSettingsData, ChannelUpdateFreq), 6*sizeof(uint16_t));
}
void ActuatorSettingsChannelMaxSet( int16_t *NewChannelMax )
{
	UAVObjSetDataField(ActuatorSettingsHandle(), (void*)NewChannelMax, offsetof( ActuatorSettingsData, ChannelMax), 10*sizeof(int16_t));
}
void ActuatorSettingsChannelMaxGet( int16_t *NewChannelMax )
{
	UAVObjGetDataField(ActuatorSettingsHandle(), (void*)NewChannelMax, offsetof( ActuatorSettingsData, ChannelMax), 10*sizeof(int16_t));
}
void ActuatorSettingsChannelNeutralSet( int16_t *NewChannelNeutral )
{
	UAVObjSetDataField(ActuatorSettingsHandle(), (void*)NewChannelNeutral, offsetof( ActuatorSettingsData, ChannelNeutral), 10*sizeof(int16_t));
}
void ActuatorSettingsChannelNeutralGet( int16_t *NewChannelNeutral )
{
	UAVObjGetDataField(ActuatorSettingsHandle(), (void*)NewChannelNeutral, offsetof( ActuatorSettingsData, ChannelNeutral), 10*sizeof(int16_t));
}
void ActuatorSettingsChannelMinSet( int16_t *NewChannelMin )
{
	UAVObjSetDataField(ActuatorSettingsHandle(), (void*)NewChannelMin, offsetof( ActuatorSettingsData, ChannelMin), 10*sizeof(int16_t));
}
void ActuatorSettingsChannelMinGet( int16_t *NewChannelMin )
{
	UAVObjGetDataField(ActuatorSettingsHandle(), (void*)NewChannelMin, offsetof( ActuatorSettingsData, ChannelMin), 10*sizeof(int16_t));
}
void ActuatorSettingsChannelTypeSet( uint8_t *NewChannelType )
{
	UAVObjSetDataField(ActuatorSettingsHandle(), (void*)NewChannelType, offsetof( ActuatorSettingsData, ChannelType), 10*sizeof(uint8_t));
}
void ActuatorSettingsChannelTypeGet( uint8_t *NewChannelType )
{
	UAVObjGetDataField(ActuatorSettingsHandle(), (void*)NewChannelType, offsetof( ActuatorSettingsData, ChannelType), 10*sizeof(uint8_t));
}
void ActuatorSettingsChannelAddrSet( uint8_t *NewChannelAddr )
{
	UAVObjSetDataField(ActuatorSettingsHandle(), (void*)NewChannelAddr, offsetof( ActuatorSettingsData, ChannelAddr), 10*sizeof(uint8_t));
}
void ActuatorSettingsChannelAddrGet( uint8_t *NewChannelAddr )
{
	UAVObjGetDataField(ActuatorSettingsHandle(), (void*)NewChannelAddr, offsetof( ActuatorSettingsData, ChannelAddr), 10*sizeof(uint8_t));
}
void ActuatorSettingsMotorsSpinWhileArmedSet( uint8_t *NewMotorsSpinWhileArmed )
{
	UAVObjSetDataField(ActuatorSettingsHandle(), (void*)NewMotorsSpinWhileArmed, offsetof( ActuatorSettingsData, MotorsSpinWhileArmed), sizeof(uint8_t));
}
void ActuatorSettingsMotorsSpinWhileArmedGet( uint8_t *NewMotorsSpinWhileArmed )
{
	UAVObjGetDataField(ActuatorSettingsHandle(), (void*)NewMotorsSpinWhileArmed, offsetof( ActuatorSettingsData, MotorsSpinWhileArmed), sizeof(uint8_t));
}


/**
 * @}
 */

