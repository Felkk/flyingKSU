/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup HwRevolution HwRevolution 
 * @brief Selection of optional hardware configurations.
 *
 * Autogenerated files and functions for HwRevolution Object
 
 * @{ 
 *
 * @file       hwrevolution.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the HwRevolution object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: hwrevolution.xml. 
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

#ifndef HWREVOLUTION_H
#define HWREVOLUTION_H

// Object constants
#define HWREVOLUTION_OBJID 0x1118757C
#define HWREVOLUTION_ISSINGLEINST 1
#define HWREVOLUTION_ISSETTINGS 1
#define HWREVOLUTION_NUMBYTES 11

// Generic interface functions
int32_t HwRevolutionInitialize();
UAVObjHandle HwRevolutionHandle();
void HwRevolutionSetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
    uint8_t RcvrPort;
    uint8_t AuxPort;
    uint8_t AuxSBusPort;
    uint8_t FlexiPort;
    uint8_t TelemetryPort;
    uint8_t GPSPort;
    uint8_t USB_HIDPort;
    uint8_t USB_VCPPort;
    uint8_t DSMxBind;
    uint8_t GyroRange;
    uint8_t AccelRange;

} __attribute__((packed)) __attribute__((aligned(4))) HwRevolutionData;

// Typesafe Object access functions
/**
 * @function HwRevolutionGet(dataOut)
 * @brief Populate a HwRevolutionData object
 * @param[out] dataOut 
 */
static inline int32_t HwRevolutionGet(HwRevolutionData *dataOut) { return UAVObjGetData(HwRevolutionHandle(), dataOut); }

static inline int32_t HwRevolutionSet(const HwRevolutionData *dataIn) { return UAVObjSetData(HwRevolutionHandle(), dataIn); }

static inline int32_t HwRevolutionInstGet(uint16_t instId, HwRevolutionData *dataOut) { return UAVObjGetInstanceData(HwRevolutionHandle(), instId, dataOut); }

static inline int32_t HwRevolutionInstSet(uint16_t instId, const HwRevolutionData *dataIn) { return UAVObjSetInstanceData(HwRevolutionHandle(), instId, dataIn); }

static inline int32_t HwRevolutionConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue(HwRevolutionHandle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t HwRevolutionConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback(HwRevolutionHandle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t HwRevolutionCreateInstance() { return UAVObjCreateInstance(HwRevolutionHandle(), &HwRevolutionSetDefaults); }

static inline void HwRevolutionRequestUpdate() { UAVObjRequestUpdate(HwRevolutionHandle()); }

static inline void HwRevolutionRequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate(HwRevolutionHandle(), instId); }

static inline void HwRevolutionUpdated() { UAVObjUpdated(HwRevolutionHandle()); }

static inline void HwRevolutionInstUpdated(uint16_t instId) { UAVObjInstanceUpdated(HwRevolutionHandle(), instId); }

static inline int32_t HwRevolutionGetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata(HwRevolutionHandle(), dataOut); }

static inline int32_t HwRevolutionSetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata(HwRevolutionHandle(), dataIn); }

static inline int8_t HwRevolutionReadOnly() { return UAVObjReadOnly(HwRevolutionHandle()); }

