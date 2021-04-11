/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRect_emxutil.h
 *
 * Code generation for function 'pushBundleRect_emxutil'
 *
 */

#pragma once

/* Include files */
#include "pushBundleRect_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void emxCopyMatrix_char_T(char_T dst[2], const char_T src[2]);
void emxCopyMatrix_char_T1(char_T dst[7], const char_T src[7]);
void emxCopyMatrix_real_T(real_T dst[2], const real_T src[2]);
void emxCopyStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *dst, const
  cell_wrap_0 *src, const emlrtRTEInfo *srcLocation);
void emxCopyStruct_struct0_T(const emlrtStack *sp, struct0_T *dst, const
  struct0_T *src, const emlrtRTEInfo *srcLocation);
void emxCopy_cell_wrap_0(const emlrtStack *sp, emxArray_cell_wrap_0 **dst,
  emxArray_cell_wrap_0 * const *src, const emlrtRTEInfo *srcLocation);
void emxCopy_char_T(const emlrtStack *sp, emxArray_char_T **dst, emxArray_char_T
                    * const *src, const emlrtRTEInfo *srcLocation);
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
void emxFree_cell_wrap_0(emxArray_cell_wrap_0 **pEmxArray);
void emxFree_char_T(emxArray_char_T **pEmxArray);
void emxFree_real_T(emxArray_real_T **pEmxArray);
void emxInitStruct_cell_wrap_0(const emlrtStack *sp, cell_wrap_0 *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush);
void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
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

/* End of code generation (pushBundleRect_emxutil.h) */
