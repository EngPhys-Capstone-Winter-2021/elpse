/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_pushBundleRect_api.c
 *
 * Code generation for function '_coder_pushBundleRect_api'
 *
 */

/* Include files */
#include "_coder_pushBundleRect_api.h"
#include "pushBundleRect.h"
#include "pushBundleRect_data.h"
#include "pushBundleRect_emxutil.h"
#include "pushBundleRect_types.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo u_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_pushBundleRect_api",         /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T *
  u);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_cnst,
  const char_T *identifier, struct_T *y);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[2]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct_T *y);
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[7]);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2]);
static const mxArray *emlrt_marshallOut(const struct_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayBundle,
  const char_T *identifier, struct0_T *y);
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[54264]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y);
static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[2]);
static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[54264]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[7]);
static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[168]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2]);
static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[323]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_cell_wrap_0 *y);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayGd, const
  char_T *identifier, struct1_T *y);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[54264]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[54264]);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[168]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[323]);
static real_T w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tStep,
  const char_T *identifier);
static real_T y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T *
  u)
{
  static const int32_T iv1[2] = { 1, 2 };

  static const int32_T iv2[2] = { 1, 7 };

  static const int32_T iv3[2] = { 1, 2 };

  static const char_T *sv[10] = { "frequency", "nc", "name", "type", "mode",
    "nrays", "direction", "rayICs", "trajs", "halt" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 10, sv));
  emlrtSetFieldR2017b(y, 0, "frequency", c_emlrt_marshallOut(u->frequency), 0);
  emlrtSetFieldR2017b(y, 0, "nc", c_emlrt_marshallOut(u->nc), 1);
  b_y = NULL;
  iv[0] = u->name->size[0];
  iv[1] = u->name->size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, u->name->size[1], m, &u->name->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "name", b_y, 2);
  c_y = NULL;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(sp, 2, m, &u->type[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "type", c_y, 3);
  d_y = NULL;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(sp, 7, m, &u->mode[0]);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "mode", d_y, 4);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->nrays);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "nrays", e_y, 5);
  f_y = NULL;
  m = emlrtCreateNumericArray(2, &iv3[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  pData[0] = u->direction[0];
  pData[1] = u->direction[1];
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "direction", f_y, 6);
  g_y = NULL;
  iv[0] = u->rayICs->size[0];
  iv[1] = u->rayICs->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->rayICs->size[1]; b_i++) {
    pData[i] = u->rayICs->data[2 * b_i];
    i++;
    pData[i] = u->rayICs->data[2 * b_i + 1];
    i++;
  }

  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "rayICs", g_y, 7);
  h_y = NULL;
  emlrtAssign(&h_y, emlrtCreateCellArrayR2014a(2, *(int32_T (*)[2])u->
    trajs->size));
  for (i = 0; i < u->trajs->size[1]; i++) {
    i_y = NULL;
    iv[0] = u->trajs->data[i].f1->size[0];
    iv[1] = u->trajs->data[i].f1->size[1];
    m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m);
    i1 = 0;
    for (b_i = 0; b_i < u->trajs->data[i].f1->size[1]; b_i++) {
      for (c_i = 0; c_i < u->trajs->data[i].f1->size[0]; c_i++) {
        pData[i1] = u->trajs->data[i].f1->data[c_i + u->trajs->data[i].f1->size
          [0] * b_i];
        i1++;
      }
    }

    emlrtAssign(&i_y, m);
    emlrtSetCell(h_y, i, i_y);
  }

  emlrtSetFieldR2017b(y, 0, "trajs", h_y, 8);
  emlrtSetFieldR2017b(y, 0, "halt", c_emlrt_marshallOut(u->halt), 9);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims, &bv[0], iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *b_cnst,
  const char_T *identifier, struct_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(b_cnst), &thisId, y);
  emlrtDestroyArray(&b_cnst);
}

