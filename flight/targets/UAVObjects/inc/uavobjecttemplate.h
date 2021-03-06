/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup $(NAME) $(NAME) 
 * @brief $(DESCRIPTION)
 *
 * Autogenerated files and functions for $(NAME) Object
 
 * @{ 
 *
 * @file       $(NAMELC).h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @author     PhoenixPilot, http://github.com/PhoenixPilot, Copyright (C) 2012
 * @brief      Implementation of the $(NAME) object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: $(XMLFILE). 
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

#ifndef $(NAMEUC)_H
#define $(NAMEUC)_H

// Object constants
#define $(NAMEUC)_OBJID $(OBJIDHEX)
#define $(NAMEUC)_ISSINGLEINST $(ISSINGLEINST)
#define $(NAMEUC)_ISSETTINGS $(ISSETTINGS)
#define $(NAMEUC)_NUMBYTES $(NUMBYTES)

// Generic interface functions
int32_t $(NAME)Initialize();
UAVObjHandle $(NAME)Handle();
void $(NAME)SetDefaults(UAVObjHandle obj, uint16_t instId);

// Object data
typedef struct {
$(DATAFIELDS)
} __attribute__((packed)) __attribute__((aligned(4))) $(NAME)Data;

// Typesafe Object access functions
/**
 * @function $(NAME)Get(dataOut)
 * @brief Populate a $(NAME)Data object
 * @param[out] dataOut 
 */
static inline int32_t $(NAME)Get($(NAME)Data *dataOut) { return UAVObjGetData($(NAME)Handle(), dataOut); }

static inline int32_t $(NAME)Set(const $(NAME)Data *dataIn) { return UAVObjSetData($(NAME)Handle(), dataIn); }

static inline int32_t $(NAME)InstGet(uint16_t instId, $(NAME)Data *dataOut) { return UAVObjGetInstanceData($(NAME)Handle(), instId, dataOut); }

static inline int32_t $(NAME)InstSet(uint16_t instId, const $(NAME)Data *dataIn) { return UAVObjSetInstanceData($(NAME)Handle(), instId, dataIn); }

static inline int32_t $(NAME)ConnectQueue(xQueueHandle queue) { return UAVObjConnectQueue($(NAME)Handle(), queue, EV_MASK_ALL_UPDATES); }

static inline int32_t $(NAME)ConnectCallback(UAVObjEventCallback cb) { return UAVObjConnectCallback($(NAME)Handle(), cb, EV_MASK_ALL_UPDATES); }

static inline uint16_t $(NAME)CreateInstance() { return UAVObjCreateInstance($(NAME)Handle(), &$(NAME)SetDefaults); }

static inline void $(NAME)RequestUpdate() { UAVObjRequestUpdate($(NAME)Handle()); }

static inline void $(NAME)RequestInstUpdate(uint16_t instId) { UAVObjRequestInstanceUpdate($(NAME)Handle(), instId); }

static inline void $(NAME)Updated() { UAVObjUpdated($(NAME)Handle()); }

static inline void $(NAME)InstUpdated(uint16_t instId) { UAVObjInstanceUpdated($(NAME)Handle(), instId); }

static inline int32_t $(NAME)GetMetadata(UAVObjMetadata *dataOut) { return UAVObjGetMetadata($(NAME)Handle(), dataOut); }

static inline int32_t $(NAME)SetMetadata(const UAVObjMetadata *dataIn) { return UAVObjSetMetadata($(NAME)Handle(), dataIn); }

static inline int8_t $(NAME)ReadOnly() { return UAVObjReadOnly($(NAME)Handle()); }

// Field information
$(DATAFIELDINFO)

// set/Get functions
$(SETGETFIELDSEXTERN)

#endif // $(NAMEUC)_H

/**
 * @}
 * @}
 */
