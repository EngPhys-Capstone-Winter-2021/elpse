/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pushBundleRect_mex.c
 *
 * Code generation for function '_coder_pushBundleRect_mex'
 *
 */

/* Include files */
#include "_coder_pushBundleRect_mex.h"
#include "_coder_pushBundleRect_api.h"
#include "pushBundleRect_data.h"
#include "pushBundleRect_initialize.h"
#include "pushBundleRect_terminate.h"
#include "pushBundleRect_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  pushBundleRectStackData *pushBundleRectStackDataGlobal = NULL;
  pushBundleRectStackDataGlobal = (pushBundleRectStackData *)emlrtMxCalloc(1,
    (size_t)1U * sizeof(pushBundleRectStackData));
  mexAtExit(&pushBundleRect_atexit);

  /* Module initialization. */
  pushBundleRect_initialize();

  /* Dispatch the entry-point. */
  pushBundleRect_mexFunction(pushBundleRectStackDataGlobal, nlhs, plhs, nrhs,
    prhs);

  /* Module termination. */
  pushBundleRect_terminate();
  emlrtMxFree(pushBundleRectStackDataGlobal);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

void pushBundleRect_mexFunction(pushBundleRectStackData *SD, int32_T nlhs,
  mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[3])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *outputs[1];
  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4,
                        14, "pushBundleRect");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "pushBundleRect");
  }

  /* Call the function. */
  pushBundleRect_api(SD, prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/* End of code generation (_coder_pushBundleRect_mex.c) */
