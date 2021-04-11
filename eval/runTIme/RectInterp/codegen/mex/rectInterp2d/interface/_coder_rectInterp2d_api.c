/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rectInterp2d_api.c
 *
 * Code generation for function '_coder_rectInterp2d_api'
 *
 */

/* Include files */
#include "_coder_rectInterp2d_api.h"
#include "rectInterp2d.h"
#include "rectInterp2d_data.h"
#include "rectInterp2d_emxutil.h"
#include "rectInterp2d_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 1,   /* lineNo */
  1,                                   /* colNo */
  "_coder_rectInterp2d_api",           /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2];
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dim1_val,
  const char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *vGrid, const
  char_T *identifier, emxArray_real_T *y);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *query,
  const char_T *identifier))[2];
static const mxArray *emlrt_marshallOut(const real_T u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[2]
{
  real_T (*y)[2];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *dim1_val,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(dim1_val), &thisId, y);
  emlrtDestroyArray(&dim1_val);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *vGrid, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(vGrid), &thisId, y);
  emlrtDestroyArray(&vGrid);
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *query,
  const char_T *identifier))[2]
{
  emlrtMsgIdentifier thisId;
  real_T (*y)[2];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(query), &thisId);
  emlrtDestroyArray(&query);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  static const int32_T dims[2] = { 1, 2 };

  real_T (*ret)[2];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  int32_T iv[1];
  int32_T i;
  const boolean_T bv[1] = { true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv[0],
    iv);
  ret->allocatedSize = iv[0];
  i = ret->size[0];
  ret->size[0] = iv[0];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  ret->allocatedSize = iv[0] * iv[1];
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void rectInterp2d_api(const mxArray * const prhs[4], const mxArray *plhs[1])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  emxArray_real_T *dim1_val;
  emxArray_real_T *dim2_val;
  emxArray_real_T *vGrid;
  real_T (*query)[2];
  real_T interpVal;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &dim1_val, 1, &emlrtRTEI, true);
  emxInit_real_T(&st, &dim2_val, 1, &emlrtRTEI, true);
  emxInit_real_T(&st, &vGrid, 2, &emlrtRTEI, true);

  /* Marshall function inputs */
  query = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "query");
  dim1_val->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "dim1_val", dim1_val);
  dim2_val->canFreeData = false;
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "dim2_val", dim2_val);
  vGrid->canFreeData = false;
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "vGrid", vGrid);

  /* Invoke the target function */
  interpVal = rectInterp2d(&st, *query, dim1_val, dim2_val, vGrid);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(interpVal);
  emxFree_real_T(&vGrid);
  emxFree_real_T(&dim2_val);
  emxFree_real_T(&dim1_val);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_rectInterp2d_api.c) */
