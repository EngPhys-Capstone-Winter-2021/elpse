/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_loopRectInterp2d_mex.c
 *
 * Code generation for function '_coder_loopRectInterp2d_mex'
 *
 */

/* Include files */
#include "_coder_loopRectInterp2d_mex.h"
#include "_coder_loopRectInterp2d_api.h"
#include "loopRectInterp2d_data.h"
#include "loopRectInterp2d_initialize.h"
#include "loopRectInterp2d_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void loopRectInterp2d_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
  const mxArray *prhs[4])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[1];
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        16, "loopRectInterp2d");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "loopRectInterp2d");
  }

  /* Call the function. */
  loopRectInterp2d_api(prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&loopRectInterp2d_atexit);

  /* Module initialization. */
  loopRectInterp2d_initialize();

  /* Dispatch the entry-point. */
  loopRectInterp2d_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  loopRectInterp2d_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_loopRectInterp2d_mex.c) */
