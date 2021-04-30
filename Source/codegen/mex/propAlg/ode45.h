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
#include "propAlg_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void b_ode45(const emlrtStack *sp, real_T ode_tunableEnvironment_f1, const
             real_T c_ode_tunableEnvironment_f2_dom[4], const emxArray_real_T
             *ode_tunableEnvironment_f2_zVal, const emxArray_real_T
             *ode_tunableEnvironment_f2_rVal, const emxArray_real_T
             *c_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *d_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *e_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *f_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *g_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *h_ode_tunableEnvironment_f2_gri, const real_T
             ode_tunableEnvironment_f3[6], const real_T
             ode_tunableEnvironment_f4[4], const real_T tspan[2], const real_T
             b_y0[4], emxArray_real_T *varargout_1, emxArray_real_T *varargout_2);
void ode45(const emlrtStack *sp, real_T ode_tunableEnvironment_f1, const real_T
           c_ode_tunableEnvironment_f2_dom[4], const emxArray_real_T
           *ode_tunableEnvironment_f2_zVal, const emxArray_real_T
           *ode_tunableEnvironment_f2_rVal, const emxArray_real_T
           *c_ode_tunableEnvironment_f2_gri, const emxArray_real_T
           *d_ode_tunableEnvironment_f2_gri, const emxArray_real_T
           *e_ode_tunableEnvironment_f2_gri, const real_T
           ode_tunableEnvironment_f3[6], const real_T ode_tunableEnvironment_f4
           [4], const real_T tspan[2], const real_T b_y0[4], emxArray_real_T
           *varargout_1, emxArray_real_T *varargout_2);

/* End of code generation (ode45.h) */
