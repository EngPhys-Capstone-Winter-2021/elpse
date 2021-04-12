/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * callODEFunctionNSM.h
 *
 * Code generation for function 'callODEFunctionNSM'
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
void callODEFunctionNSM(const emlrtStack *sp, real_T
  odeFcn_tunableEnvironment_f1, const real_T c_odeFcn_tunableEnvironment_f2_[4],
  const real_T d_odeFcn_tunableEnvironment_f2_[168], const real_T
  e_odeFcn_tunableEnvironment_f2_[323], const real_T
  f_odeFcn_tunableEnvironment_f2_[54264], const real_T
  g_odeFcn_tunableEnvironment_f2_[54264], const real_T
  h_odeFcn_tunableEnvironment_f2_[54264], const real_T
  odeFcn_tunableEnvironment_f3[4], const real_T y[4], real_T yp[4]);

/* End of code generation (callODEFunctionNSM.h) */
