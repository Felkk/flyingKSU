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
 * @file       actuatorsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
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

#ifndef ACTUATORSETTINGS_H
#define ACTUATORSETTINGS_H

// Object constants
#define ACTUATORSETTINGS_OBJID 0xA3C64272
#define ACTUATORSETTINGS_ISSINGLEINST 1
#define ACTUATORSETTINGS_ISSETTINGS 1
#define ACTUATORSETTINGS_NUMBYTES 93

// Generic interface functions
int32_t ActuatorSettingsInitialize();
UAVObjHandle ActuatorSettingsHandle();
void ActuatorSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint16_t ChannelUpdateFreq[6];
    int16_t ChannelMax[10];
    int16_t ChannelNeutral[10];
    int16_t ChannelMin[10];
    uint8_t ChannelType[10];
    uint8_t ChannelAddr[10];
    uint8_t MotorsSpinWhileArmed;

} __attribute__((packed)) __attribute__((aligned(4))) ActuatorSettingsData;

// Typesafe Object access functions
/**
 * @function ActuatorSettingsGet(dataOut)
 * @brief Populate a ActuatorSettingsData object
 * @param[out] dataOut 
 */
static inline int32_t ActuatorSettingsGet(ActuatorSettingsData *dataOut) { return UAVObjGetData(ActuatorSettingsHandle(), dataOut); }

static inline int32_t ActuatorSettingsSet(const ActuatorSettingsData *dataIn) { return UAVObjSetData(ActuatorSettingsHandle(), dataIn); }

static inline int32_t ActuatorSettingsInstGet(uint16_t instId, ActuatorSettingsData *dataOut) { return UAVObjGetInstanceData(ActuatorSettingsHandle(), instId, dataOut); }

static inline int32_t ActuatorSettingsInstSet(uint16_t instId, const ActuatorSettingsData *dataIn) { return UAVObjSetInstanceData(ActuatorSettingsHandle(), instId, dataIn); }

static inline int32_t ActuatorSettingsConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(ActuatorSettingsHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t ActuatorSettingsConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(ActuatorSettingsHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t ActuatorSettingsCreateInstance() { return UAVObjCreateInstance(ActuatorSettingsHandle(), &ActuatorSettingsSetDefaults); }

static inline void ActuatorSettingsRequestUpdate() { UAVObjRequestUpdate(ActuatorSettingsHandle()); }

static inline void ActuatorSettingsRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(ActuatorSettingsHandle(), instId); }

static inline void ActuatorSettingsUpdated() { UAVObjUpdated(ActuatorSettingsHandle()); }

static inline void ActuatorSettingsInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(ActuatorSettingsHandle(), instId); }

static inline int32_t ActuatorSettingsGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(ActuatorSettingsHandle(), dataOut); }

static inline int32_t ActuatorSettingsSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(ActuatorSettingsHandle(), dataIn); }

static inline int8_t ActuatorSettingsReadOnly() { return UAVObjReadOnly(ActuatorSettingsHandle()); }

// Field information
// Field ChannelUpdateFreq information
/* Number of elements for field ChannelUpdateFreq */
#define ACTUATORSETTINGS_CHANNELUPDATEFREQ_NUMELEM 6
// Field ChannelMax information
/* Number of elements for field ChannelMax */
#define ACTUATORSETTINGS_CHANNELMAX_NUMELEM 10
// Field ChannelNeutral information
/* Number of elements for field ChannelNeutral */
#define ACTUATORSETTINGS_CHANNELNEUTRAL_NUMELEM 10
// Field ChannelMin information
/* Number of elements for field ChannelMin */
#define ACTUATORSETTINGS_CHANNELMIN_NUMELEM 10
// Field ChannelType information
/* Enumeration options for field ChannelType */
typedef enum { ACTUATORSETTINGS_CHANNELTYPE_PWM=0, ACTUATORSETTINGS_CHANNELTYPE_MK=1, ACTUATORSETTINGS_CHANNELTYPE_ASTEC4=2, ACTUATORSETTINGS_CHANNELTYPE_PWMALARMBUZZER=3, ACTUATORSETTINGS_CHANNELTYPE_ARMINGLED=4, ACTUATORSETTINGS_CHANNELTYPE_INFOLED=5 } ActuatorSettingsChannelTypeOptions;
/* Number of elements for field ChannelType */
#define ACTUATORSETTINGS_CHANNELTYPE_NUMELEM 10
// Field ChannelAddr information
/* Number of elements for field ChannelAddr */
#define ACTUATORSETTINGS_CHANNELADDR_NUMELEM 10
// Field MotorsSpinWhileArmed information
/* Enumeration options for field MotorsSpinWhileArmed */
typedef enum { ACTUATORSETTINGS_MOTORSSPINWHILEARMED_FALSE=0, ACTUATORSETTINGS_MOTORSSPINWHILEARMED_TRUE=1 } ActuatorSettingsMotorsSpinWhileArmedOptions;


// set/Get functions
extern void ActuatorSettingsChannelUpdateFreqSet( uint16_t *NewChannelUpdateFreq );
extern void ActuatorSettingsChannelUpdateFreqGet( uint16_t *NewChannelUpdateFreq );
extern void ActuatorSettingsChannelMaxSet( int16_t *NewChannelMax );
extern void ActuatorSettingsChannelMaxGet( int16_t *NewChannelMax );
extern void ActuatorSettingsChannelNeutralSet( int16_t *NewChannelNeutral );
extern void ActuatorSettingsChannelNeutralGet( int16_t *NewChannelNeutral );
extern void ActuatorSettingsChannelMinSet( int16_t *NewChannelMin );
extern void ActuatorSettingsChannelMinGet( int16_t *NewChannelMin );
extern void ActuatorSettingsChannelTypeSet( uint8_t *NewChannelType );
extern void ActuatorSettingsChannelTypeGet( uint8_t *NewChannelType );
extern void ActuatorSettingsChannelAddrSet( uint8_t *NewChannelAddr );
extern void ActuatorSettingsChannelAddrGet( uint8_t *NewChannelAddr );
extern void ActuatorSettingsMotorsSpinWhileArmedSet( uint8_t *NewMotorsSpinWhileArmed );
extern void ActuatorSettingsMotorsSpinWhileArmedGet( uint8_t *NewMotorsSpinWhileArmed );


#endif // ACTUATORSETTINGS_H

/**
 * @}
 * @}
 */