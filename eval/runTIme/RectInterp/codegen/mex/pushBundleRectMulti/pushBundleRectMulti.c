/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRectMulti.c
 *
 * Code generation for function 'pushBundleRectMulti'
 *
 */

/* Include files */
#include "pushBundleRectMulti.h"
#include "ode45.h"
#include "pushBundleRectMulti_data.h"
#include "pushBundleRectMulti_emxutil.h"
#include "pushBundleRectMulti_mexutil.h"
#include "pushBundleRectMulti_types.h"
#include "rectInterp2d.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 55,    /* lineNo */
  "pushBundleRectMulti",               /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 68,  /* lineNo */
  "pushBundleRectMulti",               /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 119, /* lineNo */
  "pushBundleRectMulti",               /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 126, /* lineNo */
  "pushBundleRectMulti",               /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 130, /* lineNo */
  "pushBundleRectMulti",               /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 148, /* lineNo */
  "pushBundleRectMulti",               /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 191, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 194, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 27, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 102,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 283,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  40,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  37,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  42,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  50,                                  /* colNo */
  "rayBundle_trajs{rayIdx}",           /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  48,                                  /* colNo */
  "rayBundle_trajs{rayIdx}",           /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  135,                                 /* lineNo */
  37,                                  /* colNo */
  "yr",                                /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  27,                                  /* colNo */
  "lastInfo",                          /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  74,                                  /* lineNo */
  45,                                  /* colNo */
  "rayBundle_trajs{rayIdx}",           /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  38,                                  /* colNo */
  "rayBundle_rayICs",                  /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  63,                                  /* lineNo */
  13,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  55,                                  /* lineNo */
  24,                                  /* colNo */
  "rayBundle_halt",                    /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 50,/* lineNo */
  18,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 50,    /* lineNo */
  20,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  30,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  24,                                  /* colNo */
  "rayBundle_frequency",               /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  14,                                  /* colNo */
  "rayBundle_halt",                    /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  144,                                 /* lineNo */
  14,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  148,                                 /* lineNo */
  14,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  75,                                  /* lineNo */
  24,                                  /* colNo */
  "lastInfo",                          /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  76,                                  /* lineNo */
  24,                                  /* colNo */
  "lastInfo",                          /* aName */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  182,                                 /* lineNo */
  34,                                  /* colNo */
  "rayBundle_frequency",               /* aName */
  "toDispSurface",                     /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  193,                                 /* lineNo */
  24,                                  /* colNo */
  "rayBundle_nc",                      /* aName */
  "toDispSurface",                     /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo g_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 162,/* lineNo */
  2,                                   /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 130,/* lineNo */
  10,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 144,/* lineNo */
  14,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 147,/* lineNo */
  24,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 148,/* lineNo */
  14,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 119,/* lineNo */
  18,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 119,/* lineNo */
  15,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 147,/* lineNo */
  14,                                  /* colNo */
  "pushBundleRectMulti",               /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pName */
};

/* Function Declarations */
static void toDispSurface(const emlrtStack *sp, const real_T x0[2], const
  emxArray_real_T *rayBundle_nc, real_T rayIdx, const real_T rayGd_uniqueR[168],
  const real_T rayGd_uniqueZ[323], const real_T rayGd_grid[54264], const
  emxArray_real_T *rayBundle_frequency, const real_T rayBundle_direction[2],
  const real_T cnstVar[4], real_T k0[2]);

