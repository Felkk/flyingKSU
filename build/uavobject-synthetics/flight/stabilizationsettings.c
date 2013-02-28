/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup StabilizationSettings StabilizationSettings
 * @brief PID settings used by the Stabilization module to combine the @ref AttitudeActual and @ref AttitudeDesired to compute @ref ActuatorDesired
 *
 * Autogenerated files and functions for StabilizationSettings Object
 * @{ 
 *
 * @file       stabilizationsettings.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the StabilizationSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: stabilizationsettings.xml. 
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
#include "stabilizationsettings.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t StabilizationSettingsInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(STABILIZATIONSETTINGS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(STABILIZATIONSETTINGS_OBJID,
			STABILIZATIONSETTINGS_ISSINGLEINST, STABILIZATIONSETTINGS_ISSETTINGS, STABILIZATIONSETTINGS_NUMBYTES, &StabilizationSettingsSetDefaults);

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
void StabilizationSettingsSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	StabilizationSettingsData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(StabilizationSettingsData));
	data.ManualRate[0] = 150;
	data.ManualRate[1] = 150;
	data.ManualRate[2] = 150;
	data.MaximumRate[0] = 300;
	data.MaximumRate[1] = 300;
	data.MaximumRate[2] = 300;
	data.RollRatePID[0] = 0.002;
	data.RollRatePID[1] = 0;
	data.RollRatePID[2] = 0;
	data.RollRatePID[3] = 0.3;
	data.PitchRatePID[0] = 0.002;
	data.PitchRatePID[1] = 0;
	data.PitchRatePID[2] = 0;
	data.PitchRatePID[3] = 0.3;
	data.YawRatePID[0] = 0.0035;
	data.YawRatePID[1] = 0.0035;
	data.YawRatePID[2] = 0;
	data.YawRatePID[3] = 0.3;
	data.RollPI[0] = 2;
	data.RollPI[1] = 0;
	data.RollPI[2] = 50;
	data.PitchPI[0] = 2;
	data.PitchPI[1] = 0;
	data.PitchPI[2] = 50;
	data.YawPI[0] = 2;
	data.YawPI[1] = 0;
	data.YawPI[2] = 50;
	data.VbarSensitivity[0] = 0.5;
	data.VbarSensitivity[1] = 0.5;
	data.VbarSensitivity[2] = 0.5;
	data.VbarRollPI[0] = 0.005;
	data.VbarRollPI[1] = 0.002;
	data.VbarPitchPI[0] = 0.005;
	data.VbarPitchPI[1] = 0.002;
	data.VbarYawPI[0] = 0.005;
	data.VbarYawPI[1] = 0.002;
	data.VbarTau = 0.5;
	data.GyroTau = 0.005;
	data.DerivativeGamma = 1;
	data.WeakLevelingKp = 0.1;
	data.RollMax = 55;
	data.PitchMax = 55;
	data.YawMax = 35;
	data.VbarGyroSuppress = 30;
	data.VbarPiroComp = 0;
	data.VbarMaxAngle = 10;
	data.DerivativeCutoff = 20;
	data.MaxAxisLock = 15;
	data.MaxAxisLockRate = 2;
	data.MaxWeakLevelingRate = 5;
	data.LowThrottleZeroIntegral = 1;

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
UAVObjHandle StabilizationSettingsHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void StabilizationSettingsManualRateSet( float *NewManualRate )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewManualRate, offsetof( StabilizationSettingsData, ManualRate), 3*sizeof(float));
}
void StabilizationSettingsManualRateGet( float *NewManualRate )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewManualRate, offsetof( StabilizationSettingsData, ManualRate), 3*sizeof(float));
}
void StabilizationSettingsMaximumRateSet( float *NewMaximumRate )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewMaximumRate, offsetof( StabilizationSettingsData, MaximumRate), 3*sizeof(float));
}
void StabilizationSettingsMaximumRateGet( float *NewMaximumRate )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewMaximumRate, offsetof( StabilizationSettingsData, MaximumRate), 3*sizeof(float));
}
void StabilizationSettingsRollRatePIDSet( float *NewRollRatePID )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewRollRatePID, offsetof( StabilizationSettingsData, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsRollRatePIDGet( float *NewRollRatePID )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewRollRatePID, offsetof( StabilizationSettingsData, RollRatePID), 4*sizeof(float));
}
void StabilizationSettingsPitchRatePIDSet( float *NewPitchRatePID )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewPitchRatePID, offsetof( StabilizationSettingsData, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsPitchRatePIDGet( float *NewPitchRatePID )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewPitchRatePID, offsetof( StabilizationSettingsData, PitchRatePID), 4*sizeof(float));
}
void StabilizationSettingsYawRatePIDSet( float *NewYawRatePID )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewYawRatePID, offsetof( StabilizationSettingsData, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsYawRatePIDGet( float *NewYawRatePID )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewYawRatePID, offsetof( StabilizationSettingsData, YawRatePID), 4*sizeof(float));
}
void StabilizationSettingsRollPISet( float *NewRollPI )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewRollPI, offsetof( StabilizationSettingsData, RollPI), 3*sizeof(float));
}
void StabilizationSettingsRollPIGet( float *NewRollPI )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewRollPI, offsetof( StabilizationSettingsData, RollPI), 3*sizeof(float));
}
void StabilizationSettingsPitchPISet( float *NewPitchPI )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewPitchPI, offsetof( StabilizationSettingsData, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsPitchPIGet( float *NewPitchPI )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewPitchPI, offsetof( StabilizationSettingsData, PitchPI), 3*sizeof(float));
}
void StabilizationSettingsYawPISet( float *NewYawPI )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewYawPI, offsetof( StabilizationSettingsData, YawPI), 3*sizeof(float));
}
void StabilizationSettingsYawPIGet( float *NewYawPI )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewYawPI, offsetof( StabilizationSettingsData, YawPI), 3*sizeof(float));
}
void StabilizationSettingsVbarSensitivitySet( float *NewVbarSensitivity )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarSensitivity, offsetof( StabilizationSettingsData, VbarSensitivity), 3*sizeof(float));
}
void StabilizationSettingsVbarSensitivityGet( float *NewVbarSensitivity )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarSensitivity, offsetof( StabilizationSettingsData, VbarSensitivity), 3*sizeof(float));
}
void StabilizationSettingsVbarRollPISet( float *NewVbarRollPI )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarRollPI, offsetof( StabilizationSettingsData, VbarRollPI), 2*sizeof(float));
}
void StabilizationSettingsVbarRollPIGet( float *NewVbarRollPI )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarRollPI, offsetof( StabilizationSettingsData, VbarRollPI), 2*sizeof(float));
}
void StabilizationSettingsVbarPitchPISet( float *NewVbarPitchPI )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarPitchPI, offsetof( StabilizationSettingsData, VbarPitchPI), 2*sizeof(float));
}
void StabilizationSettingsVbarPitchPIGet( float *NewVbarPitchPI )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarPitchPI, offsetof( StabilizationSettingsData, VbarPitchPI), 2*sizeof(float));
}
void StabilizationSettingsVbarYawPISet( float *NewVbarYawPI )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarYawPI, offsetof( StabilizationSettingsData, VbarYawPI), 2*sizeof(float));
}
void StabilizationSettingsVbarYawPIGet( float *NewVbarYawPI )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarYawPI, offsetof( StabilizationSettingsData, VbarYawPI), 2*sizeof(float));
}
void StabilizationSettingsVbarTauSet( float *NewVbarTau )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarTau, offsetof( StabilizationSettingsData, VbarTau), sizeof(float));
}
void StabilizationSettingsVbarTauGet( float *NewVbarTau )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarTau, offsetof( StabilizationSettingsData, VbarTau), sizeof(float));
}
void StabilizationSettingsGyroTauSet( float *NewGyroTau )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewGyroTau, offsetof( StabilizationSettingsData, GyroTau), sizeof(float));
}
void StabilizationSettingsGyroTauGet( float *NewGyroTau )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewGyroTau, offsetof( StabilizationSettingsData, GyroTau), sizeof(float));
}
void StabilizationSettingsDerivativeGammaSet( float *NewDerivativeGamma )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewDerivativeGamma, offsetof( StabilizationSettingsData, DerivativeGamma), sizeof(float));
}
void StabilizationSettingsDerivativeGammaGet( float *NewDerivativeGamma )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewDerivativeGamma, offsetof( StabilizationSettingsData, DerivativeGamma), sizeof(float));
}
void StabilizationSettingsWeakLevelingKpSet( float *NewWeakLevelingKp )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewWeakLevelingKp, offsetof( StabilizationSettingsData, WeakLevelingKp), sizeof(float));
}
void StabilizationSettingsWeakLevelingKpGet( float *NewWeakLevelingKp )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewWeakLevelingKp, offsetof( StabilizationSettingsData, WeakLevelingKp), sizeof(float));
}
void StabilizationSettingsRollMaxSet( uint8_t *NewRollMax )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewRollMax, offsetof( StabilizationSettingsData, RollMax), sizeof(uint8_t));
}
void StabilizationSettingsRollMaxGet( uint8_t *NewRollMax )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewRollMax, offsetof( StabilizationSettingsData, RollMax), sizeof(uint8_t));
}
void StabilizationSettingsPitchMaxSet( uint8_t *NewPitchMax )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewPitchMax, offsetof( StabilizationSettingsData, PitchMax), sizeof(uint8_t));
}
void StabilizationSettingsPitchMaxGet( uint8_t *NewPitchMax )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewPitchMax, offsetof( StabilizationSettingsData, PitchMax), sizeof(uint8_t));
}
void StabilizationSettingsYawMaxSet( uint8_t *NewYawMax )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewYawMax, offsetof( StabilizationSettingsData, YawMax), sizeof(uint8_t));
}
void StabilizationSettingsYawMaxGet( uint8_t *NewYawMax )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewYawMax, offsetof( StabilizationSettingsData, YawMax), sizeof(uint8_t));
}
void StabilizationSettingsVbarGyroSuppressSet( int8_t *NewVbarGyroSuppress )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarGyroSuppress, offsetof( StabilizationSettingsData, VbarGyroSuppress), sizeof(int8_t));
}
void StabilizationSettingsVbarGyroSuppressGet( int8_t *NewVbarGyroSuppress )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarGyroSuppress, offsetof( StabilizationSettingsData, VbarGyroSuppress), sizeof(int8_t));
}
void StabilizationSettingsVbarPiroCompSet( uint8_t *NewVbarPiroComp )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarPiroComp, offsetof( StabilizationSettingsData, VbarPiroComp), sizeof(uint8_t));
}
void StabilizationSettingsVbarPiroCompGet( uint8_t *NewVbarPiroComp )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarPiroComp, offsetof( StabilizationSettingsData, VbarPiroComp), sizeof(uint8_t));
}
void StabilizationSettingsVbarMaxAngleSet( uint8_t *NewVbarMaxAngle )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewVbarMaxAngle, offsetof( StabilizationSettingsData, VbarMaxAngle), sizeof(uint8_t));
}
void StabilizationSettingsVbarMaxAngleGet( uint8_t *NewVbarMaxAngle )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewVbarMaxAngle, offsetof( StabilizationSettingsData, VbarMaxAngle), sizeof(uint8_t));
}
void StabilizationSettingsDerivativeCutoffSet( uint8_t *NewDerivativeCutoff )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewDerivativeCutoff, offsetof( StabilizationSettingsData, DerivativeCutoff), sizeof(uint8_t));
}
void StabilizationSettingsDerivativeCutoffGet( uint8_t *NewDerivativeCutoff )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewDerivativeCutoff, offsetof( StabilizationSettingsData, DerivativeCutoff), sizeof(uint8_t));
}
void StabilizationSettingsMaxAxisLockSet( uint8_t *NewMaxAxisLock )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewMaxAxisLock, offsetof( StabilizationSettingsData, MaxAxisLock), sizeof(uint8_t));
}
void StabilizationSettingsMaxAxisLockGet( uint8_t *NewMaxAxisLock )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewMaxAxisLock, offsetof( StabilizationSettingsData, MaxAxisLock), sizeof(uint8_t));
}
void StabilizationSettingsMaxAxisLockRateSet( uint8_t *NewMaxAxisLockRate )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewMaxAxisLockRate, offsetof( StabilizationSettingsData, MaxAxisLockRate), sizeof(uint8_t));
}
void StabilizationSettingsMaxAxisLockRateGet( uint8_t *NewMaxAxisLockRate )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewMaxAxisLockRate, offsetof( StabilizationSettingsData, MaxAxisLockRate), sizeof(uint8_t));
}
void StabilizationSettingsMaxWeakLevelingRateSet( uint8_t *NewMaxWeakLevelingRate )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewMaxWeakLevelingRate, offsetof( StabilizationSettingsData, MaxWeakLevelingRate), sizeof(uint8_t));
}
void StabilizationSettingsMaxWeakLevelingRateGet( uint8_t *NewMaxWeakLevelingRate )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewMaxWeakLevelingRate, offsetof( StabilizationSettingsData, MaxWeakLevelingRate), sizeof(uint8_t));
}
void StabilizationSettingsLowThrottleZeroIntegralSet( uint8_t *NewLowThrottleZeroIntegral )
{
	UAVObjSetDataField(StabilizationSettingsHandle(), (void*)NewLowThrottleZeroIntegral, offsetof( StabilizationSettingsData, LowThrottleZeroIntegral), sizeof(uint8_t));
}
void StabilizationSettingsLowThrottleZeroIntegralGet( uint8_t *NewLowThrottleZeroIntegral )
{
	UAVObjGetDataField(StabilizationSettingsHandle(), (void*)NewLowThrottleZeroIntegral, offsetof( StabilizationSettingsData, LowThrottleZeroIntegral), sizeof(uint8_t));
}


/**
 * @}
 */
