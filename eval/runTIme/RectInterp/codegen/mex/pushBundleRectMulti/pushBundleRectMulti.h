/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRectMulti.h
 *
 * Code generation for function 'pushBundleRectMulti'
 *
 */

#pragma once

/* Include files */
#include "pushBundleRectMulti_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
emlrtCTX emlrtGetRootTLSGlobal(void);
void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData);
boolean_T inDomain(const real_T x[2], const real_T rayGd_domain[4]);
void pushBundleRectMulti(const emlrtStack *sp, struct0_T *rayBundle, const
  struct1_T *rayGd, real_T tStep, const struct2_T *cnst, struct0_T *bundleOut);

/* End of code generation (pushBundleRectMulti.h) */