/* Function Definitions */
static void toDispSurface(const emlrtStack *sp, const real_T x0[2], const
  emxArray_real_T *rayBundle_nc, real_T rayIdx, const real_T rayGd_uniqueR[168],
  const real_T rayGd_uniqueZ[323], const real_T rayGd_grid[54264], const
  emxArray_real_T *rayBundle_frequency, const real_T rayBundle_direction[2],
  const real_T cnstVar[4], real_T k0[2])
{
  emlrtStack st;
  real_T b_x_tmp;
  real_T c_x_tmp;
  real_T d_x_tmp;
  real_T f_x_tmp;
  real_T ind1;
  real_T ind2;
  int32_T e_x_tmp;
  int32_T x_tmp;
  st.prev = sp;
  st.tls = sp->tls;

  /*   */
  /*  Local functions follow: */
  /*  */
  /*  TODISPSURFACE - to do later */
  /*     */
  /*  TO DO: need this function to work on EPW also */
  /* global cnst */
  /* .c; */
  /*  get magnitude of local wavevector */
  if (((int32_T)rayIdx < 1) || ((int32_T)rayIdx > rayBundle_frequency->size[1]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)rayIdx, 1, rayBundle_frequency->size
      [1], &r_emlrtBCI, sp);
  }

  /*  1/s */
  /*  TO DO: need to deal with the case that rayBundle_frequency */
  /*  is a row vector */
  /*  */
  /*  1/ps */
  /*  we assume light - need to fix to be more general */
  /*     we can use rayBundle_type for this... */
  /*  1/um */
  st.site = &jb_emlrtRSI;
  ind1 = closest_val(&st, rayGd_uniqueZ, x0[0]);
  st.site = &kb_emlrtRSI;
  ind2 = b_closest_val(&st, rayGd_uniqueR, x0[1]);
  st.site = &g_emlrtRSI;
  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &t_emlrtBCI,
      &st);
  }

  if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &u_emlrtBCI, &st);
  }

  if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &v_emlrtBCI, &st);
  }

  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &w_emlrtBCI,
      &st);
  }

  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &x_emlrtBCI,
      &st);
  }

  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &y_emlrtBCI,
      &st);
  }

  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &ab_emlrtBCI,
      &st);
  }

  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &bb_emlrtBCI,
      &st);
  }

  /* interpOnTraj('valsNe',[x0 x0],rayGd); */
  if (((int32_T)rayIdx < 1) || ((int32_T)rayIdx > rayBundle_nc->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)rayIdx, 1, rayBundle_nc->size[1],
      &s_emlrtBCI, sp);
  }

  /*  1/cm3 */
  st.site = &i_emlrtRSI;
  x_tmp = 323 * ((int32_T)ind2 - 1);
  b_x_tmp = rayGd_uniqueZ[(int32_T)ind1 - 1];
  c_x_tmp = rayGd_uniqueZ[(int32_T)(ind1 - 1.0) - 1];
  d_x_tmp = b_x_tmp - x0[0];
  e_x_tmp = 323 * ((int32_T)(ind2 - 1.0) - 1);
  f_x_tmp = x0[0] - c_x_tmp;
  b_x_tmp -= c_x_tmp;
  c_x_tmp = rayGd_uniqueR[(int32_T)ind2 - 1];
  ind2 = rayGd_uniqueR[(int32_T)(ind2 - 1.0) - 1];
  ind2 = 1.0 - muDoubleScalarPower(10.0, ((rayGd_grid[((int32_T)(ind1 - 1.0) +
    x_tmp) - 1] * d_x_tmp + rayGd_grid[((int32_T)ind1 + x_tmp) - 1] * f_x_tmp) /
    b_x_tmp * (x0[1] - ind2) + (rayGd_grid[((int32_T)(ind1 - 1.0) + e_x_tmp) - 1]
    * d_x_tmp + rayGd_grid[((int32_T)ind1 + e_x_tmp) - 1] * f_x_tmp) / b_x_tmp *
    (c_x_tmp - x0[1])) / (c_x_tmp - ind2)) / rayBundle_nc->data[(int32_T)rayIdx
    - 1];
  if (ind2 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &g_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  ind2 = muDoubleScalarSqrt(ind2);
  ind2 *= 1.0E-6 * muDoubleScalarAbs(rayBundle_frequency->data[(int32_T)rayIdx -
    1]) / cnstVar[0];

  /*  local wavenumber in */
  /*  1/um */
  /*  initial direction */
  /*  (unit row vector) */
  k0[0] = ind2 * rayBundle_direction[0];
  k0[1] = ind2 * rayBundle_direction[1];

  /*  initial k (row) vector */
  /*  (1/um) */
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

boolean_T inDomain(const real_T x[2], const real_T rayGd_domain[4])
{
  /*  given a column vector of positions x, return a list */
  /*  of logicals showing if they are in the domain (given by rayGd) */
  /*  or not */
  /*     */
  /*  margin in zmin zmaz rmin rmax (um) */
  /*  could write as zmin = (rayGd.domain+margin)(1) */
  return (x[1] < rayGd_domain[3]) && (x[1] > rayGd_domain[2]) && ((x[0] <
    rayGd_domain[1]) && (x[0] > rayGd_domain[0]));
}

void pushBundleRectMulti(const emlrtStack *sp, struct0_T *rayBundle, const
  struct1_T *rayGd, real_T tStep, const struct2_T *cnst, struct0_T *bundleOut)
{
  static const char_T cv[2] = { 'E', 'M' };

  jmp_buf b_emlrtJBEnviron;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *newTraj;
  emxArray_real_T *oldTraj;
  emxArray_real_T *tr;
  emxArray_real_T *yr;
  pushBundleRectMultiTLS *pushBundleRectMultiTLSThread;
  real_T d_this_tunableEnvironment_f2_un[323];
  real_T c_this_tunableEnvironment_f2_un[168];
  real_T c_this_tunableEnvironment_f2_do[4];
  real_T cnstVar[4];
  real_T ray0[4];
  real_T k0[2];
  real_T tSpan[2];
  real_T x0[2];
  real_T omega_ps;
  real_T rayBundle_nrays;
  real_T tPrev;
  real_T tStop;
  int32_T result[2];
  int32_T b_rayBundle;
  int32_T b_result;
  int32_T exitg2;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T rayIdx;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int32_T ub_loop;
  int8_T i2;
  boolean_T x[2];
  boolean_T emlrtHadParallelError = false;
  boolean_T exitg1;
  boolean_T trajIsNew;
  boolean_T withinMargin;
  pushBundleRectMultiTLSThread = emlrtGetThreadStackData();
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*   */
  /*  First cut at developing a ray integrator for EM and other waves: */
  /*  (JFM May 28, 2020) */
  /*  */
  /*  Perhaps trajIsNew should be replaced with pushFromBoundary? This */
  /*   might help with the problems associated with integrating  */
  /*   trajectories that could potentially leave the domain, and */
  /*   where we currently have problems with "margin" (JFM 21 July, 2020). */
  /* rayGd.grid */
  /* rayGd.uniqueR */
  /* rayGd.uniqueZ */
  /* path(path,'../../../Source') */
  /* cnst = initC; */
  /* if ~exist('cnst','var') */
  /*     cnst = initCnst;              % will put more things in initCnst... */
  /* end */
  /* if ~exist('margin','var') */
  /*  margin around domain in microns */
  /* end */
  /* if ~exist('npts','var') */
  /*  points to use in str line check */
  /* end */
  /*  */
  /*  Integrate all the rays in the bundle one at a time */
  /*  */
  /*  speed of light in microns/ps */
  cnstVar[0] = cnst->c;
  cnstVar[1] = cnst->c * 1.0E-6;
  cnstVar[2] = cnst->ln10;
  cnstVar[3] = cnst->twopi;
  rayBundle_nrays = rayBundle->nrays;
  if (rayBundle->nrays != (int32_T)muDoubleScalarFloor(rayBundle->nrays)) {
    emlrtIntegerCheckR2012b(rayBundle->nrays, &emlrtDCI, sp);
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, rayBundle->nrays, mxDOUBLE_CLASS,
    (int32_T)rayBundle->nrays, &f_emlrtRTEI, sp);
  ub_loop = (int32_T)rayBundle->nrays - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(pushBundleRectMultiTLSThread,newTraj,oldTraj,tr,yr,withinMargin,ray0,tSpan,tStop,omega_ps,trajIsNew,tPrev,k0,x0,b_emlrtJBEnviron,d_st,i,rayIdx,result,x,sizes_idx_1,exitg1,exitg2,c_this_tunableEnvironment_f2_do,c_this_tunableEnvironment_f2_un,d_this_tunableEnvironment_f2_un,b_result,i2,loop_ub,i1,b_rayBundle,sizes_idx_0) \
 firstprivate(st,b_st,c_st,emlrtHadParallelError)

  {
    if (setjmp(b_emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &b_emlrtJBEnviron);
      b_st.prev = &st;
      b_st.tls = st.tls;
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      pushBundleRectMultiTLSThread = emlrtGetThreadStackData();
      emxInit_real_T(&st, &newTraj, 2, &m_emlrtRTEI, true);
      emxInit_real_T(&st, &oldTraj, 2, &s_emlrtRTEI, true);
      emxInit_real_T(&st, &tr, 1, &r_emlrtRTEI, true);
      emxInit_real_T(&st, &yr, 2, &q_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (rayIdx = 0; rayIdx <= ub_loop; rayIdx++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(b_emlrtJBEnviron) == 0) {
        /* x0 = rayBundle_rayICs(:,1)'; */
        /* addAttachedFiles(gcp,'pushBundleRectMulti.m'); */
        x0[0] = 0.0;
        k0[0] = 0.0;
        x0[1] = 0.0;
        k0[1] = 0.0;
        tPrev = 0.0;

        /*  check to see if we need to move this ray */
        i = rayIdx + 1;
        if ((i < 1) || (i > rayBundle->halt->size[1])) {
          emlrtDynamicBoundsCheckR2012b(i, 1, rayBundle->halt->size[1],
            &j_emlrtBCI, &st);
        }

        b_st.site = &emlrtRSI;
        if (muDoubleScalarIsNaN(rayBundle->halt->data[rayIdx])) {
          emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI,
            "MATLAB:nologicalnan", "MATLAB:nologicalnan", 0);
        }

        if (!(rayBundle->halt->data[rayIdx] != 0.0)) {
          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &c_emlrtBCI, &st);
          }

          trajIsNew = ((rayBundle->trajs->data[rayIdx].f1->size[0] == 0) ||
                       (rayBundle->trajs->data[rayIdx].f1->size[1] == 0));
          if (trajIsNew) {
            /*  need IC's for trajectory */
            result[0] = 1;
            result[1] = 2;
            emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])rayBundle->type->size,
              result, &emlrtECI, &st);
            x[0] = (rayBundle->type->data[0] == 'E');
            x[1] = (rayBundle->type->data[1] == 'M');
            withinMargin = true;
            sizes_idx_1 = 0;
            exitg1 = false;
            while ((!exitg1) && (sizes_idx_1 < 2)) {
              if (!x[sizes_idx_1]) {
                withinMargin = false;
                exitg1 = true;
              } else {
                sizes_idx_1++;
              }
            }

            if (withinMargin) {
              if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->rayICs->size[1]))
              {
                emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->
                  rayICs->size[1], &i_emlrtBCI, &st);
              }

              x0[0] = rayBundle->rayICs->data[2 * rayIdx];
              x0[1] = rayBundle->rayICs->data[2 * rayIdx + 1];

              /*  modify arguments to "toDispSurface()" to only what is */
              /*  needed */
              /*  */
              b_st.site = &b_emlrtRSI;
              toDispSurface(&b_st, *(real_T (*)[2])&rayBundle->rayICs->data[2 *
                            rayIdx], rayBundle->nc, (real_T)rayIdx + 1.0,
                            rayGd->uniqueR, rayGd->uniqueZ, rayGd->grid,
                            rayBundle->frequency, rayBundle->direction, cnstVar,
                            k0);

              /*  start from t=0 */
              /* else */
              /* error('Currently new trajectories are for EM waves only') */
            }
          } else {
            if (rayIdx > rayBundle->trajs->size[1] - 1) {
              emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1]
                - 1, &b_emlrtBCI, &st);
            }

            i = rayBundle->trajs->data[rayIdx].f1->size[0];
            i1 = rayBundle->trajs->data[rayIdx].f1->size[0];
            if ((i1 < 1) || (i1 > i)) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, i, &h_emlrtBCI, &st);
            }

            /*  use the last time info */
            i = rayBundle->trajs->data[rayIdx].f1->size[1];
            if (2 > i) {
              emlrtDynamicBoundsCheckR2012b(2, 1, i, &p_emlrtBCI, &st);
            }

            x0[0] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
              trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
              f1->size[0]) - 1];
            i = rayBundle->trajs->data[rayIdx].f1->size[1];
            if (3 > i) {
              emlrtDynamicBoundsCheckR2012b(3, 1, i, &p_emlrtBCI, &st);
            }

            x0[1] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
              trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
              f1->size[0] * 2) - 1];

            /*  position row vector */
            i = rayBundle->trajs->data[rayIdx].f1->size[1];
            if (4 > i) {
              emlrtDynamicBoundsCheckR2012b(4, 1, i, &q_emlrtBCI, &st);
            }

            k0[0] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
              trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
              f1->size[0] * 3) - 1];
            i = rayBundle->trajs->data[rayIdx].f1->size[1];
            if (5 > i) {
              emlrtDynamicBoundsCheckR2012b(5, 1, i, &q_emlrtBCI, &st);
            }

            k0[1] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
              trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
              f1->size[0] * 4) - 1];

            /*  wave vector row vector */
            i = rayBundle->trajs->data[rayIdx].f1->size[1];
            if (1 > i) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i, &g_emlrtBCI, &st);
            }

            tPrev = rayBundle->trajs->data[rayIdx].f1->data[rayBundle->
              trajs->data[rayIdx].f1->size[0] - 1];
          }

          /*  TO DO: deal with the case where rayBundle_frequency is a row vector */
          /*  */
          if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->frequency->size[1]))
          {
            emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->
              frequency->size[1], &l_emlrtBCI, &st);
          }

          omega_ps = 1.0E-12 * rayBundle->frequency->data[rayIdx];

          /*  see which direction we're going */
          tStop = tPrev + tStep;
          tSpan[0] = tPrev;
          tSpan[1] = tStop;
          ray0[0] = x0[0];
          ray0[2] = k0[0];
          ray0[1] = x0[1];
          ray0[3] = k0[1];

          /*  initial condition (column vector) */
          /*  in phase space for ode integrator */
          /*  $$$      % Check to see if we could fall outside of the interpolation */
          /*  $$$      % domain... */
          /*  $$$      % need to pass the wave type to odeStrLine (i.e., for EPW) */
          /*  $$$      % */
          /*  $$$      [tTest,yTest] = odeStrLine(tSpan,ray0,npts,dirn,waveType,rayGd); */
          /*  $$$  */
          /*  $$$      if trajIsNew */
          /*  $$$          indom = inDomain(yTest(:,1:2),rayGd);  % column vec of */
          /*  $$$                                                 % logicals */
          /*  $$$      else */
          /*  $$$          indom = inDomain(yTest(:,1:2),rayGd,[10 10 10 10]);   */
          /*  $$$      end */
          /*  $$$       */
          /*  $$$      badIdxs = find(~indom); */
          /*  $$$       */
          /*  $$$      % update upper time limit if necessary */
          /*  $$$      if any(badIdxs) */
          /*  $$$          dts = diff(tSpan)/npts; */
          /*  $$$          badTimes = tTest(badIdxs); */
          /*  $$$          tStop = max(tPrev,badTimes(1)-dts);  % happens if all */
          /*  $$$                                               % times are bad  */
          /*  $$$          tSpan = [tPrev,tStop]; % adjust upper limit */
          /*  $$$      end */
          /*  Provided we have a good integration time we can integrate */
          /*  over the given time span and see what it looks like */
          /*  */
          if (tStop > tPrev) {
            withinMargin = false;
            if (rayBundle->type->size[1] == 2) {
              sizes_idx_1 = 0;
              do {
                exitg2 = 0;
                if (sizes_idx_1 < 2) {
                  if (rayBundle->type->data[sizes_idx_1] != cv[sizes_idx_1]) {
                    exitg2 = 1;
                  } else {
                    sizes_idx_1++;
                  }
                } else {
                  withinMargin = true;
                  exitg2 = 1;
                }
              } while (exitg2 == 0);
            }

            if (withinMargin) {
              sizes_idx_1 = 0;
            } else {
              sizes_idx_1 = -1;
            }

            switch (sizes_idx_1) {
             case 0:
              c_this_tunableEnvironment_f2_do[0] = rayGd->domain[0];
              c_this_tunableEnvironment_f2_do[1] = rayGd->domain[1];
              c_this_tunableEnvironment_f2_do[2] = rayGd->domain[2];
              c_this_tunableEnvironment_f2_do[3] = rayGd->domain[3];
              memcpy(&c_this_tunableEnvironment_f2_un[0], &rayGd->uniqueR[0],
                     168U * sizeof(real_T));
              memcpy(&d_this_tunableEnvironment_f2_un[0], &rayGd->uniqueZ[0],
                     323U * sizeof(real_T));
              memcpy
                (&pushBundleRectMultiTLSThread->f0.this_tunableEnvironment_f2_grid
                 [0], &rayGd->grid[0], 54264U * sizeof(real_T));
              memcpy
                (&pushBundleRectMultiTLSThread->f0.b_this_tunableEnvironment_f2_gr
                 [0], &rayGd->gridR[0], 54264U * sizeof(real_T));
              memcpy
                (&pushBundleRectMultiTLSThread->f0.c_this_tunableEnvironment_f2_gr
                 [0], &rayGd->gridZ[0], 54264U * sizeof(real_T));
              b_st.site = &c_emlrtRSI;
              ode45(&b_st, omega_ps, c_this_tunableEnvironment_f2_do,
                    c_this_tunableEnvironment_f2_un,
                    d_this_tunableEnvironment_f2_un,
                    pushBundleRectMultiTLSThread->f0.this_tunableEnvironment_f2_grid,
                    pushBundleRectMultiTLSThread->f0.b_this_tunableEnvironment_f2_gr,
                    pushBundleRectMultiTLSThread->f0.c_this_tunableEnvironment_f2_gr,
                    cnstVar, tSpan, ray0, tr, yr);

              /* case 'EPW' */
              /*   [tr,yr] = ode45(@(t,y) odeLwRayFun(t,y,omega_ps, ... */
              /*                                      rayGd),tSpan,ray0);            */
              break;

             default:
              /* placeholder */
              c_this_tunableEnvironment_f2_do[0] = rayGd->domain[0];
              c_this_tunableEnvironment_f2_do[1] = rayGd->domain[1];
              c_this_tunableEnvironment_f2_do[2] = rayGd->domain[2];
              c_this_tunableEnvironment_f2_do[3] = rayGd->domain[3];
              memcpy(&c_this_tunableEnvironment_f2_un[0], &rayGd->uniqueR[0],
                     168U * sizeof(real_T));
              memcpy(&d_this_tunableEnvironment_f2_un[0], &rayGd->uniqueZ[0],
                     323U * sizeof(real_T));
              memcpy
                (&pushBundleRectMultiTLSThread->f0.this_tunableEnvironment_f2_grid
                 [0], &rayGd->grid[0], 54264U * sizeof(real_T));
              memcpy
                (&pushBundleRectMultiTLSThread->f0.b_this_tunableEnvironment_f2_gr
                 [0], &rayGd->gridR[0], 54264U * sizeof(real_T));
              memcpy
                (&pushBundleRectMultiTLSThread->f0.c_this_tunableEnvironment_f2_gr
                 [0], &rayGd->gridZ[0], 54264U * sizeof(real_T));
              b_st.site = &d_emlrtRSI;
              ode45(&b_st, omega_ps, c_this_tunableEnvironment_f2_do,
                    c_this_tunableEnvironment_f2_un,
                    d_this_tunableEnvironment_f2_un,
                    pushBundleRectMultiTLSThread->f0.this_tunableEnvironment_f2_grid,
                    pushBundleRectMultiTLSThread->f0.b_this_tunableEnvironment_f2_gr,
                    pushBundleRectMultiTLSThread->f0.c_this_tunableEnvironment_f2_gr,
                    cnstVar, tSpan, ray0, tr, yr);
              break;
            }

            b_st.site = &e_emlrtRSI;
            c_st.site = &hb_emlrtRSI;
            if (tr->size[0] != 0) {
              b_result = tr->size[0];
            } else if (yr->size[0] != 0) {
              b_result = yr->size[0];
            } else {
              b_result = 0;
            }

            d_st.site = &ib_emlrtRSI;
            if ((tr->size[0] != b_result) && (tr->size[0] != 0)) {
              emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if ((yr->size[0] != b_result) && (yr->size[0] != 0)) {
              emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            withinMargin = (b_result == 0);
            if (withinMargin || (tr->size[0] != 0)) {
              i2 = 1;
            } else {
              i2 = 0;
            }

            if (withinMargin || (yr->size[0] != 0)) {
              sizes_idx_1 = 4;
            } else {
              sizes_idx_1 = 0;
            }

            i = newTraj->size[0] * newTraj->size[1];
            newTraj->size[0] = b_result;
            newTraj->size[1] = i2 + sizes_idx_1;
            emxEnsureCapacity_real_T(&c_st, newTraj, i, &m_emlrtRTEI);
            loop_ub = i2;
            for (i = 0; i < loop_ub; i++) {
              for (i1 = 0; i1 < b_result; i1++) {
                newTraj->data[i1] = tr->data[i1];
              }
            }

            for (i = 0; i < sizes_idx_1; i++) {
              for (i1 = 0; i1 < b_result; i1++) {
                newTraj->data[i1 + newTraj->size[0] * (i + i2)] = yr->data[i1 +
                  yr->size[0] * i];
              }
            }

            /*  because otherwise ode45 will return */
            /*  a struct          */
            /*  need to check and set halt flags if we are too close to */
            /*  theboundary at the last time */
            /*  */
            if (yr->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(yr->size[0], 1, yr->size[0],
                &f_emlrtBCI, &st);
            }

            tSpan[0] = yr->data[yr->size[0] - 1];
            tSpan[1] = yr->data[(yr->size[0] + yr->size[0]) - 1];
            withinMargin = inDomain(tSpan, rayGd->domain);

            /* ,margin); */
            if (!withinMargin) {
              if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->halt->size[1])) {
                emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->
                  halt->size[1], &m_emlrtBCI, &st);
              }

              rayBundle->halt->data[rayIdx] = 1.0;

              /*  set halt flag for */
              /*  out-of-margin */
            }

            /*  attach solution to rayBundle structure */
            /*   have two cases here...  */
            if (trajIsNew) {
              /* rayBundle_trajs{rayIdx} = zeros(size(newTraj)); */
              loop_ub = newTraj->size[0] * newTraj->size[1];
              if (rayIdx > rayBundle->trajs->size[1] - 1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size
                  [1] - 1, &k_emlrtBCI, &st);
              }

              i = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
                trajs->data[rayIdx].f1->size[1];
              rayBundle->trajs->data[rayIdx].f1->size[0] = newTraj->size[0];
              emxEnsureCapacity_real_T(&st, rayBundle->trajs->data[rayIdx].f1, i,
                &n_emlrtRTEI);
              if (rayIdx > rayBundle->trajs->size[1] - 1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size
                  [1] - 1, &k_emlrtBCI, &st);
              }

              i = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
                trajs->data[rayIdx].f1->size[1];
              rayBundle->trajs->data[rayIdx].f1->size[1] = newTraj->size[1];
              emxEnsureCapacity_real_T(&st, rayBundle->trajs->data[rayIdx].f1, i,
                &n_emlrtRTEI);
              b_rayBundle = rayBundle->trajs->size[1] - 1;
              if (rayIdx > rayBundle->trajs->size[1] - 1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size
                  [1] - 1, &k_emlrtBCI, &st);
              }

              if (rayIdx > rayBundle->trajs->size[1] - 1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size
                  [1] - 1, &k_emlrtBCI, &st);
              }

              for (i = 0; i < loop_ub; i++) {
                if (rayIdx > b_rayBundle) {
                  emlrtDynamicBoundsCheckR2012b(rayIdx, 0, b_rayBundle,
                    &n_emlrtBCI, &st);
                }

                rayBundle->trajs->data[rayIdx].f1->data[i] = newTraj->data[i];
              }
            } else {
              /*  append to existing */
              if (rayIdx > rayBundle->trajs->size[1] - 1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size
                  [1] - 1, &emlrtBCI, &st);
              }

              if (1 > rayBundle->trajs->data[rayIdx].f1->size[0] - 1) {
                loop_ub = 0;
              } else {
                i = rayBundle->trajs->data[rayIdx].f1->size[0];
                if (1 > i) {
                  emlrtDynamicBoundsCheckR2012b(1, 1, i, &e_emlrtBCI, &st);
                }

                i = rayBundle->trajs->data[rayIdx].f1->size[0];
                loop_ub = rayBundle->trajs->data[rayIdx].f1->size[0] - 1;
                if ((loop_ub < 1) || (loop_ub > i)) {
                  emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i, &d_emlrtBCI, &st);
                }
              }

              /*  drop IC */
              b_st.site = &f_emlrtRSI;
              c_st.site = &hb_emlrtRSI;
              if ((loop_ub != 0) && (rayBundle->trajs->data[rayIdx].f1->size[1]
                                     != 0)) {
                b_result = rayBundle->trajs->data[rayIdx].f1->size[1];
              } else if ((newTraj->size[0] != 0) && (newTraj->size[1] != 0)) {
                b_result = newTraj->size[1];
              } else {
                if (rayBundle->trajs->data[rayIdx].f1->size[1] > 0) {
                  b_result = rayBundle->trajs->data[rayIdx].f1->size[1];
                } else {
                  b_result = 0;
                }

                if (newTraj->size[1] > b_result) {
                  b_result = newTraj->size[1];
                }
              }

              d_st.site = &ib_emlrtRSI;
              if ((rayBundle->trajs->data[rayIdx].f1->size[1] != b_result) &&
                  ((loop_ub != 0) && (rayBundle->trajs->data[rayIdx].f1->size[1]
                    != 0))) {
                emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              if ((newTraj->size[1] != b_result) && ((newTraj->size[0] != 0) &&
                   (newTraj->size[1] != 0))) {
                emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                  "MATLAB:catenate:matrixDimensionMismatch",
                  "MATLAB:catenate:matrixDimensionMismatch", 0);
              }

              withinMargin = (b_result == 0);
              if (withinMargin || ((loop_ub != 0) && (rayBundle->trajs->
                    data[rayIdx].f1->size[1] != 0))) {
                sizes_idx_1 = loop_ub;
              } else {
                sizes_idx_1 = 0;
              }

              if (withinMargin || ((newTraj->size[0] != 0) && (newTraj->size[1]
                    != 0))) {
                sizes_idx_0 = newTraj->size[0];
              } else {
                sizes_idx_0 = 0;
              }

              b_rayBundle = rayBundle->trajs->data[rayIdx].f1->size[1] - 1;
              i = oldTraj->size[0] * oldTraj->size[1];
              oldTraj->size[0] = loop_ub;
              oldTraj->size[1] = rayBundle->trajs->data[rayIdx].f1->size[1];
              emxEnsureCapacity_real_T(&c_st, oldTraj, i, &o_emlrtRTEI);
              for (i = 0; i <= b_rayBundle; i++) {
                for (i1 = 0; i1 < loop_ub; i1++) {
                  oldTraj->data[i1 + oldTraj->size[0] * i] = rayBundle->
                    trajs->data[rayIdx].f1->data[i1 + rayBundle->trajs->
                    data[rayIdx].f1->size[0] * i];
                }
              }

              b_rayBundle = rayBundle->trajs->size[1] - 1;
              if (rayIdx > rayBundle->trajs->size[1] - 1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size
                  [1] - 1, &o_emlrtBCI, &c_st);
              }

              i = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
                trajs->data[rayIdx].f1->size[1];
              rayBundle->trajs->data[rayIdx].f1->size[0] = sizes_idx_1 +
                sizes_idx_0;
              emxEnsureCapacity_real_T(&c_st, rayBundle->trajs->data[rayIdx].f1,
                i, &p_emlrtRTEI);
              if (rayIdx > b_rayBundle) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, b_rayBundle,
                  &o_emlrtBCI, &c_st);
              }

              i = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
                trajs->data[rayIdx].f1->size[1];
              rayBundle->trajs->data[rayIdx].f1->size[1] = b_result;
              emxEnsureCapacity_real_T(&c_st, rayBundle->trajs->data[rayIdx].f1,
                i, &p_emlrtRTEI);
              for (i = 0; i < b_result; i++) {
                for (i1 = 0; i1 < sizes_idx_1; i1++) {
                  if (rayIdx > b_rayBundle) {
                    emlrtDynamicBoundsCheckR2012b(rayIdx, 0, b_rayBundle,
                      &o_emlrtBCI, &c_st);
                  }

                  rayBundle->trajs->data[rayIdx].f1->data[i1 + rayBundle->
                    trajs->data[rayIdx].f1->size[0] * i] = oldTraj->data[i1 +
                    sizes_idx_1 * i];
                }
              }

              for (i = 0; i < b_result; i++) {
                for (i1 = 0; i1 < sizes_idx_0; i1++) {
                  if (rayIdx > b_rayBundle) {
                    emlrtDynamicBoundsCheckR2012b(rayIdx, 0, b_rayBundle,
                      &o_emlrtBCI, &c_st);
                  }

                  rayBundle->trajs->data[rayIdx].f1->data[(i1 + sizes_idx_1) +
                    rayBundle->trajs->data[rayIdx].f1->size[0] * i] =
                    newTraj->data[i1 + sizes_idx_0 * i];
                }
              }

              /*              rayBundle_trajs{rayIdx} = newTraj;   % debug */
            }
          }

          /*  the if tSpan.. */
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 4);
      emxFree_real_T(&yr);
      emxFree_real_T(&tr);
      emxFree_real_T(&oldTraj);
      emxFree_real_T(&newTraj);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());

  /*  for loop over rays */
  rayBundle->nrays = rayBundle_nrays;
  emxCopyStruct_struct0_T(sp, bundleOut, rayBundle, &l_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (pushBundleRectMulti.c) */