static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[2])
{
  static const int32_T dims[2] = { 1, 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 2);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[15] = { "c", "e", "eps0", "mp", "pi", "twopi",
    "ln10", "cumps", "vTe1eV", "wpe", "lamDebye", "vosc", "voscToC", "lambda0",
    "omega0" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 15, fieldNames, 0U, &dims);
  thisId.fIdentifier = "c";
  y->c = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "c")),
    &thisId);
  thisId.fIdentifier = "e";
  y->e = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "e")),
    &thisId);
  thisId.fIdentifier = "eps0";
  y->eps0 = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "eps0")), &thisId);
  thisId.fIdentifier = "mp";
  y->mp = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "mp")), &thisId);
  thisId.fIdentifier = "pi";
  y->pi = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "pi")), &thisId);
  thisId.fIdentifier = "twopi";
  y->twopi = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "twopi")), &thisId);
  thisId.fIdentifier = "ln10";
  y->ln10 = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "ln10")), &thisId);
  thisId.fIdentifier = "cumps";
  y->cumps = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7,
    "cumps")), &thisId);
  thisId.fIdentifier = "vTe1eV";
  y->vTe1eV = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8,
    "vTe1eV")), &thisId);
  thisId.fIdentifier = "wpe";
  y->wpe = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9,
    "wpe")), &thisId);
  thisId.fIdentifier = "lamDebye";
  y->lamDebye = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    10, "lamDebye")), &thisId);
  thisId.fIdentifier = "vosc";
  y->vosc = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11,
    "vosc")), &thisId);
  thisId.fIdentifier = "voscToC";
  y->voscToC = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    12, "voscToC")), &thisId);
  thisId.fIdentifier = "lambda0";
  y->lambda0 = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    13, "lambda0")), &thisId);
  thisId.fIdentifier = "omega0";
  y->omega0 = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14,
    "omega0")), &thisId);
  emlrtDestroyArray(&u);
}

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[7])
{
  static const int32_T dims[2] = { 1, 7 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, &ret[0], 7);
  emlrtDestroyArray(&src);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = y_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[2])
{
  static const int32_T dims[2] = { 1, 2 };

  real_T (*r)[2];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[2])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  emlrtDestroyArray(&src);
}

static const mxArray *emlrt_marshallOut(const struct_T *u)
{
  static const char_T *sv[15] = { "c", "e", "eps0", "mp", "pi", "twopi", "ln10",
    "cumps", "vTe1eV", "wpe", "lamDebye", "vosc", "voscToC", "lambda0", "omega0"
  };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 15, sv));
  b_y = NULL;
  m = emlrtCreateDoubleScalar(u->c);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "c", b_y, 0);
  c_y = NULL;
  m = emlrtCreateDoubleScalar(u->e);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "e", c_y, 1);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u->eps0);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "eps0", d_y, 2);
  e_y = NULL;
  m = emlrtCreateDoubleScalar(u->mp);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(y, 0, "mp", e_y, 3);
  f_y = NULL;
  m = emlrtCreateDoubleScalar(u->pi);
  emlrtAssign(&f_y, m);
  emlrtSetFieldR2017b(y, 0, "pi", f_y, 4);
  g_y = NULL;
  m = emlrtCreateDoubleScalar(u->twopi);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "twopi", g_y, 5);
  h_y = NULL;
  m = emlrtCreateDoubleScalar(u->ln10);
  emlrtAssign(&h_y, m);
  emlrtSetFieldR2017b(y, 0, "ln10", h_y, 6);
  i_y = NULL;
  m = emlrtCreateDoubleScalar(u->cumps);
  emlrtAssign(&i_y, m);
  emlrtSetFieldR2017b(y, 0, "cumps", i_y, 7);
  j_y = NULL;
  m = emlrtCreateDoubleScalar(u->vTe1eV);
  emlrtAssign(&j_y, m);
  emlrtSetFieldR2017b(y, 0, "vTe1eV", j_y, 8);
  k_y = NULL;
  m = emlrtCreateDoubleScalar(u->wpe);
  emlrtAssign(&k_y, m);
  emlrtSetFieldR2017b(y, 0, "wpe", k_y, 9);
  l_y = NULL;
  m = emlrtCreateDoubleScalar(u->lamDebye);
  emlrtAssign(&l_y, m);
  emlrtSetFieldR2017b(y, 0, "lamDebye", l_y, 10);
  m_y = NULL;
  m = emlrtCreateDoubleScalar(u->vosc);
  emlrtAssign(&m_y, m);
  emlrtSetFieldR2017b(y, 0, "vosc", m_y, 11);
  n_y = NULL;
  m = emlrtCreateDoubleScalar(u->voscToC);
  emlrtAssign(&n_y, m);
  emlrtSetFieldR2017b(y, 0, "voscToC", n_y, 12);
  o_y = NULL;
  m = emlrtCreateDoubleScalar(u->lambda0);
  emlrtAssign(&o_y, m);
  emlrtSetFieldR2017b(y, 0, "lambda0", o_y, 13);
  p_y = NULL;
  m = emlrtCreateDoubleScalar(u->omega0);
  emlrtAssign(&p_y, m);
  emlrtSetFieldR2017b(y, 0, "omega0", p_y, 14);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayBundle,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  g_emlrt_marshallIn(sp, emlrtAlias(rayBundle), &thisId, y);
  emlrtDestroyArray(&rayBundle);
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 2, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[10] = { "frequency", "nc", "name", "type",
    "mode", "nrays", "direction", "rayICs", "trajs", "halt" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 10, fieldNames, 0U, &dims);
  thisId.fIdentifier = "frequency";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "frequency")),
                     &thisId, y->frequency);
  thisId.fIdentifier = "nc";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "nc")),
                     &thisId, y->nc);
  thisId.fIdentifier = "name";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "name")),
                     &thisId, y->name);
  thisId.fIdentifier = "type";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "type")),
                     &thisId, y->type);
  thisId.fIdentifier = "mode";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "mode")),
                     &thisId, y->mode);
  thisId.fIdentifier = "nrays";
  y->nrays = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "nrays")), &thisId);
  thisId.fIdentifier = "direction";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6, "direction")),
                     &thisId, y->direction);
  thisId.fIdentifier = "rayICs";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7, "rayICs")),
                     &thisId, y->rayICs);
  thisId.fIdentifier = "trajs";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8, "trajs")),
                     &thisId, y->trajs);
  thisId.fIdentifier = "halt";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9, "halt")),
                     &thisId, y->halt);
  emlrtDestroyArray(&u);
}

