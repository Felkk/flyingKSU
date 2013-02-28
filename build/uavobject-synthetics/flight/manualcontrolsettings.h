/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ManualControlSettings ManualControlSettings 
 * @brief Settings to indicate how to decode receiver input by @ref ManualControlModule.
 *
 * Autogenerated files and functions for ManualControlSettings Object
 
 * @{ 
 *
 * @file       manualcontrolsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the ManualControlSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: manualcontrolsettings.xml. 
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

#ifndef MANUALCONTROLSETTINGS_H
#define MANUALCONTROLSETTINGS_H

// Object constants
#define MANUALCONTROLSETTINGS_OBJID 0x1FFF895A
#define MANUALCONTROLSETTINGS_ISSINGLEINST 1
#define MANUALCONTROLSETTINGS_ISSETTINGS 1
#define MANUALCONTROLSETTINGS_NUMBYTES 96

// Generic interface functions
int32_t ManualControlSettingsInitialize();
UAVObjHandle ManualControlSettingsHandle();
void ManualControlSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    float Deadband;
    int16_t ChannelMin[9];
    int16_t ChannelNeutral[9];
    int16_t ChannelMax[9];
    uint16_t ArmedTimeout;
    uint8_t ChannelGroups[9];
    uint8_t ChannelNumber[9];
    uint8_t Arming;
    uint8_t Stabilization1Settings[3];
    uint8_t Stabilization2Settings[3];
    uint8_t Stabilization3Settings[3];
    uint8_t FlightModeNumber;
    uint8_t FlightModePosition[6];
    uint8_t FailsafeBehavior;

} __attribute__((packed)) __attribute__((aligned(4))) ManualControlSettingsData;

