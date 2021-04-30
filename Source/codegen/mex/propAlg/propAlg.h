/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * propAlg.h
 *
 * Code generation for function 'propAlg'
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
void anon(const emlrtStack *sp, real_T omega_ps, const real_T rayGd_domain[4],
          const emxArray_real_T *rayGd_zVal, const emxArray_real_T *rayGd_rVal,
          const emxArray_real_T *rayGd_gridNe, const emxArray_real_T
          *rayGd_gridDLogNedz, const emxArray_real_T *rayGd_gridDLogNedr, const
          real_T cnstVar[6], const real_T margin[4], const real_T y[4], real_T
          varargout_1[4]);
void b_anon(const emlrtStack *sp, real_T omega_ps, const real_T rayGd_domain[4],
            const emxArray_real_T *rayGd_zVal, const emxArray_real_T *rayGd_rVal,
            const emxArray_real_T *rayGd_gridNe, const emxArray_real_T
            *rayGd_gridDLogNedz, const emxArray_real_T *rayGd_gridDLogNedr,
            const emxArray_real_T *rayGd_gridTe, const emxArray_real_T
            *rayGd_gridDLnTedr, const emxArray_real_T *rayGd_gridDLnTedz, const
            real_T cnstVar[6], const real_T margin[4], const real_T y[4], real_T
            varargout_1[4]);
void propAlg(const emlrtStack *sp, struct0_T *rayBundle, const struct1_T *rayGd,
             real_T tStep, const real_T margin[4], real_T npts, const struct2_T *
             cnst);

/* End of code generation (propAlg.h) */
