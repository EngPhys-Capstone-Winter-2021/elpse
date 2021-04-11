/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rectInterp2d_mex.c
 *
 * Code generation for function '_coder_rectInterp2d_mex'
 *
 */

/* Include files */
#include "_coder_rectInterp2d_mex.h"
#include "_coder_rectInterp2d_api.h"
#include "rectInterp2d_data.h"
#include "rectInterp2d_initialize.h"
#include "rectInterp2d_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(&rectInterp2d_atexit);

  /* Module initialization. */
  rectInterp2d_initialize();

  /* Dispatch the entry-point. */
  rectInterp2d_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  rectInterp2d_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

void rectInterp2d_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T nrhs,
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
                        12, "rectInterp2d");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 12,
                        "rectInterp2d");
  }

  /* Call the function. */
  rectInterp2d_api(prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/* End of code generation (_coder_rectInterp2d_mex.c) */