// Typesafe Object access functions
/**
 * @function ManualControlSettingsGet(dataOut)
 * @brief Populate a ManualControlSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t ManualControlSettingsGet(ManualControlSettingsData *dataOut) { return UAVObjGetData(ManualControlSettingsHandle(), dataOut); }

static inline int32_t ManualControlSettingsSet(const ManualControlSettingsData *dataIn) { return UAVObjSetData(ManualControlSettingsHandle(), dataIn); }

static inline int32_t ManualControlSettingsInstGet(uint16_t instId, ManualControlSettingsData *dataOut) { return UAVObjGetInstanceData(ManualControlSettingsHandle(), instId, dataOut); }

static inline int32_t ManualControlSettingsInstSet(uint16_t instId, const ManualControlSettingsData *dataIn) { return UAVObjSetInstanceData(ManualControlSettingsHandle(), instId, dataIn); }

static inline int32_t ManualControlSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(ManualControlSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t ManualControlSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(ManualControlSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t ManualControlSettingsCreateInstance() { return UAVObjCreateInstance(ManualControlSettingsHandle(), &ManualControlSettingsSetDefaults); }

static inline void ManualControlSettingsRequestUpdate() { UAVObjRequestUpdate(ManualControlSettingsHandle()); }

static inline void ManualControlSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(ManualControlSettingsHandle(), instId); }

static inline void ManualControlSettingsUpdated() { UAVObjUpdated(ManualControlSettingsHandle()); }

static inline void ManualControlSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(ManualControlSettingsHandle(), instId); }

static inline int32_t ManualControlSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(ManualControlSettingsHandle(), dataOut); }

static inline int32_t ManualControlSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(ManualControlSettingsHandle(), dataIn); }

static inline int8_t ManualControlSettingsReadOnly() { return UAVObjReadOnly(ManualControlSettingsHandle()); }

// Field information
// Field Deadband information
// Field ChannelMin information
/* Array element names for field ChannelMin */
typedef enum { MANUALCONTROLSETTINGS_CHANNELMIN_THROTTLE=0, MANUALCONTROLSETTINGS_CHANNELMIN_ROLL=1, MANUALCONTROLSETTINGS_CHANNELMIN_PITCH=2, MANUALCONTROLSETTINGS_CHANNELMIN_YAW=3, MANUALCONTROLSETTINGS_CHANNELMIN_FLIGHTMODE=4, MANUALCONTROLSETTINGS_CHANNELMIN_COLLECTIVE=5, MANUALCONTROLSETTINGS_CHANNELMIN_ACCESSORY0=6, MANUALCONTROLSETTINGS_CHANNELMIN_ACCESSORY1=7, MANUALCONTROLSETTINGS_CHANNELMIN_ACCESSORY2=8 } ManualControlSettingsChannelMinElem;
/* Number of elements for field ChannelMin */
#define MANUALCONTROLSETTINGS_CHANNELMIN_NUMELEM 9
// Field ChannelNeutral information
/* Array element names for field ChannelNeutral */
typedef enum { MANUALCONTROLSETTINGS_CHANNELNEUTRAL_THROTTLE=0, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ROLL=1, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_PITCH=2, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_YAW=3, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_FLIGHTMODE=4, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_COLLECTIVE=5, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ACCESSORY0=6, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ACCESSORY1=7, MANUALCONTROLSETTINGS_CHANNELNEUTRAL_ACCESSORY2=8 } ManualControlSettingsChannelNeutralElem;
/* Number of elements for field ChannelNeutral */
#define MANUALCONTROLSETTINGS_CHANNELNEUTRAL_NUMELEM 9
// Field ChannelMax information
/* Array element names for field ChannelMax */
typedef enum { MANUALCONTROLSETTINGS_CHANNELMAX_THROTTLE=0, MANUALCONTROLSETTINGS_CHANNELMAX_ROLL=1, MANUALCONTROLSETTINGS_CHANNELMAX_PITCH=2, MANUALCONTROLSETTINGS_CHANNELMAX_YAW=3, MANUALCONTROLSETTINGS_CHANNELMAX_FLIGHTMODE=4, MANUALCONTROLSETTINGS_CHANNELMAX_COLLECTIVE=5, MANUALCONTROLSETTINGS_CHANNELMAX_ACCESSORY0=6, MANUALCONTROLSETTINGS_CHANNELMAX_ACCESSORY1=7, MANUALCONTROLSETTINGS_CHANNELMAX_ACCESSORY2=8 } ManualControlSettingsChannelMaxElem;
/* Number of elements for field ChannelMax */
#define MANUALCONTROLSETTINGS_CHANNELMAX_NUMELEM 9
// Field ArmedTimeout information
// Field ChannelGroups information
/* Enumeration options for field ChannelGroups */
typedef enum { MANUALCONTROLSETTINGS_CHANNELGROUPS_PWM=0, MANUALCONTROLSETTINGS_CHANNELGROUPS_PPM=1, MANUALCONTROLSETTINGS_CHANNELGROUPS_DSMMAINPORT=2, MANUALCONTROLSETTINGS_CHANNELGROUPS_DSMFLEXIPORT=3, MANUALCONTROLSETTINGS_CHANNELGROUPS_SBUS=4, MANUALCONTROLSETTINGS_CHANNELGROUPS_GCS=5, MANUALCONTROLSETTINGS_CHANNELGROUPS_NONE=6 } ManualControlSettingsChannelGroupsOptions;
/* Array element names for field ChannelGroups */
typedef enum { MANUALCONTROLSETTINGS_CHANNELGROUPS_THROTTLE=0, MANUALCONTROLSETTINGS_CHANNELGROUPS_ROLL=1, MANUALCONTROLSETTINGS_CHANNELGROUPS_PITCH=2, MANUALCONTROLSETTINGS_CHANNELGROUPS_YAW=3, MANUALCONTROLSETTINGS_CHANNELGROUPS_FLIGHTMODE=4, MANUALCONTROLSETTINGS_CHANNELGROUPS_COLLECTIVE=5, MANUALCONTROLSETTINGS_CHANNELGROUPS_ACCESSORY0=6, MANUALCONTROLSETTINGS_CHANNELGROUPS_ACCESSORY1=7, MANUALCONTROLSETTINGS_CHANNELGROUPS_ACCESSORY2=8 } ManualControlSettingsChannelGroupsElem;
/* Number of elements for field ChannelGroups */
#define MANUALCONTROLSETTINGS_CHANNELGROUPS_NUMELEM 9
// Field ChannelNumber information
/* Array element names for field ChannelNumber */
typedef enum { MANUALCONTROLSETTINGS_CHANNELNUMBER_THROTTLE=0, MANUALCONTROLSETTINGS_CHANNELNUMBER_ROLL=1, MANUALCONTROLSETTINGS_CHANNELNUMBER_PITCH=2, MANUALCONTROLSETTINGS_CHANNELNUMBER_YAW=3, MANUALCONTROLSETTINGS_CHANNELNUMBER_FLIGHTMODE=4, MANUALCONTROLSETTINGS_CHANNELNUMBER_COLLECTIVE=5, MANUALCONTROLSETTINGS_CHANNELNUMBER_ACCESSORY0=6, MANUALCONTROLSETTINGS_CHANNELNUMBER_ACCESSORY1=7, MANUALCONTROLSETTINGS_CHANNELNUMBER_ACCESSORY2=8 } ManualControlSettingsChannelNumberElem;
/* Number of elements for field ChannelNumber */
#define MANUALCONTROLSETTINGS_CHANNELNUMBER_NUMELEM 9
// Field Arming information
/* Enumeration options for field Arming */
typedef enum { MANUALCONTROLSETTINGS_ARMING_ALWAYSDISARMED=0, MANUALCONTROLSETTINGS_ARMING_ALWAYSARMED=1, MANUALCONTROLSETTINGS_ARMING_ROLLLEFT=2, MANUALCONTROLSETTINGS_ARMING_ROLLRIGHT=3, MANUALCONTROLSETTINGS_ARMING_PITCHFORWARD=4, MANUALCONTROLSETTINGS_ARMING_PITCHAFT=5, MANUALCONTROLSETTINGS_ARMING_YAWLEFT=6, MANUALCONTROLSETTINGS_ARMING_YAWRIGHT=7 } ManualControlSettingsArmingOptions;
// Field Stabilization1Settings information
/* Enumeration options for field Stabilization1Settings */
typedef enum { MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_NONE=0, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_RATE=1, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_ATTITUDE=2, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_AXISLOCK=3, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_WEAKLEVELING=4, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_VIRTUALBAR=5, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_RELAYRATE=6, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_RELAYATTITUDE=7, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_COORDINATEDFLIGHT=8 } ManualControlSettingsStabilization1SettingsOptions;
/* Array element names for field Stabilization1Settings */
typedef enum { MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_ROLL=0, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_PITCH=1, MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_YAW=2 } ManualControlSettingsStabilization1SettingsElem;
/* Number of elements for field Stabilization1Settings */
#define MANUALCONTROLSETTINGS_STABILIZATION1SETTINGS_NUMELEM 3
// Field Stabilization2Settings information
/* Enumeration options for field Stabilization2Settings */
typedef enum { MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_NONE=0, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_RATE=1, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_ATTITUDE=2, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_AXISLOCK=3, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_WEAKLEVELING=4, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_VIRTUALBAR=5, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_RELAYRATE=6, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_RELAYATTITUDE=7, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_COORDINATEDFLIGHT=8 } ManualControlSettingsStabilization2SettingsOptions;
/* Array element names for field Stabilization2Settings */
typedef enum { MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_ROLL=0, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_PITCH=1, MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_YAW=2 } ManualControlSettingsStabilization2SettingsElem;
/* Number of elements for field Stabilization2Settings */
#define MANUALCONTROLSETTINGS_STABILIZATION2SETTINGS_NUMELEM 3
// Field Stabilization3Settings information
/* Enumeration options for field Stabilization3Settings */
typedef enum { MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_NONE=0, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_RATE=1, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_ATTITUDE=2, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_AXISLOCK=3, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_WEAKLEVELING=4, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_VIRTUALBAR=5, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_RELAYRATE=6, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_RELAYATTITUDE=7, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_COORDINATEDFLIGHT=8 } ManualControlSettingsStabilization3SettingsOptions;
/* Array element names for field Stabilization3Settings */
typedef enum { MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_ROLL=0, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_PITCH=1, MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_YAW=2 } ManualControlSettingsStabilization3SettingsElem;
/* Number of elements for field Stabilization3Settings */
#define MANUALCONTROLSETTINGS_STABILIZATION3SETTINGS_NUMELEM 3
// Field FlightModeNumber information
// Field FlightModePosition information
/* Enumeration options for field FlightModePosition */
typedef enum { MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_MANUAL=0, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_STABILIZED1=1, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_STABILIZED2=2, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_STABILIZED3=3, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_AUTOTUNE=4, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_ALTITUDEHOLD=5, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_VELOCITYCONTROL=6, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_POSITIONHOLD=7, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_RETURNTOHOME=8, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_LAND=9, MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_PATHPLANNER=10 } ManualControlSettingsFlightModePositionOptions;
/* Number of elements for field FlightModePosition */
#define MANUALCONTROLSETTINGS_FLIGHTMODEPOSITION_NUMELEM 6
// Field FailsafeBehavior information
/* Enumeration options for field FailsafeBehavior */
typedef enum { MANUALCONTROLSETTINGS_FAILSAFEBEHAVIOR_NONE=0, MANUALCONTROLSETTINGS_FAILSAFEBEHAVIOR_RETURNTOBASE=1 } ManualControlSettingsFailsafeBehaviorOptions;


