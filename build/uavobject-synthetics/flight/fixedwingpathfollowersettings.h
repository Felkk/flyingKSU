/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FixedWingPathFollowerSettings FixedWingPathFollowerSettings 
 * @brief Settings for the @ref FixedWingPathFollowerModule
 *
 * Autogenerated files and functions for FixedWingPathFollowerSettings Object
 
 * @{ 
 *
 * @file       fixedwingpathfollowersettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the FixedWingPathFollowerSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: fixedwingpathfollowersettings.xml. 
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

#ifndef FIXEDWINGPATHFOLLOWERSETTINGS_H
#define FIXEDWINGPATHFOLLOWERSETTINGS_H

// Object constants
#define FIXEDWINGPATHFOLLOWERSETTINGS_OBJID 0x6421EA98
#define FIXEDWINGPATHFOLLOWERSETTINGS_ISSINGLEINST 1
#define FIXEDWINGPATHFOLLOWERSETTINGS_ISSETTINGS 1
#define FIXEDWINGPATHFOLLOWERSETTINGS_NUMBYTES 98

// Generic interface functions
int32_t FixedWingPathFollowerSettingsInitialize();
UAVObjHandle FixedWingPathFollowerSettingsHandle();
void FixedWingPathFollowerSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float HorizontalPosP;
    float VerticalPosP;
    float BearingPI[3];
    float PowerPI[3];
    float VerticalToPitchCrossFeed[2];
    float AirspeedToVerticalCrossFeed[2];
    float SpeedPI[3];
    float RollLimit[3];
    float PitchLimit[3];
    float ThrottleLimit[3];
    int16_t UpdatePeriod;

} __attribute__((packed)) __attribute__((aligned(4))) FixedWingPathFollowerSettingsData;

// Typesafe Object access functions
/**
 * @function FixedWingPathFollowerSettingsGet(dataOut)
 * @brief Populate a FixedWingPathFollowerSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t FixedWingPathFollowerSettingsGet(FixedWingPathFollowerSettingsData *dataOut) { return UAVObjGetData(FixedWingPathFollowerSettingsHandle(), dataOut); }

static inline int32_t FixedWingPathFollowerSettingsSet(const FixedWingPathFollowerSettingsData *dataIn) { return UAVObjSetData(FixedWingPathFollowerSettingsHandle(), dataIn); }

static inline int32_t FixedWingPathFollowerSettingsInstGet(uint16_t instId, FixedWingPathFollowerSettingsData *dataOut) { return UAVObjGetInstanceData(FixedWingPathFollowerSettingsHandle(), instId, dataOut); }

static inline int32_t FixedWingPathFollowerSettingsInstSet(uint16_t instId, const FixedWingPathFollowerSettingsData *dataIn) { return UAVObjSetInstanceData(FixedWingPathFollowerSettingsHandle(), instId, dataIn); }

static inline int32_t FixedWingPathFollowerSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FixedWingPathFollowerSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t FixedWingPathFollowerSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FixedWingPathFollowerSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t FixedWingPathFollowerSettingsCreateInstance() { return UAVObjCreateInstance(FixedWingPathFollowerSettingsHandle(), &FixedWingPathFollowerSettingsSetDefaults); }

static inline void FixedWingPathFollowerSettingsRequestUpdate() { UAVObjRequestUpdate(FixedWingPathFollowerSettingsHandle()); }

static inline void FixedWingPathFollowerSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FixedWingPathFollowerSettingsHandle(), instId); }

static inline void FixedWingPathFollowerSettingsUpdated() { UAVObjUpdated(FixedWingPathFollowerSettingsHandle()); }

static inline void FixedWingPathFollowerSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FixedWingPathFollowerSettingsHandle(), instId); }

static inline int32_t FixedWingPathFollowerSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FixedWingPathFollowerSettingsHandle(), dataOut); }

static inline int32_t FixedWingPathFollowerSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FixedWingPathFollowerSettingsHandle(), dataIn); }

static inline int8_t FixedWingPathFollowerSettingsReadOnly() { return UAVObjReadOnly(FixedWingPathFollowerSettingsHandle()); }

// Field information
// Field HorizontalPosP information
// Field VerticalPosP information
// Field BearingPI information
/* Array element names for field BearingPI */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_BEARINGPI_KP=0, FIXEDWINGPATHFOLLOWERSETTINGS_BEARINGPI_KI=1, FIXEDWINGPATHFOLLOWERSETTINGS_BEARINGPI_ILIMIT=2 } FixedWingPathFollowerSettingsBearingPIElem;
/* Number of elements for field BearingPI */
#define FIXEDWINGPATHFOLLOWERSETTINGS_BEARINGPI_NUMELEM 3
// Field PowerPI information
/* Array element names for field PowerPI */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_POWERPI_KP=0, FIXEDWINGPATHFOLLOWERSETTINGS_POWERPI_KI=1, FIXEDWINGPATHFOLLOWERSETTINGS_POWERPI_ILIMIT=2 } FixedWingPathFollowerSettingsPowerPIElem;
/* Number of elements for field PowerPI */
#define FIXEDWINGPATHFOLLOWERSETTINGS_POWERPI_NUMELEM 3
// Field VerticalToPitchCrossFeed information
/* Array element names for field VerticalToPitchCrossFeed */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_VERTICALTOPITCHCROSSFEED_KP=0, FIXEDWINGPATHFOLLOWERSETTINGS_VERTICALTOPITCHCROSSFEED_MAX=1 } FixedWingPathFollowerSettingsVerticalToPitchCrossFeedElem;
/* Number of elements for field VerticalToPitchCrossFeed */
#define FIXEDWINGPATHFOLLOWERSETTINGS_VERTICALTOPITCHCROSSFEED_NUMELEM 2
// Field AirspeedToVerticalCrossFeed information
/* Array element names for field AirspeedToVerticalCrossFeed */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_AIRSPEEDTOVERTICALCROSSFEED_KP=0, FIXEDWINGPATHFOLLOWERSETTINGS_AIRSPEEDTOVERTICALCROSSFEED_MAX=1 } FixedWingPathFollowerSettingsAirspeedToVerticalCrossFeedElem;
/* Number of elements for field AirspeedToVerticalCrossFeed */
#define FIXEDWINGPATHFOLLOWERSETTINGS_AIRSPEEDTOVERTICALCROSSFEED_NUMELEM 2
// Field SpeedPI information
/* Array element names for field SpeedPI */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_SPEEDPI_KP=0, FIXEDWINGPATHFOLLOWERSETTINGS_SPEEDPI_KI=1, FIXEDWINGPATHFOLLOWERSETTINGS_SPEEDPI_ILIMIT=2 } FixedWingPathFollowerSettingsSpeedPIElem;
/* Number of elements for field SpeedPI */
#define FIXEDWINGPATHFOLLOWERSETTINGS_SPEEDPI_NUMELEM 3
// Field RollLimit information
/* Array element names for field RollLimit */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_ROLLLIMIT_MIN=0, FIXEDWINGPATHFOLLOWERSETTINGS_ROLLLIMIT_NEUTRAL=1, FIXEDWINGPATHFOLLOWERSETTINGS_ROLLLIMIT_MAX=2 } FixedWingPathFollowerSettingsRollLimitElem;
/* Number of elements for field RollLimit */
#define FIXEDWINGPATHFOLLOWERSETTINGS_ROLLLIMIT_NUMELEM 3
// Field PitchLimit information
/* Array element names for field PitchLimit */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_PITCHLIMIT_MIN=0, FIXEDWINGPATHFOLLOWERSETTINGS_PITCHLIMIT_NEUTRAL=1, FIXEDWINGPATHFOLLOWERSETTINGS_PITCHLIMIT_MAX=2 } FixedWingPathFollowerSettingsPitchLimitElem;
/* Number of elements for field PitchLimit */
#define FIXEDWINGPATHFOLLOWERSETTINGS_PITCHLIMIT_NUMELEM 3
// Field ThrottleLimit information
/* Array element names for field ThrottleLimit */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGS_THROTTLELIMIT_MIN=0, FIXEDWINGPATHFOLLOWERSETTINGS_THROTTLELIMIT_NEUTRAL=1, FIXEDWINGPATHFOLLOWERSETTINGS_THROTTLELIMIT_MAX=2 } FixedWingPathFollowerSettingsThrottleLimitElem;
/* Number of elements for field ThrottleLimit */
#define FIXEDWINGPATHFOLLOWERSETTINGS_THROTTLELIMIT_NUMELEM 3
// Field UpdatePeriod information


