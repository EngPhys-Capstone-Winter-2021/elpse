/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loopRectInterp2d_terminate.c
 *
 * Code generation for function 'loopRectInterp2d_terminate'
 *
 */

/* Include files */
#include "loopRectInterp2d_terminate.h"
#include "_coder_loopRectInterp2d_mex.h"
#include "loopRectInterp2d_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void loopRectInterp2d_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void loopRectInterp2d_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (loopRectInterp2d_terminate.c) */
