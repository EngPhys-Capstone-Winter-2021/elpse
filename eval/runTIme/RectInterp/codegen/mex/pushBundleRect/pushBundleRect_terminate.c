/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRect_terminate.c
 *
 * Code generation for function 'pushBundleRect_terminate'
 *
 */

/* Include files */
#include "pushBundleRect_terminate.h"
#include "_coder_pushBundleRect_api.h"
#include "_coder_pushBundleRect_mex.h"
#include "pushBundleRect_data.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void pushBundleRect_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrt_synchGlobalsFromML(&st);
  emlrt_synchGlobalsToML(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void pushBundleRect_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (pushBundleRect_terminate.c) */