// Field information
// Field RcvrPort information
/* Enumeration options for field RcvrPort */
typedef enum { HWREVOLUTION_RCVRPORT_DISABLED=0, HWREVOLUTION_RCVRPORT_PWM=1, HWREVOLUTION_RCVRPORT_PPM=2, HWREVOLUTION_RCVRPORT_PPMOUTPUTS=3, HWREVOLUTION_RCVRPORT_OUTPUTS=4 } HwRevolutionRcvrPortOptions;
// Field AuxPort information
/* Enumeration options for field AuxPort */
typedef enum { HWREVOLUTION_AUXPORT_DISABLED=0, HWREVOLUTION_AUXPORT_TELEMETRY=1, HWREVOLUTION_AUXPORT_DSM2=2, HWREVOLUTION_AUXPORT_DSMX10BIT=3, HWREVOLUTION_AUXPORT_DSMX11BIT=4, HWREVOLUTION_AUXPORT_COMAUX=5, HWREVOLUTION_AUXPORT_COMBRIDGE=6 } HwRevolutionAuxPortOptions;
// Field AuxSBusPort information
/* Enumeration options for field AuxSBusPort */
typedef enum { HWREVOLUTION_AUXSBUSPORT_DISABLED=0, HWREVOLUTION_AUXSBUSPORT_SBUS=1, HWREVOLUTION_AUXSBUSPORT_DSM2=2, HWREVOLUTION_AUXSBUSPORT_DSMX10BIT=3, HWREVOLUTION_AUXSBUSPORT_DSMX11BIT=4, HWREVOLUTION_AUXSBUSPORT_COMAUX=5, HWREVOLUTION_AUXSBUSPORT_COMBRIDGE=6 } HwRevolutionAuxSBusPortOptions;
// Field FlexiPort information
/* Enumeration options for field FlexiPort */
typedef enum { HWREVOLUTION_FLEXIPORT_DISABLED=0, HWREVOLUTION_FLEXIPORT_I2C=1, HWREVOLUTION_FLEXIPORT_DSM2=2, HWREVOLUTION_FLEXIPORT_DSMX10BIT=3, HWREVOLUTION_FLEXIPORT_DSMX11BIT=4, HWREVOLUTION_FLEXIPORT_COMAUX=5, HWREVOLUTION_FLEXIPORT_COMBRIDGE=6 } HwRevolutionFlexiPortOptions;
// Field TelemetryPort information
/* Enumeration options for field TelemetryPort */
typedef enum { HWREVOLUTION_TELEMETRYPORT_DISABLED=0, HWREVOLUTION_TELEMETRYPORT_TELEMETRY=1, HWREVOLUTION_TELEMETRYPORT_COMAUX=2, HWREVOLUTION_TELEMETRYPORT_COMBRIDGE=3 } HwRevolutionTelemetryPortOptions;
// Field GPSPort information
/* Enumeration options for field GPSPort */
typedef enum { HWREVOLUTION_GPSPORT_DISABLED=0, HWREVOLUTION_GPSPORT_TELEMETRY=1, HWREVOLUTION_GPSPORT_GPS=2, HWREVOLUTION_GPSPORT_COMAUX=3, HWREVOLUTION_GPSPORT_COMBRIDGE=4 } HwRevolutionGPSPortOptions;
// Field USB_HIDPort information
/* Enumeration options for field USB_HIDPort */
typedef enum { HWREVOLUTION_USB_HIDPORT_USBTELEMETRY=0, HWREVOLUTION_USB_HIDPORT_RCTRANSMITTER=1, HWREVOLUTION_USB_HIDPORT_DISABLED=2 } HwRevolutionUSB_HIDPortOptions;
// Field USB_VCPPort information
/* Enumeration options for field USB_VCPPort */
typedef enum { HWREVOLUTION_USB_VCPPORT_USBTELEMETRY=0, HWREVOLUTION_USB_VCPPORT_COMBRIDGE=1, HWREVOLUTION_USB_VCPPORT_DEBUGCONSOLE=2, HWREVOLUTION_USB_VCPPORT_DISABLED=3 } HwRevolutionUSB_VCPPortOptions;
// Field DSMxBind information
// Field GyroRange information
/* Enumeration options for field GyroRange */
typedef enum { HWREVOLUTION_GYRORANGE_250=0, HWREVOLUTION_GYRORANGE_500=1, HWREVOLUTION_GYRORANGE_1000=2, HWREVOLUTION_GYRORANGE_2000=3 } HwRevolutionGyroRangeOptions;
// Field AccelRange information
/* Enumeration options for field AccelRange */
typedef enum { HWREVOLUTION_ACCELRANGE_2G=0, HWREVOLUTION_ACCELRANGE_4G=1, HWREVOLUTION_ACCELRANGE_8G=2, HWREVOLUTION_ACCELRANGE_16G=3 } HwRevolutionAccelRangeOptions;


// set/Get functions
extern void HwRevolutionRcvrPortSet( uint8_t *NewRcvrPort );
extern void HwRevolutionRcvrPortGet( uint8_t *NewRcvrPort );
extern void HwRevolutionAuxPortSet( uint8_t *NewAuxPort );
extern void HwRevolutionAuxPortGet( uint8_t *NewAuxPort );
extern void HwRevolutionAuxSBusPortSet( uint8_t *NewAuxSBusPort );
extern void HwRevolutionAuxSBusPortGet( uint8_t *NewAuxSBusPort );
extern void HwRevolutionFlexiPortSet( uint8_t *NewFlexiPort );
extern void HwRevolutionFlexiPortGet( uint8_t *NewFlexiPort );
extern void HwRevolutionTelemetryPortSet( uint8_t *NewTelemetryPort );
extern void HwRevolutionTelemetryPortGet( uint8_t *NewTelemetryPort );
extern void HwRevolutionGPSPortSet( uint8_t *NewGPSPort );
extern void HwRevolutionGPSPortGet( uint8_t *NewGPSPort );
extern void HwRevolutionUSB_HIDPortSet( uint8_t *NewUSB_HIDPort );
extern void HwRevolutionUSB_HIDPortGet( uint8_t *NewUSB_HIDPort );
extern void HwRevolutionUSB_VCPPortSet( uint8_t *NewUSB_VCPPort );
extern void HwRevolutionUSB_VCPPortGet( uint8_t *NewUSB_VCPPort );
extern void HwRevolutionDSMxBindSet( uint8_t *NewDSMxBind );
extern void HwRevolutionDSMxBindGet( uint8_t *NewDSMxBind );
extern void HwRevolutionGyroRangeSet( uint8_t *NewGyroRange );
extern void HwRevolutionGyroRangeGet( uint8_t *NewGyroRange );
extern void HwRevolutionAccelRangeSet( uint8_t *NewAccelRange );
extern void HwRevolutionAccelRangeGet( uint8_t *NewAccelRange );


#endif // HWREVOLUTION_H

/**
 * @}
 * @}
 */
