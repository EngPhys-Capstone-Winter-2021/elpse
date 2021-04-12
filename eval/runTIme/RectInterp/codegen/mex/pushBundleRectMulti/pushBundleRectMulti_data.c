/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRectMulti_data.c
 *
 * Code generation for function 'pushBundleRectMulti_data'
 *
 */

/* Include files */
#include "pushBundleRectMulti_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
omp_lock_t emlrtLockGlobal;
omp_nest_lock_t emlrtNestLockGlobal;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131595U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "pushBundleRectMulti",               /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtBCInfo t_emlrtBCI = { 1,          /* iFirst */
  323,                                 /* iLast */
  2,                                   /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtBCInfo u_emlrtBCI = { 1,          /* iFirst */
  168,                                 /* iLast */
  2,                                   /* lineNo */
  24,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtBCInfo v_emlrtBCI = { 1,          /* iFirst */
  323,                                 /* iLast */
  3,                                   /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtBCInfo w_emlrtBCI = { 1,          /* iFirst */
  168,                                 /* iLast */
  4,                                   /* lineNo */
  22,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtBCInfo x_emlrtBCI = { 1,          /* iFirst */
  323,                                 /* iLast */
  5,                                   /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtBCInfo y_emlrtBCI = { 1,          /* iFirst */
  168,                                 /* iLast */
  5,                                   /* lineNo */
  24,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtBCInfo ab_emlrtBCI = { 1,         /* iFirst */
  323,                                 /* iLast */
  7,                                   /* lineNo */
  59,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtBCInfo bb_emlrtBCI = { 1,         /* iFirst */
  168,                                 /* iLast */
  9,                                   /* lineNo */
  34,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

emlrtRSInfo jb_emlrtRSI = { 2,         /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d.m"/* pathName */
};

emlrtRSInfo kb_emlrtRSI = { 3,         /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d.m"/* pathName */
};

/* End of code generation (pushBundleRectMulti_data.c) */
