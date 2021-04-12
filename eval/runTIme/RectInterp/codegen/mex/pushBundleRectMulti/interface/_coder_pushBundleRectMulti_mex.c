/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pushBundleRectMulti_mex.c
 *
 * Code generation for function '_coder_pushBundleRectMulti_mex'
 *
 */

/* Include files */
#include "_coder_pushBundleRectMulti_mex.h"
#include "_coder_pushBundleRectMulti_api.h"
#include "pushBundleRectMulti.h"
#include "pushBundleRectMulti_data.h"
#include "pushBundleRectMulti_initialize.h"
#include "pushBundleRectMulti_terminate.h"
#include "pushBundleRectMulti_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static jmp_buf emlrtJBEnviron;

/* Function Definitions */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  pushBundleRectMultiStackData *c_pushBundleRectMultiStackDataG = NULL;
  c_pushBundleRectMultiStackDataG = (pushBundleRectMultiStackData *)
    emlrtMxCalloc(1, (size_t)1U * sizeof(pushBundleRectMultiStackData));
  mexAtExit(&pushBundleRectMulti_atexit);
  emlrtLoadMATLABLibrary("sys/os/glnxa64/libiomp5.so");

  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&emlrtNestLockGlobal);

  /* Module initialization. */
  pushBundleRectMulti_initialize();
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Dispatch the entry-point. */
    pushBundleRectMulti_mexFunction(c_pushBundleRectMultiStackDataG, nlhs, plhs,
      nrhs, prhs);

    /* Module termination. */
    pushBundleRectMulti_terminate();
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&emlrtNestLockGlobal);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&emlrtNestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }

  emlrtMxFree(c_pushBundleRectMultiStackDataG);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                     &emlrtLockerFunction, omp_get_num_procs());
  return emlrtRootTLSGlobal;
}

void pushBundleRectMulti_mexFunction(pushBundleRectMultiStackData *SD, int32_T
  nlhs, mxArray *plhs[1], int32_T nrhs, const mxArray *prhs[4])
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
                        19, "pushBundleRectMulti");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "pushBundleRectMulti");
  }

  /* Call the function. */
  pushBundleRectMulti_api(SD, prhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

/* End of code generation (_coder_pushBundleRectMulti_mex.c) */
