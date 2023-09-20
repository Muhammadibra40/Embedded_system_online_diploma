/*
 * Platform_Types.h
 *
 *  	Created on: Sep 18, 2023
 *      Author: MUHAMMED IBRAHIM
 *
 *      Specifications of Platform Types according to AUTOSAR
 */

#include "stdint.h"
#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

#define CPU_TYPE                     CPU_TYPE_32
#define CPU_BIT_ORDER                LSB_FIRST
#define CPU_BYTE_ORDER               HIGH_BYTE_FIRST

#define TRUE                         1
#define FALSE                        0

typedef unsigned char        		  boolean;

typedef unsigned char        		  uint8;
typedef unsigned short       		  uint16;
typedef unsigned long        		  uint32;
typedef unsigned long long   		  uint64;

typedef char                 		  sint8;
typedef short                		  sint16;
typedef long                 		  sint32;
typedef long long            		  sint64;

typedef float                		  float32;
typedef double               		  float64;


typedef volatile unsigned char        vuint8;
typedef volatile unsigned short       vuint16;
typedef volatile unsigned long        vuint32;
typedef volatile unsigned long long   vuint64;

typedef volatile char                 vsint8;
typedef volatile short                vsint16;
typedef volatile long                 vsint32;
typedef volatile long long            vsint64;

typedef volatile float                vfloat32;
typedef volatile double               vfloat64;


#endif /* PLATFORM_TYPES_H_ */
