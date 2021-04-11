/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRect.c
 *
 * Code generation for function 'pushBundleRect'
 *
 */

/* Include files */
#include "pushBundleRect.h"
#include "error.h"
#include "ode45.h"
#include "pushBundleRect_data.h"
#include "pushBundleRect_emxutil.h"
#include "pushBundleRect_types.h"
#include "rectInterp2d.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 37,    /* lineNo */
  "pushBundleRect",                    /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 50,  /* lineNo */
  "pushBundleRect",                    /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 53,  /* lineNo */
  "pushBundleRect",                    /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 101, /* lineNo */
  "pushBundleRect",                    /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 108, /* lineNo */
  "pushBundleRect",                    /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 112, /* lineNo */
  "pushBundleRect",                    /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 129, /* lineNo */
  "pushBundleRect",                    /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 161, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 162, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 164, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 101, /* lineNo */
  "@(t,y) odeEmRayFun(t,y,omega_ps, ...\n                                                rayGd)",/* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 288,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 293,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 297,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 27, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 102,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  168,                                 /* iLast */
  9,                                   /* lineNo */
  34,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  323,                                 /* iLast */
  7,                                   /* lineNo */
  59,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  168,                                 /* iLast */
  5,                                   /* lineNo */
  24,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  323,                                 /* iLast */
  5,                                   /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { 1,   /* iFirst */
  168,                                 /* iLast */
  4,                                   /* lineNo */
  22,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { 1,   /* iFirst */
  323,                                 /* iLast */
  3,                                   /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { 1,   /* iFirst */
  168,                                 /* iLast */
  2,                                   /* lineNo */
  24,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  323,                                 /* iLast */
  2,                                   /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d_v2.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  163,                                 /* lineNo */
  24,                                  /* colNo */
  "rayBundle.nc",                      /* aName */
  "toDispSurface",                     /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  152,                                 /* lineNo */
  34,                                  /* colNo */
  "rayBundle.frequency",               /* aName */
  "toDispSurface",                     /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo b_emlrtRTEI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 283,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  40,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  37,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  42,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  50,                                  /* colNo */
  "rayBundle.trajs{rayIdx}",           /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  48,                                  /* colNo */
  "rayBundle.trajs{rayIdx}",           /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  37,                                  /* colNo */
  "yr",                                /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  27,                                  /* colNo */
  "lastInfo",                          /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  45,                                  /* colNo */
  "rayBundle.trajs{rayIdx}",           /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  38,                                  /* colNo */
  "rayBundle.rayICs",                  /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  24,                                  /* colNo */
  "rayBundle.halt",                    /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo d_emlrtRTEI = { 34,/* lineNo */
  15,                                  /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  125,                                 /* lineNo */
  30,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  24,                                  /* colNo */
  "rayBundle.frequency",               /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  14,                                  /* colNo */
  "rayBundle.halt",                    /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  125,                                 /* lineNo */
  14,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  14,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  24,                                  /* colNo */
  "lastInfo",                          /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  58,                                  /* lineNo */
  24,                                  /* colNo */
  "lastInfo",                          /* aName */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo i_emlrtRTEI = { 136,/* lineNo */
  2,                                   /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 112,/* lineNo */
  10,                                  /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 125,/* lineNo */
  14,                                  /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 128,/* lineNo */
  24,                                  /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 129,/* lineNo */
  14,                                  /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 101,/* lineNo */
  15,                                  /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 101,/* lineNo */
  18,                                  /* colNo */
  "pushBundleRect",                    /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRect.m"/* pName */
};

static emlrtRSInfo kb_emlrtRSI = { 2,  /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 3,  /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectInterp2d.m"/* pathName */
};

/* Function Definitions */
void anon(const emlrtStack *sp, real_T omega_ps, const real_T rayGd_domain[4],
          const real_T rayGd_uniqueR[168], const real_T rayGd_uniqueZ[323],
          const real_T rayGd_grid[54264], const real_T rayGd_gridR[54264], const
          real_T rayGd_gridZ[54264], const real_T y[4], real_T varargout_1[4])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T a;
  real_T b_netonc_tmp;
  real_T c_netonc_tmp;
  real_T clum;
  real_T d_netonc_tmp;
  real_T f_netonc_tmp;
  real_T g_netonc_tmp;
  real_T i_netonc_tmp;
  real_T ind2;
  real_T kVac;
  real_T k_netonc_tmp;
  real_T lambdaum_tmp;
  int32_T e_netonc_tmp;
  int32_T h_netonc_tmp;
  int32_T j_netonc_tmp;
  int32_T netonc_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &y_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  RHS for our ray ode for electromagnetic waves */
  /*  */
  /*      t        - time in ps */
  /*      y        - phase space point [z r kz kr] ('?) */
  /*      omega_ps - EM wave frequency in 1/ps */
  /*      rayGd    - grid struct  */
  /*   output dydt is a column vector: */
  /*   dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]' */
  /*  */
  /*  */
  /*  Added a check to ensure that the position y(1:2) where */
  /*  the RHS is to be evaluated is inside the domain where */
  /*  the grid data is defined. Attempting to evaluate outside */
  /*  of the domain will give "triangulation" errors, i.e., */
  /*  the pointLocation() function will give an error. */
  /*  */
  /*  If the point is outside the domain the function will */
  /*  return zero for dydt in the second and third positions */
  /*  */
  /*  The same needs to be done for odeLwRayFun but I haven't */
  /*  implemented it yet. */
  /*  */
  /*  (JFM 21 July, 2020) */
  clum = cnst.c * 1.0E-6;

  /*  speed of light in microns/ps */
  /*  need these */
  lambdaum_tmp = muDoubleScalarAbs(omega_ps);
  a = cnst.twopi * clum / lambdaum_tmp;

  /*  vac wavelength microns */
  kVac = lambdaum_tmp / clum;

  /*  vacuum wavenumber 1/um */
  /*  crit density in 1/cm^3 */
  /*  current position at phase space point y */
  /*  current ray wavevector at phase space point y */
  /* goodPt = 1; */
  /*  given a column vector of positions x, return a list */
  /*  of logicals showing if they are in the domain (given by rayGd) */
  /*  or not */
  /*     */
  /*  margin in zmin zmaz rmin rmax (um) */
  /*  could write as zmin = (rayGd.domain+margin)(1) */
  if ((y[1] < rayGd_domain[3]) && (y[1] > rayGd_domain[2]) && ((y[0] <
        rayGd_domain[1]) && (y[0] > rayGd_domain[0]))) {
    /*  interpolation for current position */
    /* [ti,bc] = pointLocation(rayGd.DT,x');  % Delauney triangles     */
    /* triValNe = rayGd.valsNe(rayGd.DT(ti,:)); */
    b_st.site = &kb_emlrtRSI;
    lambdaum_tmp = closest_val(&b_st, rayGd_uniqueZ, y[0]);
    b_st.site = &lb_emlrtRSI;
    ind2 = b_closest_val(&b_st, rayGd_uniqueR, y[1]);
    b_st.site = &bb_emlrtRSI;
    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &h_emlrtBCI, &b_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &g_emlrtBCI, &b_st);
    }

    if (((int32_T)lambdaum_tmp < 1) || ((int32_T)lambdaum_tmp > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)lambdaum_tmp, 1, 323, &f_emlrtBCI,
        &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &e_emlrtBCI,
        &b_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &c_emlrtBCI,
        &b_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &b_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &emlrtBCI,
        &b_st);
    }

    /*  log10 of electron density */
    /*     disp(logNe)  % debugging */
    netonc_tmp = 323 * ((int32_T)ind2 - 1);
    b_netonc_tmp = rayGd_uniqueZ[(int32_T)lambdaum_tmp - 1];
    c_netonc_tmp = rayGd_uniqueZ[(int32_T)(lambdaum_tmp - 1.0) - 1];
    d_netonc_tmp = b_netonc_tmp - y[0];
    e_netonc_tmp = 323 * ((int32_T)(ind2 - 1.0) - 1);
    f_netonc_tmp = y[0] - c_netonc_tmp;
    b_netonc_tmp -= c_netonc_tmp;
    c_netonc_tmp = rayGd_uniqueR[(int32_T)ind2 - 1];
    g_netonc_tmp = rayGd_uniqueR[(int32_T)(ind2 - 1.0) - 1];
    h_netonc_tmp = ((int32_T)(lambdaum_tmp - 1.0) + netonc_tmp) - 1;
    netonc_tmp = ((int32_T)lambdaum_tmp + netonc_tmp) - 1;
    i_netonc_tmp = y[1] - g_netonc_tmp;
    j_netonc_tmp = ((int32_T)(lambdaum_tmp - 1.0) + e_netonc_tmp) - 1;
    e_netonc_tmp = ((int32_T)lambdaum_tmp + e_netonc_tmp) - 1;
    k_netonc_tmp = c_netonc_tmp - y[1];
    c_netonc_tmp -= g_netonc_tmp;

    /* triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:)); */
    b_st.site = &db_emlrtRSI;
    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &h_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &e_emlrtBCI,
        &b_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &c_emlrtBCI,
        &b_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &b_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &emlrtBCI,
        &b_st);
    }

    /*  at phase space point */
    /*     disp(dLogNedz) */
    /* triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
    b_st.site = &eb_emlrtRSI;
    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &h_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &e_emlrtBCI,
        &b_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &c_emlrtBCI,
        &b_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &b_emlrtBCI, &b_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &emlrtBCI,
        &b_st);
    }

    /* dot(bc',triValDLogNedr')';   % at phase space point */
    /*     disp(dLogNedr) */
    varargout_1[0] = muDoubleScalarSign(omega_ps) * clum * y[2] / kVac;
    varargout_1[1] = muDoubleScalarSign(omega_ps) * clum * y[3] / kVac;
    lambdaum_tmp = -0.5 * cnst.ln10 * omega_ps * (muDoubleScalarPower(10.0,
      ((rayGd_grid[h_netonc_tmp] * d_netonc_tmp + rayGd_grid[netonc_tmp] *
        f_netonc_tmp) / b_netonc_tmp * i_netonc_tmp + (rayGd_grid[j_netonc_tmp] *
      d_netonc_tmp + rayGd_grid[e_netonc_tmp] * f_netonc_tmp) / b_netonc_tmp *
       k_netonc_tmp) / c_netonc_tmp) / (1.1E+21 / (a * a)));
    varargout_1[2] = lambdaum_tmp * (((rayGd_gridZ[h_netonc_tmp] * d_netonc_tmp
      + rayGd_gridZ[netonc_tmp] * f_netonc_tmp) / b_netonc_tmp * i_netonc_tmp +
      (rayGd_gridZ[j_netonc_tmp] * d_netonc_tmp + rayGd_gridZ[e_netonc_tmp] *
       f_netonc_tmp) / b_netonc_tmp * k_netonc_tmp) / c_netonc_tmp);
    varargout_1[3] = lambdaum_tmp * (((rayGd_gridR[h_netonc_tmp] * d_netonc_tmp
      + rayGd_gridR[netonc_tmp] * f_netonc_tmp) / b_netonc_tmp * i_netonc_tmp +
      (rayGd_gridR[j_netonc_tmp] * d_netonc_tmp + rayGd_gridR[e_netonc_tmp] *
       f_netonc_tmp) / b_netonc_tmp * k_netonc_tmp) / c_netonc_tmp);

    /*  column vector  */
  } else {
    /*  move ray in a straight line */
    lambdaum_tmp = muDoubleScalarSign(omega_ps) * clum;
    varargout_1[0] = lambdaum_tmp * y[2] / kVac;
    varargout_1[1] = lambdaum_tmp * y[3] / kVac;
    varargout_1[2] = 0.0;
    varargout_1[3] = 0.0;

    /*  column vector          */
  }

  /*   function dydt = odeLwRayFun(t,y,omega_ps,rayGd) */
  /*   % RHS for our ray ode for Langmuir waves */
  /*   %  output dydt is a column vector: */
  /*   %  dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]' */
  /*        */
  /*   % NOTE: here omega_ps is a scalar (since we deal with a single ray) */
  /*    */
  /*      global cnst */
  /*   */
  /*      clum  = (cnst.c)*(1.e-6); % speed of light in microns/ps */
  /*      ln10  = cnst.ln10; */
  /*      twopi = cnst.twopi; */
  /*   */
  /*      omega = omega_ps;   % wave frequency in rads/ps */
  /*   */
  /*      x = y(1:2);     % current position at phase space point y */
  /*      kVec = y(3:4);  % current ray wavevector at phase space point y */
  /*      k2 = dot(kVec,kVec); */
  /*   */
  /*      goodPt = inDomain(x',rayGd);        */
  /*      %goodPt = 1;     */
  /*       */
  /*      if goodPt */
  /*          % interpolation for current position */
  /*          [ti,bc] = pointLocation(rayGd.DT,x');  % Delauney triangles     */
  /*           */
  /*          % density */
  /*          triValNe = rayGd.valsNe(rayGd.DT(ti,:)); */
  /*          logNe = dot(bc',triValNe')';           % log10 of electron density */
  /*                                                 %    disp(logNe)  % debugging */
  /*          wpe = (cnst.wpe)*sqrt(10^logNe)*1.e-12; % electron plasma */
  /*                                                  % frequency (rad/ps) */
  /*                                                  %    disp(wpe) */
  /*   */
  /*          triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:)); */
  /*          dLogNedz = dot(bc',triValDLogNedz')';   % at phase space point */
  /*                                                  %    disp(dLogNedz) */
  /*   */
  /*          triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
  /*          dLogNedr = dot(bc',triValDLogNedr')';   % at phase space point */
  /*                                                  %    disp(dLogNedr) */
  /*           */
  /*          % derivatives of electron temperature */
  /*          triValTe = rayGd.valsTe(rayGd.DT(ti,:)); */
  /*          Te = dot(bc',triValTe')';        % electron temperature in eV */
  /*          vTe2 =(cnst.vTe1eV*sqrt(Te))^2;  % square of electron thermal velocity (um/ps)^2 */
  /*           */
  /*          triValDLnTedz = rayGd.valsDLnTedz(rayGd.DT(ti,:)); */
  /*          dLnTedz = dot(bc',triValDLnTedz')';   % at phase space point */
  /*                                                %    disp(dLnTedz) */
  /*   */
  /*          triValDLnTedr = rayGd.valsDLnTedr(rayGd.DT(ti,:)); */
  /*          dLnTedr = dot(bc',triValDLnTedr')';   % at phase space point */
  /*                                                %    disp(dLnTedr) */
  /*           */
  /*          dzdt = (3.0*vTe2/omega)*kVec(1); */
  /*          drdt = (3.0*vTe2/omega)*kVec(2); */
  /*           */
  /*          dkzdt = -wpe^2/(2.0*omega)*ln10*dLogNedz - (3/2)*(k2*vTe2/ ... */
  /*                                                            omega)*dLnTedz; */
  /*           */
  /*          dkrdt = -wpe^2/(2.0*omega)*ln10*dLogNedr - (3/2)*(k2*vTe2/ ... */
  /*                                                            omega)*dLnTedr; */
  /*           */
  /*          dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector  */
  /*      else */
  /*          Te = 2000.0;                     % dummy electron temperature in eV */
  /*          vTe2 =(cnst.vTe1eV*sqrt(Te))^2;  % square of elec therm vel (um/ps) */
  /*   */
  /*          dzdt = (3.0*vTe2/omega)*kVec(1); */
  /*          drdt = (3.0*vTe2/omega)*kVec(2); */
  /*           */
  /*          dkzdt = 0.0; */
  /*          dkrdt = 0.0; */
  /*           */
  /*          dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector          */
  /*      end */
  /*       */
  /*   end */
  /*   */
}

