/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loopRectInterp2d.h
 *
 * Code generation for function 'loopRectInterp2d'
 *
 */

#pragma once

/* Include files */
#include "loopRectInterp2d_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void loopRectInterp2d(const emlrtStack *sp, const emxArray_real_T *PqList, const
                      emxArray_real_T *Z, const emxArray_real_T *R, const
                      emxArray_real_T *V, emxArray_real_T *VqLin);

/* End of code generation (loopRectInterp2d.h) */
