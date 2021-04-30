/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rectLocate.h
 *
 * Code generation for function 'rectLocate'
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
void rectLocate(const emlrtStack *sp, const real_T qp[2], const emxArray_real_T *
                dim1_val, const emxArray_real_T *dim2_val, real_T weights[4],
                real_T inds[8]);

/* End of code generation (rectLocate.h) */