// set/Get functions
extern void ManualControlSettingsDeadbandSet( float *NewDeadband );
extern void ManualControlSettingsDeadbandGet( float *NewDeadband );
extern void ManualControlSettingsChannelMinSet( int16_t *NewChannelMin );
extern void ManualControlSettingsChannelMinGet( int16_t *NewChannelMin );
extern void ManualControlSettingsChannelNeutralSet( int16_t *NewChannelNeutral );
extern void ManualControlSettingsChannelNeutralGet( int16_t *NewChannelNeutral );
extern void ManualControlSettingsChannelMaxSet( int16_t *NewChannelMax );
extern void ManualControlSettingsChannelMaxGet( int16_t *NewChannelMax );
extern void ManualControlSettingsArmedTimeoutSet( uint16_t *NewArmedTimeout );
extern void ManualControlSettingsArmedTimeoutGet( uint16_t *NewArmedTimeout );
extern void ManualControlSettingsChannelGroupsSet( uint8_t *NewChannelGroups );
extern void ManualControlSettingsChannelGroupsGet( uint8_t *NewChannelGroups );
extern void ManualControlSettingsChannelNumberSet( uint8_t *NewChannelNumber );
extern void ManualControlSettingsChannelNumberGet( uint8_t *NewChannelNumber );
extern void ManualControlSettingsArmingSet( uint8_t *NewArming );
extern void ManualControlSettingsArmingGet( uint8_t *NewArming );
extern void ManualControlSettingsStabilization1SettingsSet( uint8_t *NewStabilization1Settings );
extern void ManualControlSettingsStabilization1SettingsGet( uint8_t *NewStabilization1Settings );
extern void ManualControlSettingsStabilization2SettingsSet( uint8_t *NewStabilization2Settings );
extern void ManualControlSettingsStabilization2SettingsGet( uint8_t *NewStabilization2Settings );
extern void ManualControlSettingsStabilization3SettingsSet( uint8_t *NewStabilization3Settings );
extern void ManualControlSettingsStabilization3SettingsGet( uint8_t *NewStabilization3Settings );
extern void ManualControlSettingsFlightModeNumberSet( uint8_t *NewFlightModeNumber );
extern void ManualControlSettingsFlightModeNumberGet( uint8_t *NewFlightModeNumber );
extern void ManualControlSettingsFlightModePositionSet( uint8_t *NewFlightModePosition );
extern void ManualControlSettingsFlightModePositionGet( uint8_t *NewFlightModePosition );
extern void ManualControlSettingsFailsafeBehaviorSet( uint8_t *NewFailsafeBehavior );
extern void ManualControlSettingsFailsafeBehaviorGet( uint8_t *NewFailsafeBehavior );


#endif // MANUALCONTROLSETTINGS_H

/**
 * @}
 * @}
 */