// set/Get functions
extern void FixedWingPathFollowerSettingsHorizontalPosPSet( float *NewHorizontalPosP );
extern void FixedWingPathFollowerSettingsHorizontalPosPGet( float *NewHorizontalPosP );
extern void FixedWingPathFollowerSettingsVerticalPosPSet( float *NewVerticalPosP );
extern void FixedWingPathFollowerSettingsVerticalPosPGet( float *NewVerticalPosP );
extern void FixedWingPathFollowerSettingsBearingPISet( float *NewBearingPI );
extern void FixedWingPathFollowerSettingsBearingPIGet( float *NewBearingPI );
extern void FixedWingPathFollowerSettingsPowerPISet( float *NewPowerPI );
extern void FixedWingPathFollowerSettingsPowerPIGet( float *NewPowerPI );
extern void FixedWingPathFollowerSettingsVerticalToPitchCrossFeedSet( float *NewVerticalToPitchCrossFeed );
extern void FixedWingPathFollowerSettingsVerticalToPitchCrossFeedGet( float *NewVerticalToPitchCrossFeed );
extern void FixedWingPathFollowerSettingsAirspeedToVerticalCrossFeedSet( float *NewAirspeedToVerticalCrossFeed );
extern void FixedWingPathFollowerSettingsAirspeedToVerticalCrossFeedGet( float *NewAirspeedToVerticalCrossFeed );
extern void FixedWingPathFollowerSettingsSpeedPISet( float *NewSpeedPI );
extern void FixedWingPathFollowerSettingsSpeedPIGet( float *NewSpeedPI );
extern void FixedWingPathFollowerSettingsRollLimitSet( float *NewRollLimit );
extern void FixedWingPathFollowerSettingsRollLimitGet( float *NewRollLimit );
extern void FixedWingPathFollowerSettingsPitchLimitSet( float *NewPitchLimit );
extern void FixedWingPathFollowerSettingsPitchLimitGet( float *NewPitchLimit );
extern void FixedWingPathFollowerSettingsThrottleLimitSet( float *NewThrottleLimit );
extern void FixedWingPathFollowerSettingsThrottleLimitGet( float *NewThrottleLimit );
extern void FixedWingPathFollowerSettingsUpdatePeriodSet( int16_t *NewUpdatePeriod );
extern void FixedWingPathFollowerSettingsUpdatePeriodGet( int16_t *NewUpdatePeriod );


#endif // FIXEDWINGPATHFOLLOWERSETTINGS_H

/**
 * @}
 * @}
 */
