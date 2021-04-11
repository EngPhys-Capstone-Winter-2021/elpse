/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRect.h
 *
 * Code generation for function 'pushBundleRect'
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
void anon(const emlrtStack *sp, real_T omega_ps, const real_T rayGd_domain[4],
          const real_T rayGd_uniqueR[168], const real_T rayGd_uniqueZ[323],
          const real_T rayGd_grid[54264], const real_T rayGd_gridR[54264], const
          real_T rayGd_gridZ[54264], const real_T y[4], real_T varargout_1[4]);
void emlrt_checkEscapedGlobals(void);
void pushBundleRect(const emlrtStack *sp, struct0_T *rayBundle, const struct1_T *
                    rayGd, real_T tStep, struct0_T *bundleOut);

/* End of code generation (pushBundleRect.h) */
