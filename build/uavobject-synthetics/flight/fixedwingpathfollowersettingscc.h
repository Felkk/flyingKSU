/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FixedWingPathFollowerSettingsCC FixedWingPathFollowerSettingsCC 
 * @brief Settings for the @ref FixedWingPathFollowerModule
 *
 * Autogenerated files and functions for FixedWingPathFollowerSettingsCC Object
 
 * @{ 
 *
 * @file       fixedwingpathfollowersettingscc.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the FixedWingPathFollowerSettingsCC object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: fixedwingpathfollowersettingscc.xml. 
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

#ifndef FIXEDWINGPATHFOLLOWERSETTINGSCC_H
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_H

// Object constants
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_OBJID 0xC4623504
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_ISSINGLEINST 1
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_ISSETTINGS 1
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_NUMBYTES 110

// Generic interface functions
int32_t FixedWingPathFollowerSettingsCCInitialize();
UAVObjHandle FixedWingPathFollowerSettingsCCHandle();
void FixedWingPathFollowerSettingsCCSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float VerticalVelMax;
    float VectorFollowingGain;
    float OrbitFollowingGain;
    float FollowerIntegralGain;
    float VerticalPosP;
    float HeadingPI[3];
    float AirspeedPI[3];
    float VerticalToPitchCrossFeed[2];
    float AirspeedToVerticalCrossFeed[2];
    float ThrottlePI[3];
    float RollLimit[3];
    float PitchLimit[3];
    float ThrottleLimit[3];
    int16_t UpdatePeriod;

} __attribute__((packed)) __attribute__((aligned(4))) FixedWingPathFollowerSettingsCCData;

// Typesafe Object access functions
/**
 * @function FixedWingPathFollowerSettingsCCGet(dataOut)
 * @brief Populate a FixedWingPathFollowerSettingsCCData object
 * @param[out] dataOut 
 */
static inline int32_t FixedWingPathFollowerSettingsCCGet(FixedWingPathFollowerSettingsCCData *dataOut) { return UAVObjGetData(FixedWingPathFollowerSettingsCCHandle(), dataOut); }

static inline int32_t FixedWingPathFollowerSettingsCCSet(const FixedWingPathFollowerSettingsCCData *dataIn) { return UAVObjSetData(FixedWingPathFollowerSettingsCCHandle(), dataIn); }

static inline int32_t FixedWingPathFollowerSettingsCCInstGet(uint16_t instId, FixedWingPathFollowerSettingsCCData *dataOut) { return UAVObjGetInstanceData(FixedWingPathFollowerSettingsCCHandle(), instId, dataOut); }

static inline int32_t FixedWingPathFollowerSettingsCCInstSet(uint16_t instId, const FixedWingPathFollowerSettingsCCData *dataIn) { return UAVObjSetInstanceData(FixedWingPathFollowerSettingsCCHandle(), instId, dataIn); }

static inline int32_t FixedWingPathFollowerSettingsCCConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(FixedWingPathFollowerSettingsCCHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t FixedWingPathFollowerSettingsCCConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(FixedWingPathFollowerSettingsCCHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t FixedWingPathFollowerSettingsCCCreateInstance() { return UAVObjCreateInstance(FixedWingPathFollowerSettingsCCHandle(), &FixedWingPathFollowerSettingsCCSetDefaults); }

static inline void FixedWingPathFollowerSettingsCCRequestUpdate() { UAVObjRequestUpdate(FixedWingPathFollowerSettingsCCHandle()); }

static inline void FixedWingPathFollowerSettingsCCRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(FixedWingPathFollowerSettingsCCHandle(), instId); }

static inline void FixedWingPathFollowerSettingsCCUpdated() { UAVObjUpdated(FixedWingPathFollowerSettingsCCHandle()); }

static inline void FixedWingPathFollowerSettingsCCInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(FixedWingPathFollowerSettingsCCHandle(), instId); }

static inline int32_t FixedWingPathFollowerSettingsCCGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(FixedWingPathFollowerSettingsCCHandle(), dataOut); }

static inline int32_t FixedWingPathFollowerSettingsCCSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(FixedWingPathFollowerSettingsCCHandle(), dataIn); }

static inline int8_t FixedWingPathFollowerSettingsCCReadOnly() { return UAVObjReadOnly(FixedWingPathFollowerSettingsCCHandle()); }

