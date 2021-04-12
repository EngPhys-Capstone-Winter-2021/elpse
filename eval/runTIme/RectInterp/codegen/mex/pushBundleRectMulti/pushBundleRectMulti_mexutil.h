/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRectMulti_mexutil.h
 *
 * Code generation for function 'pushBundleRectMulti_mexutil'
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
void emlrtFreeThreadStackData(const emlrtStack *sp);
pushBundleRectMultiTLS *emlrtGetThreadStackData(void);
void emlrtInitThreadStackData(const emlrtStack *sp);

/* End of code generation (pushBundleRectMulti_mexutil.h) */
