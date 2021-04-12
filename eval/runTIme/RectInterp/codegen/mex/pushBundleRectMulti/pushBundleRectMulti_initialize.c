/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRectMulti_initialize.c
 *
 * Code generation for function 'pushBundleRectMulti_initialize'
 *
 */

/* Include files */
#include "pushBundleRectMulti_initialize.h"
#include "_coder_pushBundleRectMulti_mex.h"
#include "pushBundleRectMulti_data.h"
#include "pushBundleRectMulti_mexutil.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void pushBundleRectMulti_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mex_InitInfAndNan();
  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtInitThreadStackData(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (pushBundleRectMulti_initialize.c) */
