/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * propAlg_initialize.c
 *
 * Code generation for function 'propAlg_initialize'
 *
 */

/* Include files */
#include "propAlg_initialize.h"
#include "_coder_propAlg_api.h"
#include "_coder_propAlg_mex.h"
#include "propAlg_data.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static void propAlg_once(const emlrtStack *sp);

/* Function Definitions */
static void propAlg_once(const emlrtStack *sp)
{
  mex_InitInfAndNan();
  emlrtSetGlobalSyncFcn(sp, (void (*)(const void *))&emlrt_synchGlobalsToML);
}

void propAlg_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    propAlg_once(&st);
  }
}

/* End of code generation (propAlg_initialize.c) */
