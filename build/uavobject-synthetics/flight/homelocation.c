/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup HomeLocation HomeLocation
 * @brief HomeLocation setting which contains the constants to tranlate from longitutde and latitude to NED reference frame.  Automatically set by @ref GPSModule after acquiring a 3D lock.  Used by @ref AHRSCommsModule.
 *
 * Autogenerated files and functions for HomeLocation Object
 * @{ 
 *
 * @file       homelocation.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the HomeLocation object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: homelocation.xml. 
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
#include "homelocation.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t HomeLocationInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(HOMELOCATION_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(HOMELOCATION_OBJID,
			HOMELOCATION_ISSINGLEINST, HOMELOCATION_ISSETTINGS, HOMELOCATION_NUMBYTES, &HomeLocationSetDefaults);

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
void HomeLocationSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	HomeLocationData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(HomeLocationData));
	data.Latitude = 0;
	data.Longitude = 0;
	data.Altitude = 0;
	data.Be[0] = 0;
	data.Be[1] = 0;
	data.Be[2] = 0;
	data.g_e = 9.81;
	data.SeaLevelPressure = 1013;
	data.Set = 0;
	data.GroundTemperature = 15;

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
UAVObjHandle HomeLocationHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void HomeLocationLatitudeSet( int32_t *NewLatitude )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)NewLatitude, offsetof( HomeLocationData, Latitude), sizeof(int32_t));
}
void HomeLocationLatitudeGet( int32_t *NewLatitude )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)NewLatitude, offsetof( HomeLocationData, Latitude), sizeof(int32_t));
}
void HomeLocationLongitudeSet( int32_t *NewLongitude )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)NewLongitude, offsetof( HomeLocationData, Longitude), sizeof(int32_t));
}
void HomeLocationLongitudeGet( int32_t *NewLongitude )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)NewLongitude, offsetof( HomeLocationData, Longitude), sizeof(int32_t));
}
void HomeLocationAltitudeSet( float *NewAltitude )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)NewAltitude, offsetof( HomeLocationData, Altitude), sizeof(float));
}
void HomeLocationAltitudeGet( float *NewAltitude )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)NewAltitude, offsetof( HomeLocationData, Altitude), sizeof(float));
}
void HomeLocationBeSet( float *NewBe )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)NewBe, offsetof( HomeLocationData, Be), 3*sizeof(float));
}
void HomeLocationBeGet( float *NewBe )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)NewBe, offsetof( HomeLocationData, Be), 3*sizeof(float));
}
void HomeLocationg_eSet( float *Newg_e )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)Newg_e, offsetof( HomeLocationData, g_e), sizeof(float));
}
void HomeLocationg_eGet( float *Newg_e )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)Newg_e, offsetof( HomeLocationData, g_e), sizeof(float));
}
void HomeLocationSeaLevelPressureSet( uint16_t *NewSeaLevelPressure )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)NewSeaLevelPressure, offsetof( HomeLocationData, SeaLevelPressure), sizeof(uint16_t));
}
void HomeLocationSeaLevelPressureGet( uint16_t *NewSeaLevelPressure )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)NewSeaLevelPressure, offsetof( HomeLocationData, SeaLevelPressure), sizeof(uint16_t));
}
void HomeLocationSetSet( uint8_t *NewSet )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)NewSet, offsetof( HomeLocationData, Set), sizeof(uint8_t));
}
void HomeLocationSetGet( uint8_t *NewSet )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)NewSet, offsetof( HomeLocationData, Set), sizeof(uint8_t));
}
void HomeLocationGroundTemperatureSet( int8_t *NewGroundTemperature )
{
	UAVObjSetDataField(HomeLocationHandle(), (void*)NewGroundTemperature, offsetof( HomeLocationData, GroundTemperature), sizeof(int8_t));
}
void HomeLocationGroundTemperatureGet( int8_t *NewGroundTemperature )
{
	UAVObjGetDataField(HomeLocationHandle(), (void*)NewGroundTemperature, offsetof( HomeLocationData, GroundTemperature), sizeof(int8_t));
}


/**
 * @}
 */