void emlrt_checkEscapedGlobals(void)
{
  cnst_dirty |= cnst_dirty >> 1U;
}

void pushBundleRect(const emlrtStack *sp, struct0_T *rayBundle, const struct1_T *
                    rayGd, real_T tStep, struct0_T *bundleOut)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_real_T *b_rayBundle;
  emxArray_real_T *newTraj;
  emxArray_real_T *tr;
  emxArray_real_T *yr;
  real_T ray0[4];
  real_T tSpan[2];
  real_T k0_idx_0;
  real_T k0_idx_1;
  real_T omega_ps;
  real_T tPrev;
  real_T tStop;
  real_T x0_idx_0;
  real_T x0_idx_1;
  real_T x_tmp;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T input_sizes_idx_0;
  int32_T loop_ub;
  int32_T rayIdx;
  int32_T result;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int8_T i3;
  boolean_T x[2];
  boolean_T empty_non_axis_sizes;
  boolean_T exitg1;
  boolean_T trajIsNew;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
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
  i = (int32_T)rayBundle->nrays;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, rayBundle->nrays, mxDOUBLE_CLASS,
    (int32_T)rayBundle->nrays, &d_emlrtRTEI, sp);
  emxInit_real_T(sp, &tr, 1, &n_emlrtRTEI, true);
  emxInit_real_T(sp, &yr, 2, &o_emlrtRTEI, true);
  emxInit_real_T(sp, &newTraj, 2, &j_emlrtRTEI, true);
  emxInit_real_T(sp, &b_rayBundle, 2, &l_emlrtRTEI, true);
  for (rayIdx = 0; rayIdx < i; rayIdx++) {
    /*  check to see if we need to move this ray */
    i1 = rayIdx + 1;
    if ((i1 < 1) || (i1 > rayBundle->halt->size[1])) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, rayBundle->halt->size[1], &t_emlrtBCI,
        sp);
    }

    st.site = &emlrtRSI;
    if (muDoubleScalarIsNaN(rayBundle->halt->data[rayIdx])) {
      emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI, "MATLAB:nologicalnan",
        "MATLAB:nologicalnan", 0);
    }

    if (!(rayBundle->halt->data[rayIdx] != 0.0)) {
      if (rayIdx > rayBundle->trajs->size[1] - 1) {
        emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] - 1,
          &m_emlrtBCI, sp);
      }

      trajIsNew = ((rayBundle->trajs->data[rayIdx].f1->size[0] == 0) ||
                   (rayBundle->trajs->data[rayIdx].f1->size[1] == 0));
      if (trajIsNew) {
        /*  need IC's for trajectory */
        x[0] = (rayBundle->type[0] == 'E');
        x[1] = (rayBundle->type[1] == 'M');
        empty_non_axis_sizes = true;
        sizes_idx_1 = 0;
        exitg1 = false;
        while ((!exitg1) && (sizes_idx_1 < 2)) {
          if (!x[sizes_idx_1]) {
            empty_non_axis_sizes = false;
            exitg1 = true;
          } else {
            sizes_idx_1++;
          }
        }

        if (empty_non_axis_sizes) {
          if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->rayICs->size[1])) {
            emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->rayICs->
              size[1], &s_emlrtBCI, sp);
          }

          x0_idx_0 = rayBundle->rayICs->data[2 * rayIdx];
          sizes_idx_0 = 2 * rayIdx + 1;
          x0_idx_1 = rayBundle->rayICs->data[sizes_idx_0];

          /*  position x0 is row vector here */
          /*  modify arguments to "toDispSurface()" to only what is */
          /*  needed */
          /*  */
          st.site = &b_emlrtRSI;

          /*   */
          /*  Local functions follow: */
          /*  */
          /*  TODISPSURFACE - to do later */
          /*     */
          /*  TO DO: need this function to work on EPW also */
          /*  get magnitude of local wavevector */
          if (i1 > rayBundle->frequency->size[1]) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, rayBundle->frequency->size[1],
              &j_emlrtBCI, &st);
          }

          /*  1/s */
          /*  TO DO: need to deal with the case that rayBundle.frequency */
          /*  is a row vector */
          /*  */
          /*  1/ps */
          /*  we assume light - need to fix to be more general */
          /*     we can use rayBundle.type for this... */
          /*  1/um */
          b_st.site = &kb_emlrtRSI;
          tPrev = closest_val(&b_st, rayGd->uniqueZ, rayBundle->rayICs->data[2 *
                              rayIdx]);
          b_st.site = &lb_emlrtRSI;
          k0_idx_1 = b_closest_val(&b_st, rayGd->uniqueR, rayBundle->
            rayICs->data[2 * rayIdx + 1]);
          b_st.site = &h_emlrtRSI;
          if (((int32_T)(tPrev - 1.0) < 1) || ((int32_T)(tPrev - 1.0) > 323)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(tPrev - 1.0), 1, 323,
              &h_emlrtBCI, &b_st);
          }

          if (((int32_T)k0_idx_1 < 1) || ((int32_T)k0_idx_1 > 168)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)k0_idx_1, 1, 168, &g_emlrtBCI,
              &b_st);
          }

          if (((int32_T)tPrev < 1) || ((int32_T)tPrev > 323)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)tPrev, 1, 323, &f_emlrtBCI,
              &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               168)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1, 168,
              &e_emlrtBCI, &b_st);
          }

          if (((int32_T)(tPrev - 1.0) < 1) || ((int32_T)(tPrev - 1.0) > 323)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(tPrev - 1.0), 1, 323,
              &d_emlrtBCI, &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               168)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1, 168,
              &c_emlrtBCI, &b_st);
          }

          if (((int32_T)(tPrev - 1.0) < 1) || ((int32_T)(tPrev - 1.0) > 323)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(tPrev - 1.0), 1, 323,
              &b_emlrtBCI, &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               168)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1, 168,
              &emlrtBCI, &b_st);
          }

          b_st.site = &i_emlrtRSI;

          /* interpOnTraj('valsNe',[x0 x0],rayGd); */
          if (i1 > rayBundle->nc->size[1]) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, rayBundle->nc->size[1],
              &i_emlrtBCI, &st);
          }

          /*  1/cm3 */
          b_st.site = &j_emlrtRSI;
          sizes_idx_1 = 323 * ((int32_T)k0_idx_1 - 1);
          omega_ps = rayGd->uniqueZ[(int32_T)tPrev - 1];
          tStop = rayGd->uniqueZ[(int32_T)(tPrev - 1.0) - 1];
          k0_idx_0 = omega_ps - rayBundle->rayICs->data[2 * rayIdx];
          input_sizes_idx_0 = 323 * ((int32_T)(k0_idx_1 - 1.0) - 1);
          x_tmp = rayBundle->rayICs->data[2 * rayIdx] - tStop;
          omega_ps -= tStop;
          tStop = rayGd->uniqueR[(int32_T)k0_idx_1 - 1];
          k0_idx_1 = rayGd->uniqueR[(int32_T)(k0_idx_1 - 1.0) - 1];
          k0_idx_1 = 1.0 - muDoubleScalarPower(10.0, ((rayGd->grid[((int32_T)
            (tPrev - 1.0) + sizes_idx_1) - 1] * k0_idx_0 + rayGd->grid[((int32_T)
            tPrev + sizes_idx_1) - 1] * x_tmp) / omega_ps * (rayBundle->
            rayICs->data[sizes_idx_0] - k0_idx_1) + (rayGd->grid[((int32_T)
            (tPrev - 1.0) + input_sizes_idx_0) - 1] * k0_idx_0 + rayGd->grid
            [((int32_T)tPrev + input_sizes_idx_0) - 1] * x_tmp) / omega_ps *
            (tStop - rayBundle->rayICs->data[sizes_idx_0])) / (tStop - k0_idx_1))
            / rayBundle->nc->data[rayIdx];
          if (k0_idx_1 < 0.0) {
            emlrtErrorWithMessageIdR2018a(&b_st, &emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 4, "sqrt");
          }

          k0_idx_1 = muDoubleScalarSqrt(k0_idx_1);
          k0_idx_1 *= 1.0E-6 * muDoubleScalarAbs(rayBundle->frequency->
            data[rayIdx]) / cnst.c;

          /*  local wavenumber in */
          /*  1/um */
          /*  initial direction */
          /*  (unit row vector) */
          k0_idx_0 = k0_idx_1 * rayBundle->direction[0];
          k0_idx_1 *= rayBundle->direction[1];

          /*  initial k (row) vector */
          /*  (1/um) */
          tPrev = 0.0;

          /*  start from t=0 */
        } else {
          st.site = &c_emlrtRSI;
          error(&st);
        }
      } else {
        if (rayIdx > rayBundle->trajs->size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] - 1,
            &l_emlrtBCI, sp);
        }

        i1 = rayBundle->trajs->data[rayIdx].f1->size[0];
        i2 = rayBundle->trajs->data[rayIdx].f1->size[0];
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &r_emlrtBCI, sp);
        }

        /*  use the last time info */
        i1 = rayBundle->trajs->data[rayIdx].f1->size[1];
        if (2 > i1) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i1, &ab_emlrtBCI, sp);
        }

        x0_idx_0 = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
          trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx]
          .f1->size[0]) - 1];
        i1 = rayBundle->trajs->data[rayIdx].f1->size[1];
        if (3 > i1) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i1, &ab_emlrtBCI, sp);
        }

        x0_idx_1 = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
          trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx]
          .f1->size[0] * 2) - 1];

        /*  position row vector */
        i1 = rayBundle->trajs->data[rayIdx].f1->size[1];
        if (4 > i1) {
          emlrtDynamicBoundsCheckR2012b(4, 1, i1, &bb_emlrtBCI, sp);
        }

        k0_idx_0 = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
          trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx]
          .f1->size[0] * 3) - 1];
        i1 = rayBundle->trajs->data[rayIdx].f1->size[1];
        if (5 > i1) {
          emlrtDynamicBoundsCheckR2012b(5, 1, i1, &bb_emlrtBCI, sp);
        }

        k0_idx_1 = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
          trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx]
          .f1->size[0] * 4) - 1];

        /*  wave vector row vector */
        i1 = rayBundle->trajs->data[rayIdx].f1->size[1];
        if (1 > i1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i1, &q_emlrtBCI, sp);
        }

        tPrev = rayBundle->trajs->data[rayIdx].f1->data[rayBundle->trajs->
          data[rayIdx].f1->size[0] - 1];
      }

      /*  TO DO: deal with the case where rayBundle.frequency is a row vector */
      /*  */
      if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->frequency->size[1])) {
        emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->frequency->size
          [1], &v_emlrtBCI, sp);
      }

      omega_ps = 1.0E-12 * rayBundle->frequency->data[rayIdx];

      /*  see which direction we're going */
      tStop = tPrev + tStep;
      tSpan[0] = tPrev;
      tSpan[1] = tStop;
      ray0[0] = x0_idx_0;
      ray0[2] = k0_idx_0;
      ray0[1] = x0_idx_1;
      ray0[3] = k0_idx_1;

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
        if (b_strcmp(rayBundle->type)) {
          empty_non_axis_sizes = true;
        } else {
          empty_non_axis_sizes = false;
        }

        if (empty_non_axis_sizes) {
          sizes_idx_1 = 0;
        } else {
          sizes_idx_1 = -1;
        }

        switch (sizes_idx_1) {
         case 0:
          st.site = &d_emlrtRSI;
          ode45(&st, omega_ps, rayGd->domain, rayGd->uniqueR, rayGd->uniqueZ,
                rayGd->grid, rayGd->gridR, rayGd->gridZ, tSpan, ray0, tr, yr);

          /* case 'EPW' */
          /*   [tr,yr] = ode45(@(t,y) odeLwRayFun(t,y,omega_ps, ... */
          /*                                      rayGd),tSpan,ray0);            */
          break;

         default:
          /* placeholder */
          st.site = &e_emlrtRSI;
          ode45(&st, omega_ps, rayGd->domain, rayGd->uniqueR, rayGd->uniqueZ,
                rayGd->grid, rayGd->gridR, rayGd->gridZ, tSpan, ray0, tr, yr);
          break;
        }

        st.site = &f_emlrtRSI;
        b_st.site = &ib_emlrtRSI;
        if (tr->size[0] != 0) {
          result = tr->size[0];
        } else if (yr->size[0] != 0) {
          result = yr->size[0];
        } else {
          result = 0;
        }

        c_st.site = &jb_emlrtRSI;
        if ((tr->size[0] != result) && (tr->size[0] != 0)) {
          emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((yr->size[0] != result) && (yr->size[0] != 0)) {
          emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (result == 0);
        if (empty_non_axis_sizes || (tr->size[0] != 0)) {
          i3 = 1;
        } else {
          i3 = 0;
        }

        if (empty_non_axis_sizes || (yr->size[0] != 0)) {
          sizes_idx_1 = 4;
        } else {
          sizes_idx_1 = 0;
        }

        i1 = newTraj->size[0] * newTraj->size[1];
        newTraj->size[0] = result;
        newTraj->size[1] = i3 + sizes_idx_1;
        emxEnsureCapacity_real_T(&b_st, newTraj, i1, &j_emlrtRTEI);
        loop_ub = i3;
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < result; i2++) {
            newTraj->data[i2] = tr->data[i2];
          }
        }

        for (i1 = 0; i1 < sizes_idx_1; i1++) {
          for (i2 = 0; i2 < result; i2++) {
            newTraj->data[i2 + newTraj->size[0] * (i1 + i3)] = yr->data[i2 +
              yr->size[0] * i1];
          }
        }

        /*  because otherwise ode45 will return */
        /*  a struct          */
        /*  need to check and set halt flags if we are too close to */
        /*  theboundary at the last time */
        /*  */
        if (yr->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(yr->size[0], 1, yr->size[0], &p_emlrtBCI,
            sp);
        }

        /* ,margin); */
        /*  given a column vector of positions x, return a list */
        /*  of logicals showing if they are in the domain (given by rayGd) */
        /*  or not */
        /*     */
        /*  margin in zmin zmaz rmin rmax (um) */
        /*  could write as zmin = (rayGd.domain+margin)(1) */
        if ((!(yr->data[(yr->size[0] + yr->size[0]) - 1] < rayGd->domain[3])) ||
            (!(yr->data[(yr->size[0] + yr->size[0]) - 1] > rayGd->domain[2])) ||
            ((!(yr->data[yr->size[0] - 1] < rayGd->domain[1])) || (!(yr->data
               [yr->size[0] - 1] > rayGd->domain[0])))) {
          if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->halt->size[1])) {
            emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->halt->size[1],
              &w_emlrtBCI, sp);
          }

          rayBundle->halt->data[rayIdx] = 1.0;

          /*  set halt flag for */
          /*  out-of-margin */
        }

        /*  attach solution to rayBundle structure */
        /*   have two cases here...  */
        if (trajIsNew) {
          loop_ub = newTraj->size[0] * newTraj->size[1];
          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &u_emlrtBCI, sp);
          }

          i1 = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
            trajs->data[rayIdx].f1->size[1];
          rayBundle->trajs->data[rayIdx].f1->size[0] = newTraj->size[0];
          emxEnsureCapacity_real_T(sp, rayBundle->trajs->data[rayIdx].f1, i1,
            &k_emlrtRTEI);
          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &u_emlrtBCI, sp);
          }

          i1 = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
            trajs->data[rayIdx].f1->size[1];
          rayBundle->trajs->data[rayIdx].f1->size[1] = newTraj->size[1];
          emxEnsureCapacity_real_T(sp, rayBundle->trajs->data[rayIdx].f1, i1,
            &k_emlrtRTEI);
          sizes_idx_1 = rayBundle->trajs->size[1] - 1;
          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &u_emlrtBCI, sp);
          }

          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &u_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < loop_ub; i1++) {
            if (rayIdx > sizes_idx_1) {
              emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1, &x_emlrtBCI,
                sp);
            }

            rayBundle->trajs->data[rayIdx].f1->data[i1] = newTraj->data[i1];
          }
        } else {
          /*  append to existing */
          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &k_emlrtBCI, sp);
          }

          if (1 > rayBundle->trajs->data[rayIdx].f1->size[0] - 1) {
            loop_ub = 0;
          } else {
            i1 = rayBundle->trajs->data[rayIdx].f1->size[0];
            if (1 > i1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i1, &o_emlrtBCI, sp);
            }

            i1 = rayBundle->trajs->data[rayIdx].f1->size[0];
            loop_ub = rayBundle->trajs->data[rayIdx].f1->size[0] - 1;
            if ((loop_ub < 1) || (loop_ub > i1)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &n_emlrtBCI, sp);
            }
          }

          /*  drop IC */
          st.site = &g_emlrtRSI;
          b_st.site = &ib_emlrtRSI;
          if ((loop_ub != 0) && (rayBundle->trajs->data[rayIdx].f1->size[1] != 0))
          {
            result = rayBundle->trajs->data[rayIdx].f1->size[1];
          } else if ((newTraj->size[0] != 0) && (newTraj->size[1] != 0)) {
            result = newTraj->size[1];
          } else {
            if (rayBundle->trajs->data[rayIdx].f1->size[1] > 0) {
              result = rayBundle->trajs->data[rayIdx].f1->size[1];
            } else {
              result = 0;
            }

            if (newTraj->size[1] > result) {
              result = newTraj->size[1];
            }
          }

          c_st.site = &jb_emlrtRSI;
          if ((rayBundle->trajs->data[rayIdx].f1->size[1] != result) &&
              ((loop_ub != 0) && (rayBundle->trajs->data[rayIdx].f1->size[1] !=
                                  0))) {
            emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
              "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
          }

          if ((newTraj->size[1] != result) && ((newTraj->size[0] != 0) &&
               (newTraj->size[1] != 0))) {
            emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
              "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
          }

          empty_non_axis_sizes = (result == 0);
          if (empty_non_axis_sizes || ((loop_ub != 0) && (rayBundle->trajs->
                data[rayIdx].f1->size[1] != 0))) {
            input_sizes_idx_0 = loop_ub;
          } else {
            input_sizes_idx_0 = 0;
          }

          if (empty_non_axis_sizes || ((newTraj->size[0] != 0) && (newTraj->
                size[1] != 0))) {
            sizes_idx_0 = newTraj->size[0];
          } else {
            sizes_idx_0 = 0;
          }

          sizes_idx_1 = rayBundle->trajs->data[rayIdx].f1->size[1] - 1;
          i1 = b_rayBundle->size[0] * b_rayBundle->size[1];
          b_rayBundle->size[0] = loop_ub;
          b_rayBundle->size[1] = rayBundle->trajs->data[rayIdx].f1->size[1];
          emxEnsureCapacity_real_T(&b_st, b_rayBundle, i1, &l_emlrtRTEI);
          for (i1 = 0; i1 <= sizes_idx_1; i1++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_rayBundle->data[i2 + b_rayBundle->size[0] * i1] =
                rayBundle->trajs->data[rayIdx].f1->data[i2 + rayBundle->
                trajs->data[rayIdx].f1->size[0] * i1];
            }
          }

          sizes_idx_1 = rayBundle->trajs->size[1] - 1;
          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &y_emlrtBCI, &b_st);
          }

          i1 = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
            trajs->data[rayIdx].f1->size[1];
          rayBundle->trajs->data[rayIdx].f1->size[0] = input_sizes_idx_0 +
            sizes_idx_0;
          emxEnsureCapacity_real_T(&b_st, rayBundle->trajs->data[rayIdx].f1, i1,
            &m_emlrtRTEI);
          if (rayIdx > sizes_idx_1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1, &y_emlrtBCI,
              &b_st);
          }

          i1 = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
            trajs->data[rayIdx].f1->size[1];
          rayBundle->trajs->data[rayIdx].f1->size[1] = result;
          emxEnsureCapacity_real_T(&b_st, rayBundle->trajs->data[rayIdx].f1, i1,
            &m_emlrtRTEI);
          for (i1 = 0; i1 < result; i1++) {
            for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
              if (rayIdx > sizes_idx_1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1,
                  &y_emlrtBCI, &b_st);
              }

              rayBundle->trajs->data[rayIdx].f1->data[i2 + rayBundle->
                trajs->data[rayIdx].f1->size[0] * i1] = b_rayBundle->data[i2 +
                input_sizes_idx_0 * i1];
            }
          }

          for (i1 = 0; i1 < result; i1++) {
            for (i2 = 0; i2 < sizes_idx_0; i2++) {
              if (rayIdx > sizes_idx_1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1,
                  &y_emlrtBCI, &b_st);
              }

              rayBundle->trajs->data[rayIdx].f1->data[(i2 + input_sizes_idx_0) +
                rayBundle->trajs->data[rayIdx].f1->size[0] * i1] = newTraj->
                data[i2 + sizes_idx_0 * i1];
            }
          }

          /*              rayBundle.trajs{rayIdx} = newTraj;   % debug */
        }
      }

      /*  the if tSpan.. */
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&b_rayBundle);
  emxFree_real_T(&newTraj);
  emxFree_real_T(&yr);
  emxFree_real_T(&tr);

  /*  for loop over rays */
  emxCopyStruct_struct0_T(sp, bundleOut, rayBundle, &i_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (pushBundleRect.c) */
