/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ode45.h
 *
 * Code generation for function 'ode45'
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
void ode45(const emlrtStack *sp, real_T ode_tunableEnvironment_f1, const real_T
           c_ode_tunableEnvironment_f2_dom[4], const real_T
           c_ode_tunableEnvironment_f2_uni[168], const real_T
           d_ode_tunableEnvironment_f2_uni[323], const real_T
           ode_tunableEnvironment_f2_grid[54264], const real_T
           ode_tunableEnvironment_f2_gridR[54264], const real_T
           ode_tunableEnvironment_f2_gridZ[54264], const real_T
           ode_tunableEnvironment_f3[4], const real_T tspan[2], const real_T
           b_y0[4], emxArray_real_T *varargout_1, emxArray_real_T *varargout_2);

/* End of code generation (ode45.h) */
