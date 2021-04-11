/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRect_initialize.c
 *
 * Code generation for function 'pushBundleRect_initialize'
 *
 */

/* Include files */
#include "pushBundleRect_initialize.h"
#include "_coder_pushBundleRect_api.h"
#include "_coder_pushBundleRect_mex.h"
#include "pushBundleRect_data.h"
#include "pushBundleRect_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Declarations */
static void pushBundleRect_once(const emlrtStack *sp);

/* Function Definitions */
static void pushBundleRect_once(const emlrtStack *sp)
{
  mex_InitInfAndNan();
  cnst.c = 2.9979E+8;
  cnst.e = 1.6022E-19;
  cnst.eps0 = 8.8542E-12;
  cnst.mp = 1.6726E-27;
  cnst.pi = 3.1415926535897931;
  cnst.twopi = 6.2831853071795862;
  cnst.ln10 = 2.3025850929940459;
  cnst.cumps = 299.79;
  cnst.vTe1eV = 0.419;
  cnst.wpe = 56400.0;
  cnst.lamDebye = 743.0;
  cnst.vosc = 8.095E+8;
  cnst.voscToC = 0.027002234897761768;
  cnst.lambda0 = 3.51E-7;
  cnst.omega0 = 5.366484681593641E+15;
  cnst_dirty = 1U;
  emlrtSetGlobalSyncFcn(sp, (void (*)(const void *))&emlrt_synchGlobalsToML);
}

void pushBundleRect_initialize(void)
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
    pushBundleRect_once(&st);
  }
}

/* End of code generation (pushBundleRect_initialize.c) */
