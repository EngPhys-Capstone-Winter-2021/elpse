/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pushBundleRect_api.h
 *
 * Code generation for function '_coder_pushBundleRect_api'
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
void MEXGlobalSyncInFunction(const emlrtStack *sp);
void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck);
void emlrt_synchGlobalsFromML(const emlrtStack *sp);
void emlrt_synchGlobalsToML(const emlrtStack *sp);
void pushBundleRect_api(pushBundleRectStackData *SD, const mxArray * const prhs
  [3], const mxArray *plhs[1]);

/* End of code generation (_coder_pushBundleRect_api.h) */
