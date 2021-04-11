/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "error.h"
#include "_coder_pushBundleRect_api.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 27,    /* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/lang/error.m"/* pName */
};

static emlrtRSInfo mb_emlrtRSI = { 27, /* lineNo */
  "error",                             /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/lang/error.m"/* pathName */
};

/* Function Declarations */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void error(const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 48 };

  static const char_T varargin_1[48] = { 'C', 'u', 'r', 'r', 'e', 'n', 't', 'l',
    'y', ' ', 'n', 'e', 'w', ' ', 't', 'r', 'a', 'j', 'e', 'c', 't', 'o', 'r',
    'i', 'e', 's', ' ', 'a', 'r', 'e', ' ', 'f', 'o', 'r', ' ', 'E', 'M', ' ',
    'w', 'a', 'v', 'e', 's', ' ', 'o', 'n', 'l', 'y' };

  emlrtStack st;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  m = NULL;
  y = NULL;
  m1 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, 48, m1, &varargin_1[0]);
  emlrtAssign(&y, m1);
  emlrtAssign(&m, y);
  emlrt_synchGlobalsToML(sp);
  st.site = &mb_emlrtRSI;
  b_error(&st, emlrtAlias(m), &emlrtMCI);
  emlrt_synchGlobalsFromML(sp);
  emlrtDestroyArray(&m);
}

/* End of code generation (error.c) */
