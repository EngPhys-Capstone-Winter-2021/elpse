/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * propAlg_emxutil.h
 *
 * Code generation for function 'propAlg_emxutil'
 *
 */

#pragma once

/* Include files */
#include "propAlg_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emxCopyStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *dst, const
  cell_wrap_0 *src, const emlrtRTEInfo *srcLocation);
void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst, emxArray_real_T
                    * const *src, const emlrtRTEInfo *srcLocation);
void emxEnsureCapacity_cell_wrap_0(const emlrtStack *sp, emxArray_cell_wrap_0
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
void emxEnsureCapacity_char_T(const emlrtStack *sp, emxArray_char_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation);
void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation);
void emxExpand_cell_wrap_0(const emlrtStack *sp, emxArray_cell_wrap_0 *emxArray,
  int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation);
void emxFreeStruct_cell_wrap_0(cell_wrap_0 *pStruct);
void emxFreeStruct_struct0_T(struct0_T *pStruct);
void emxFreeStruct_struct1_T(struct1_T *pStruct);
void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray);
void emxFree_char_T(emxArray_char_T **pEmxArray);
void emxFree_real_T(emxArray_real_T **pEmxArray);
void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush);
void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush);
void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush);
void emxInit_cell_wrap_0(const emlrtStack *sp, emxArray_cell_wrap_0 **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
void emxInit_char_T(const emlrtStack *sp, emxArray_char_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush);
void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush);
void emxTrim_cell_wrap_0(emxArray_cell_wrap_0 *emxArray, int32_T fromIndex,
  int32_T toIndex);

/* End of code generation (propAlg_emxutil.h) */
