/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRectMulti_types.h
 *
 * Code generation for function 'pushBundleRectMulti'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  real_T c;
  real_T e;
  real_T eps0;
  real_T mp;
  real_T pi;
  real_T twopi;
  real_T ln10;
  real_T cumps;
  real_T vTe1eV;
  real_T wpe;
  real_T lamDebye;
  real_T vosc;
  real_T voscToC;
  real_T lambda0;
  real_T omega0;
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_char_T*/

#ifndef typedef_emxArray_char_T
#define typedef_emxArray_char_T

typedef struct emxArray_char_T emxArray_char_T;

#endif                                 /*typedef_emxArray_char_T*/

#ifndef typedef_cell_wrap_0
#define typedef_cell_wrap_0

typedef struct {
  emxArray_real_T *f1;
} cell_wrap_0;

#endif                                 /*typedef_cell_wrap_0*/

#ifndef typedef_emxArray_cell_wrap_0
#define typedef_emxArray_cell_wrap_0

typedef struct {
  cell_wrap_0 *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_cell_wrap_0;

#endif                                 /*typedef_emxArray_cell_wrap_0*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  emxArray_real_T *frequency;
  emxArray_real_T *nc;
  emxArray_char_T *name;
  emxArray_char_T *type;
  emxArray_char_T *mode;
  real_T nrays;
  real_T direction[2];
  emxArray_real_T *rayICs;
  emxArray_cell_wrap_0 *trajs;
  emxArray_real_T *halt;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  real_T iTime;
  real_T time;
  emxArray_real_T *zSblock;
  emxArray_real_T *rSblock;
  real_T domain[4];
  emxArray_real_T *neblock;
  emxArray_real_T *valsNe;
  emxArray_real_T *valsDLogNedz;
  real_T valsDLogNedr[54264];
  real_T teblock[54264];
  real_T valsTe[54264];
  real_T valsDLnTedz[54264];
  real_T valsDLnTedr[54264];
  real_T vzblock[54264];
  real_T valsVz[54264];
  real_T vrblock[54264];
  real_T valsVr[54264];
  real_T Zbarblock[54264];
  real_T valsZbar[54264];
  real_T Zsqrblock[54264];
  real_T valsZsqr[54264];
  real_T uniqueR[168];
  real_T uniqueZ[323];
  real_T grid[54264];
  real_T gridR[54264];
  real_T gridZ[54264];
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_pushBundleRectMultiStackData
#define typedef_pushBundleRectMultiStackData

typedef struct {
  struct {
    struct1_T rayGd;
  } f0;
} pushBundleRectMultiStackData;

#endif                                 /*typedef_pushBundleRectMultiStackData*/

#ifndef typedef_pushBundleRectMultiTLS
#define typedef_pushBundleRectMultiTLS

typedef struct {
  struct {
    real_T this_tunableEnvironment_f2_grid[54264];
    real_T b_this_tunableEnvironment_f2_gr[54264];
    real_T c_this_tunableEnvironment_f2_gr[54264];
  } f0;
} pushBundleRectMultiTLS;

#endif                                 /*typedef_pushBundleRectMultiTLS*/

/* End of code generation (pushBundleRectMulti_types.h) */
