/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * num2str.c
 *
 * Code generation for function 'num2str'
 *
 */

/* Include files */
#include "num2str.h"
#include "_coder_pushBundleRect_api.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 15, /* lineNo */
  "num2str",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/num2str.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 53,  /* lineNo */
  19,                                  /* colNo */
  "flt2str",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pName */
};

static emlrtRSInfo nb_emlrtRSI = { 53, /* lineNo */
  "flt2str",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/flt2str.m"/* pathName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[23]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[23]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[23]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[23])
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m, 2, pArrays, "sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a__output_of_sprintf_, const char_T *identifier, char_T y[23])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(a__output_of_sprintf_), &thisId, y);
  emlrtDestroyArray(&a__output_of_sprintf_);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[23])
{
  static const int32_T dims[2] = { 1, 23 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 23);
  emlrtDestroyArray(&src);
}

void num2str(const emlrtStack *sp, real_T x, char_T str[23])
{
  static const int32_T iv[2] = { 1, 7 };

  static const char_T rfmt[7] = { '%', '2', '3', '.', '1', '5', 'e' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *m1;
  const mxArray *m2;
  const mxArray *y;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  m = NULL;
  m1 = NULL;
  y = NULL;
  m2 = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&st, 7, m2, &rfmt[0]);
  emlrtAssign(&y, m2);
  emlrtAssign(&m, y);
  b_y = NULL;
  m2 = emlrtCreateDoubleScalar(x);
  emlrtAssign(&b_y, m2);
  emlrtAssign(&m1, b_y);
  emlrt_synchGlobalsToML(&st);
  b_st.site = &nb_emlrtRSI;
  emlrt_marshallIn(&b_st, b_sprintf(&b_st, emlrtAlias(m), emlrtAlias(m1),
    &b_emlrtMCI), "<output of sprintf>", str);
  emlrt_synchGlobalsFromML(&st);
  emlrtDestroyArray(&m);
  emlrtDestroyArray(&m1);
}

/* End of code generation (num2str.c) */
