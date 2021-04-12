/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rectInterp2d.h
 *
 * Code generation for function 'rectInterp2d'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T b_closest_val(const emlrtStack *sp, const real_T A[168], real_T val);
real_T closest_val(const emlrtStack *sp, const real_T A[323], real_T val);

/* End of code generation (rectInterp2d.h) */
