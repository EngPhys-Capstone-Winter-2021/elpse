/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * propAlg_types.h
 *
 * Code generation for function 'propAlg'
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
  emxArray_real_T *valsDLogNedr;
  emxArray_real_T *teblock;
  emxArray_real_T *valsTe;
  emxArray_real_T *valsDLnTedz;
  emxArray_real_T *valsDLnTedr;
  emxArray_real_T *vzblock;
  emxArray_real_T *valsVz;
  emxArray_real_T *vrblock;
  emxArray_real_T *valsVr;
  emxArray_real_T *Zbarblock;
  emxArray_real_T *valsZbar;
  emxArray_real_T *Zsqrblock;
  emxArray_real_T *valsZsqr;
  emxArray_real_T *zVal;
  emxArray_real_T *rVal;
  emxArray_real_T *gridNe;
  emxArray_real_T *gridDLogNedz;
  emxArray_real_T *gridDLogNedr;
  emxArray_real_T *gridTe;
  emxArray_real_T *gridDLnTedr;
  emxArray_real_T *gridDLnTedz;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

/* End of code generation (propAlg_types.h) */