static void gb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void hb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[54264])
{
  static const int32_T dims[2] = { 323, 168 };

  real_T (*r)[54264];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[54264])emlrtMxGetData(src);
  for (i = 0; i < 54264; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void ib_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[2] = { 1, 4 };

  real_T (*r)[4];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[4])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  ret[3] = (*r)[3];
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[2])
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void jb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[54264])
{
  static const int32_T dims[1] = { 54264 };

  real_T (*r)[54264];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[54264])emlrtMxGetData(src);
  for (i = 0; i < 54264; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[7])
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void kb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[168])
{
  static const int32_T dims[1] = { 168 };

  real_T (*r)[168];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[168])emlrtMxGetData(src);
  for (i = 0; i < 168; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[2])
{
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void lb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[323])
{
  static const int32_T dims[1] = { 323 };

  real_T (*r)[323];
  int32_T i;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims);
  r = (real_T (*)[323])emlrtMxGetData(src);
  for (i = 0; i < 323; i++) {
    ret[i] = (*r)[i];
  }

  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_cell_wrap_0 *y)
{
  static const boolean_T bv[2] = { false, true };

  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  int32_T sizes[2];
  int32_T i;
  char_T str[11];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  iv[0] = 1;
  iv[1] = -1;
  emlrtCheckVsCell(sp, parentId, u, 2U, iv, bv, sizes);
  i = y->size[0] * y->size[1];
  y->size[0] = sizes[0];
  y->size[1] = sizes[1];
  emxEnsureCapacity_cell_wrap_0(sp, y, i, (emlrtRTEInfo *)NULL);
  for (i = 0; i < sizes[1]; i++) {
    sprintf(&str[0], "%d", i + 1);
    thisId.fIdentifier = &str[0];
    o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, i)), &thisId,
                       y->data[i].f1);
  }

  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  gb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayGd, const
  char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  q_emlrt_marshallIn(sp, emlrtAlias(rayGd), &thisId, y);
  emlrtDestroyArray(&rayGd);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[26] = { "iTime", "time", "zSblock", "rSblock",
    "domain", "neblock", "valsNe", "valsDLogNedz", "valsDLogNedr", "teblock",
    "valsTe", "valsDLnTedz", "valsDLnTedr", "vzblock", "valsVz", "vrblock",
    "valsVr", "Zbarblock", "valsZbar", "Zsqrblock", "valsZsqr", "uniqueR",
    "uniqueZ", "grid", "gridR", "gridZ" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 26, fieldNames, 0U, &dims);
  thisId.fIdentifier = "iTime";
  y->iTime = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0,
    "iTime")), &thisId);
  thisId.fIdentifier = "time";
  y->time = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1,
    "time")), &thisId);
  thisId.fIdentifier = "zSblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "zSblock")),
                     &thisId, y->zSblock);
  thisId.fIdentifier = "rSblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "rSblock")),
                     &thisId, y->rSblock);
  thisId.fIdentifier = "domain";
  s_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "domain")),
                     &thisId, y->domain);
  thisId.fIdentifier = "neblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "neblock")),
                     &thisId, y->neblock);
  thisId.fIdentifier = "valsNe";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6, "valsNe")),
                     &thisId, y->valsNe);
  thisId.fIdentifier = "valsDLogNedz";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7,
    "valsDLogNedz")), &thisId, y->valsDLogNedz);
  thisId.fIdentifier = "valsDLogNedr";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8,
    "valsDLogNedr")), &thisId, y->valsDLogNedr);
  thisId.fIdentifier = "teblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9, "teblock")),
                     &thisId, y->teblock);
  thisId.fIdentifier = "valsTe";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 10, "valsTe")),
                     &thisId, y->valsTe);
  thisId.fIdentifier = "valsDLnTedz";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11,
    "valsDLnTedz")), &thisId, y->valsDLnTedz);
  thisId.fIdentifier = "valsDLnTedr";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 12,
    "valsDLnTedr")), &thisId, y->valsDLnTedr);
  thisId.fIdentifier = "vzblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 13, "vzblock")),
                     &thisId, y->vzblock);
  thisId.fIdentifier = "valsVz";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14, "valsVz")),
                     &thisId, y->valsVz);
  thisId.fIdentifier = "vrblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 15, "vrblock")),
                     &thisId, y->vrblock);
  thisId.fIdentifier = "valsVr";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 16, "valsVr")),
                     &thisId, y->valsVr);
  thisId.fIdentifier = "Zbarblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 17,
    "Zbarblock")), &thisId, y->Zbarblock);
  thisId.fIdentifier = "valsZbar";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 18, "valsZbar")),
                     &thisId, y->valsZbar);
  thisId.fIdentifier = "Zsqrblock";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 19,
    "Zsqrblock")), &thisId, y->Zsqrblock);
  thisId.fIdentifier = "valsZsqr";
  t_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 20, "valsZsqr")),
                     &thisId, y->valsZsqr);
  thisId.fIdentifier = "uniqueR";
  u_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 21, "uniqueR")),
                     &thisId, y->uniqueR);
  thisId.fIdentifier = "uniqueZ";
  v_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 22, "uniqueZ")),
                     &thisId, y->uniqueZ);
  thisId.fIdentifier = "grid";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 23, "grid")),
                     &thisId, y->grid);
  thisId.fIdentifier = "gridR";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 24, "gridR")),
                     &thisId, y->gridR);
  thisId.fIdentifier = "gridZ";
  r_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 25, "gridZ")),
                     &thisId, y->gridZ);
  emlrtDestroyArray(&u);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[54264])
{
  hb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  ib_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[54264])
{
  jb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[168])
{
  kb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[323])
{
  lb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tStep,
  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(sp, emlrtAlias(tStep), &thisId);
  emlrtDestroyArray(&tStep);
  return y;
}