// Field information
// Field VerticalVelMax information
// Field VectorFollowingGain information
// Field OrbitFollowingGain information
// Field FollowerIntegralGain information
// Field VerticalPosP information
// Field HeadingPI information
/* Array element names for field HeadingPI */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_HEADINGPI_KP=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_HEADINGPI_KI=1, FIXEDWINGPATHFOLLOWERSETTINGSCC_HEADINGPI_ILIMIT=2 } FixedWingPathFollowerSettingsCCHeadingPIElem;
/* Number of elements for field HeadingPI */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_HEADINGPI_NUMELEM 3
// Field AirspeedPI information
/* Array element names for field AirspeedPI */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_AIRSPEEDPI_KP=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_AIRSPEEDPI_KI=1, FIXEDWINGPATHFOLLOWERSETTINGSCC_AIRSPEEDPI_ILIMIT=2 } FixedWingPathFollowerSettingsCCAirspeedPIElem;
/* Number of elements for field AirspeedPI */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_AIRSPEEDPI_NUMELEM 3
// Field VerticalToPitchCrossFeed information
/* Array element names for field VerticalToPitchCrossFeed */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_VERTICALTOPITCHCROSSFEED_KP=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_VERTICALTOPITCHCROSSFEED_MAX=1 } FixedWingPathFollowerSettingsCCVerticalToPitchCrossFeedElem;
/* Number of elements for field VerticalToPitchCrossFeed */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_VERTICALTOPITCHCROSSFEED_NUMELEM 2
// Field AirspeedToVerticalCrossFeed information
/* Array element names for field AirspeedToVerticalCrossFeed */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_AIRSPEEDTOVERTICALCROSSFEED_KP=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_AIRSPEEDTOVERTICALCROSSFEED_MAX=1 } FixedWingPathFollowerSettingsCCAirspeedToVerticalCrossFeedElem;
/* Number of elements for field AirspeedToVerticalCrossFeed */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_AIRSPEEDTOVERTICALCROSSFEED_NUMELEM 2
// Field ThrottlePI information
/* Array element names for field ThrottlePI */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLEPI_KP=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLEPI_KI=1, FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLEPI_ILIMIT=2 } FixedWingPathFollowerSettingsCCThrottlePIElem;
/* Number of elements for field ThrottlePI */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLEPI_NUMELEM 3
// Field RollLimit information
/* Array element names for field RollLimit */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_ROLLLIMIT_MIN=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_ROLLLIMIT_NEUTRAL=1, FIXEDWINGPATHFOLLOWERSETTINGSCC_ROLLLIMIT_MAX=2 } FixedWingPathFollowerSettingsCCRollLimitElem;
/* Number of elements for field RollLimit */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_ROLLLIMIT_NUMELEM 3
// Field PitchLimit information
/* Array element names for field PitchLimit */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_PITCHLIMIT_MIN=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_PITCHLIMIT_NEUTRAL=1, FIXEDWINGPATHFOLLOWERSETTINGSCC_PITCHLIMIT_MAX=2 } FixedWingPathFollowerSettingsCCPitchLimitElem;
/* Number of elements for field PitchLimit */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_PITCHLIMIT_NUMELEM 3
// Field ThrottleLimit information
/* Array element names for field ThrottleLimit */
typedef enum { FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLELIMIT_MIN=0, FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLELIMIT_NEUTRAL=1, FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLELIMIT_MAX=2 } FixedWingPathFollowerSettingsCCThrottleLimitElem;
/* Number of elements for field ThrottleLimit */
#define FIXEDWINGPATHFOLLOWERSETTINGSCC_THROTTLELIMIT_NUMELEM 3
// Field UpdatePeriod information


// set/Get functions
extern void FixedWingPathFollowerSettingsCCVerticalVelMaxSet( float *NewVerticalVelMax );
extern void FixedWingPathFollowerSettingsCCVerticalVelMaxGet( float *NewVerticalVelMax );
extern void FixedWingPathFollowerSettingsCCVectorFollowingGainSet( float *NewVectorFollowingGain );
extern void FixedWingPathFollowerSettingsCCVectorFollowingGainGet( float *NewVectorFollowingGain );
extern void FixedWingPathFollowerSettingsCCOrbitFollowingGainSet( float *NewOrbitFollowingGain );
extern void FixedWingPathFollowerSettingsCCOrbitFollowingGainGet( float *NewOrbitFollowingGain );
extern void FixedWingPathFollowerSettingsCCFollowerIntegralGainSet( float *NewFollowerIntegralGain );
extern void FixedWingPathFollowerSettingsCCFollowerIntegralGainGet( float *NewFollowerIntegralGain );
extern void FixedWingPathFollowerSettingsCCVerticalPosPSet( float *NewVerticalPosP );
extern void FixedWingPathFollowerSettingsCCVerticalPosPGet( float *NewVerticalPosP );
extern void FixedWingPathFollowerSettingsCCHeadingPISet( float *NewHeadingPI );
extern void FixedWingPathFollowerSettingsCCHeadingPIGet( float *NewHeadingPI );
extern void FixedWingPathFollowerSettingsCCAirspeedPISet( float *NewAirspeedPI );
extern void FixedWingPathFollowerSettingsCCAirspeedPIGet( float *NewAirspeedPI );
extern void FixedWingPathFollowerSettingsCCVerticalToPitchCrossFeedSet( float *NewVerticalToPitchCrossFeed );
extern void FixedWingPathFollowerSettingsCCVerticalToPitchCrossFeedGet( float *NewVerticalToPitchCrossFeed );
extern void FixedWingPathFollowerSettingsCCAirspeedToVerticalCrossFeedSet( float *NewAirspeedToVerticalCrossFeed );
extern void FixedWingPathFollowerSettingsCCAirspeedToVerticalCrossFeedGet( float *NewAirspeedToVerticalCrossFeed );
extern void FixedWingPathFollowerSettingsCCThrottlePISet( float *NewThrottlePI );
extern void FixedWingPathFollowerSettingsCCThrottlePIGet( float *NewThrottlePI );
extern void FixedWingPathFollowerSettingsCCRollLimitSet( float *NewRollLimit );
extern void FixedWingPathFollowerSettingsCCRollLimitGet( float *NewRollLimit );
extern void FixedWingPathFollowerSettingsCCPitchLimitSet( float *NewPitchLimit );
extern void FixedWingPathFollowerSettingsCCPitchLimitGet( float *NewPitchLimit );
extern void FixedWingPathFollowerSettingsCCThrottleLimitSet( float *NewThrottleLimit );
extern void FixedWingPathFollowerSettingsCCThrottleLimitGet( float *NewThrottleLimit );
extern void FixedWingPathFollowerSettingsCCUpdatePeriodSet( int16_t *NewUpdatePeriod );
extern void FixedWingPathFollowerSettingsCCUpdatePeriodGet( int16_t *NewUpdatePeriod );


#endif // FIXEDWINGPATHFOLLOWERSETTINGSCC_H

/**
 * @}
 * @}
 */
