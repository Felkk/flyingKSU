/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup CameraStabSettings CameraStabSettings
 * @brief Settings for the @ref CameraStab mmodule
 *
 * Autogenerated files and functions for CameraStabSettings Object
 * @{ 
 *
 * @file       camerastabsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the CameraStabSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: camerastabsettings.xml. 
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
#include "camerastabsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t CameraStabSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(CAMERASTABSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(CAMERASTABSETTINGS_OBJID,
			CAMERASTABSETTINGS_ISSINGLEINST, CAMERASTABSETTINGS_ISSETTINGS, CAMERASTABSETTINGS_NUMBYTES, &CameraStabSettingsSetDefaults);

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
void CameraStabSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	CameraStabSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(CameraStabSettingsData));
	data.MaxAxisLockRate = 1;
	data.MaxAccel = 1000;
	data.Input[0] = 6;
	data.Input[1] = 6;
	data.Input[2] = 6;
	data.InputRange[0] = 20;
	data.InputRange[1] = 20;
	data.InputRange[2] = 20;
	data.InputRate[0] = 50;
	data.InputRate[1] = 50;
	data.InputRate[2] = 50;
	data.OutputRange[0] = 20;
	data.OutputRange[1] = 20;
	data.OutputRange[2] = 20;
	data.FeedForward[0] = 0;
	data.FeedForward[1] = 0;
	data.FeedForward[2] = 0;
	data.StabilizationMode[0] = 0;
	data.StabilizationMode[1] = 0;
	data.StabilizationMode[2] = 0;
	data.AttitudeFilter = 0;
	data.InputFilter = 0;
	data.FeedForwardTime = 0;

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
UAVObjHandle CameraStabSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void CameraStabSettingsMaxAxisLockRateSet( float *NewMaxAxisLockRate )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewMaxAxisLockRate, offsetof( CameraStabSettingsData, MaxAxisLockRate), sizeof(float));
}
void CameraStabSettingsMaxAxisLockRateGet( float *NewMaxAxisLockRate )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewMaxAxisLockRate, offsetof( CameraStabSettingsData, MaxAxisLockRate), sizeof(float));
}
void CameraStabSettingsMaxAccelSet( float *NewMaxAccel )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewMaxAccel, offsetof( CameraStabSettingsData, MaxAccel), sizeof(float));
}
void CameraStabSettingsMaxAccelGet( float *NewMaxAccel )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewMaxAccel, offsetof( CameraStabSettingsData, MaxAccel), sizeof(float));
}
void CameraStabSettingsInputSet( uint8_t *NewInput )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewInput, offsetof( CameraStabSettingsData, Input), 3*sizeof(uint8_t));
}
void CameraStabSettingsInputGet( uint8_t *NewInput )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewInput, offsetof( CameraStabSettingsData, Input), 3*sizeof(uint8_t));
}
void CameraStabSettingsInputRangeSet( uint8_t *NewInputRange )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewInputRange, offsetof( CameraStabSettingsData, InputRange), 3*sizeof(uint8_t));
}
void CameraStabSettingsInputRangeGet( uint8_t *NewInputRange )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewInputRange, offsetof( CameraStabSettingsData, InputRange), 3*sizeof(uint8_t));
}
void CameraStabSettingsInputRateSet( uint8_t *NewInputRate )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewInputRate, offsetof( CameraStabSettingsData, InputRate), 3*sizeof(uint8_t));
}
void CameraStabSettingsInputRateGet( uint8_t *NewInputRate )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewInputRate, offsetof( CameraStabSettingsData, InputRate), 3*sizeof(uint8_t));
}
void CameraStabSettingsOutputRangeSet( uint8_t *NewOutputRange )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewOutputRange, offsetof( CameraStabSettingsData, OutputRange), 3*sizeof(uint8_t));
}
void CameraStabSettingsOutputRangeGet( uint8_t *NewOutputRange )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewOutputRange, offsetof( CameraStabSettingsData, OutputRange), 3*sizeof(uint8_t));
}
void CameraStabSettingsFeedForwardSet( uint8_t *NewFeedForward )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewFeedForward, offsetof( CameraStabSettingsData, FeedForward), 3*sizeof(uint8_t));
}
void CameraStabSettingsFeedForwardGet( uint8_t *NewFeedForward )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewFeedForward, offsetof( CameraStabSettingsData, FeedForward), 3*sizeof(uint8_t));
}
void CameraStabSettingsStabilizationModeSet( uint8_t *NewStabilizationMode )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewStabilizationMode, offsetof( CameraStabSettingsData, StabilizationMode), 3*sizeof(uint8_t));
}
void CameraStabSettingsStabilizationModeGet( uint8_t *NewStabilizationMode )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewStabilizationMode, offsetof( CameraStabSettingsData, StabilizationMode), 3*sizeof(uint8_t));
}
void CameraStabSettingsAttitudeFilterSet( uint8_t *NewAttitudeFilter )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewAttitudeFilter, offsetof( CameraStabSettingsData, AttitudeFilter), sizeof(uint8_t));
}
void CameraStabSettingsAttitudeFilterGet( uint8_t *NewAttitudeFilter )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewAttitudeFilter, offsetof( CameraStabSettingsData, AttitudeFilter), sizeof(uint8_t));
}
void CameraStabSettingsInputFilterSet( uint8_t *NewInputFilter )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewInputFilter, offsetof( CameraStabSettingsData, InputFilter), sizeof(uint8_t));
}
void CameraStabSettingsInputFilterGet( uint8_t *NewInputFilter )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewInputFilter, offsetof( CameraStabSettingsData, InputFilter), sizeof(uint8_t));
}
void CameraStabSettingsFeedForwardTimeSet( uint8_t *NewFeedForwardTime )
{
	UAVObjSetDataField(CameraStabSettingsHandle(), (void*)NewFeedForwardTime, offsetof( CameraStabSettingsData, FeedForwardTime), sizeof(uint8_t));
}
void CameraStabSettingsFeedForwardTimeGet( uint8_t *NewFeedForwardTime )
{
	UAVObjGetDataField(CameraStabSettingsHandle(), (void*)NewFeedForwardTime, offsetof( CameraStabSettingsData, FeedForwardTime), sizeof(uint8_t));
}


/**
 * @}
 */