static real_T y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void MEXGlobalSyncInFunction(const emlrtStack *sp)
{
  const mxArray *tmp;

  /* Marshall in global variables */
  tmp = emlrtGetGlobalVariable("cnst");
  if (tmp != NULL) {
    c_emlrt_marshallIn(sp, tmp, "cnst", &cnst);
    cnst_dirty = 0U;
  }
}

void MEXGlobalSyncOutFunction(boolean_T skipDirtyCheck)
{
  /* Marshall out global variables */
  if (skipDirtyCheck || (cnst_dirty != 0U)) {
    emlrtPutGlobalVariable("cnst", emlrt_marshallOut(&cnst));
  }
}

void emlrt_synchGlobalsFromML(const emlrtStack *sp)
{
  MEXGlobalSyncInFunction(sp);
  cnst_dirty = 0U;
}

void emlrt_synchGlobalsToML(const emlrtStack *sp)
{
  (void)sp;
  MEXGlobalSyncOutFunction(false);
}

void pushBundleRect_api(pushBundleRectStackData *SD, const mxArray * const prhs
  [3], const mxArray *plhs[1])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  struct0_T b_rayBundle;
  struct0_T bundleOut;
  struct0_T rayBundle;
  real_T tStep;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &rayBundle, &u_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &bundleOut, &u_emlrtRTEI, true);

  /* Marshall function inputs */
  f_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "rayBundle", &rayBundle);
  p_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "rayGd", &SD->f0.rayGd);
  tStep = w_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "tStep");

  /* Marshall in global variables */
  MEXGlobalSyncInFunction(&st);

  /* Invoke the target function */
  b_rayBundle = rayBundle;
  pushBundleRect(&st, &b_rayBundle, &SD->f0.rayGd, tStep, &bundleOut);

  /* Marshall out global variables */
  MEXGlobalSyncOutFunction(true);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, &bundleOut);
  emxFreeStruct_struct0_T(&bundleOut);
  emxFreeStruct_struct0_T(&rayBundle);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_pushBundleRect_api.c) */
