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
#include "rectInterp2d_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T rectInterp2d(const emlrtStack *sp, const real_T query[2], const
                    emxArray_real_T *dim1_val, const emxArray_real_T *dim2_val,
                    const emxArray_real_T *vGrid);

/* End of code generation (rectInterp2d.h) */
