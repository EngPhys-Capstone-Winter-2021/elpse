/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * callODEFunctionNSM.c
 *
 * Code generation for function 'callODEFunctionNSM'
 *
 */

/* Include files */
#include "callODEFunctionNSM.h"
#include "pushBundleRectMulti.h"
#include "pushBundleRectMulti_data.h"
#include "rectInterp2d.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 11,  /* lineNo */
  "callODEFunctionNSM",                /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/callODEFunctionNSM.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 47,  /* lineNo */
  "function_handle/parenReference",    /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/function_handle.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 121, /* lineNo */
  "@(t,y) odeEmRayFun(t,y,omega_ps, ...\n                                                rayGd,cnstVar)",/* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 302, /* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 315, /* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 316,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 318,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 321,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 325,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtBCInfo db_emlrtBCI = { 1,  /* iFirst */
  168,                                 /* iLast */
  8,                                   /* lineNo */
  39,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { 1,  /* iFirst */
  323,                                 /* iLast */
  5,                                   /* lineNo */
  15,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { 1,  /* iFirst */
  168,                                 /* iLast */
  5,                                   /* lineNo */
  32,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { 1,  /* iFirst */
  323,                                 /* iLast */
  6,                                   /* lineNo */
  15,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { 1,  /* iFirst */
  323,                                 /* iLast */
  7,                                   /* lineNo */
  15,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { 1,  /* iFirst */
  168,                                 /* iLast */
  7,                                   /* lineNo */
  32,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { 1,  /* iFirst */
  323,                                 /* iLast */
  4,                                   /* lineNo */
  36,                                  /* colNo */
  "grid",                              /* aName */
  "triInterp",                         /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/triInterp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { 1,  /* iFirst */
  168,                                 /* iLast */
  4,                                   /* lineNo */
  36,                                  /* colNo */
  "grid",                              /* aName */
  "triInterp",                         /* fName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/triInterp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo jb_emlrtRSI = { 2,  /* lineNo */
  "rectLocate",                        /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 3,  /* lineNo */
  "rectLocate",                        /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/rectLocate.m"/* pathName */
};

/* Function Definitions */
void callODEFunctionNSM(const emlrtStack *sp, real_T
  odeFcn_tunableEnvironment_f1, const real_T c_odeFcn_tunableEnvironment_f2_[4],
  const real_T d_odeFcn_tunableEnvironment_f2_[168], const real_T
  e_odeFcn_tunableEnvironment_f2_[323], const real_T
  f_odeFcn_tunableEnvironment_f2_[54264], const real_T
  g_odeFcn_tunableEnvironment_f2_[54264], const real_T
  h_odeFcn_tunableEnvironment_f2_[54264], const real_T
  odeFcn_tunableEnvironment_f3[4], const real_T y[4], real_T yp[4])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T a;
  real_T areaD;
  real_T coordA_idx_0;
  real_T coordA_idx_1;
  real_T coordB_idx_0;
  real_T coordB_idx_1;
  real_T coordC_idx_0;
  real_T coordC_idx_1;
  real_T den;
  real_T ind1;
  real_T ind2;
  real_T kVac;
  real_T v;
  int32_T b_yp_tmp_tmp;
  int32_T c_yp_tmp_tmp;
  int32_T d_yp_tmp_tmp;
  int32_T yp_tmp_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &u_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &v_emlrtRSI;
  c_st.site = &w_emlrtRSI;

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
  /* .c; */
  /*  need these */
  coordC_idx_1 = muDoubleScalarAbs(odeFcn_tunableEnvironment_f1);
  a = odeFcn_tunableEnvironment_f3[3] * odeFcn_tunableEnvironment_f3[1] /
    coordC_idx_1;

  /*  vac wavelength microns */
  kVac = coordC_idx_1 / odeFcn_tunableEnvironment_f3[1];

  /*  vacuum wavenumber 1/um */
  d_st.site = &x_emlrtRSI;

  /*  crit density in 1/cm^3 */
  /*  current position at phase space point y */
  /*  current ray wavevector at phase space point y */
  /* goodPt = 1; */
  if (inDomain(*(real_T (*)[2])&y[0], c_odeFcn_tunableEnvironment_f2_)) {
    /*  interpolation for current position */
    /* [ti,bc] = pointLocation(rayGd.DT,x');  % Delauney triangles     */
    /* triValNe = rayGd.valsNe(rayGd.DT(ti,:)); */
    d_st.site = &y_emlrtRSI;
    e_st.site = &jb_emlrtRSI;
    ind1 = closest_val(&e_st, e_odeFcn_tunableEnvironment_f2_, y[0]);
    e_st.site = &lb_emlrtRSI;
    ind2 = b_closest_val(&e_st, d_odeFcn_tunableEnvironment_f2_, y[1]);
    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &eb_emlrtBCI,
        &d_st);
    }

    den = e_odeFcn_tunableEnvironment_f2_[(int32_T)(ind1 - 1.0) - 1];
    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &fb_emlrtBCI, &d_st);
    }

    v = d_odeFcn_tunableEnvironment_f2_[(int32_T)ind2 - 1];
    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &gb_emlrtBCI, &d_st);
    }

    coordC_idx_1 = e_odeFcn_tunableEnvironment_f2_[(int32_T)ind1 - 1];
    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &hb_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &ib_emlrtBCI,
        &d_st);
    }

    areaD = d_odeFcn_tunableEnvironment_f2_[(int32_T)(ind2 - 1.0) - 1];
    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &db_emlrtBCI,
        &d_st);
    }

    /* dataP = [coordA;coordB;coordC;coordD]; */
    /*  plot(dataP(:,1),dataP(:,2),qp(1),qp(2),"*") */
    if ((areaD - y[1]) / (den - y[0]) > (v - areaD) / (coordC_idx_1 - den)) {
      coordB_idx_0 = coordC_idx_1 - den;
      coordC_idx_0 = den - den;
      coordA_idx_0 = y[0] - den;
      coordB_idx_1 = v - v;
      coordC_idx_1 = areaD - v;
      coordA_idx_1 = y[1] - v;
      den = coordB_idx_0 * coordC_idx_1 - coordC_idx_0 * coordB_idx_1;
      v = (coordA_idx_0 * coordC_idx_1 - coordC_idx_0 * coordA_idx_1) / den;
      coordA_idx_0 = (coordB_idx_0 * coordA_idx_1 - coordA_idx_0 * coordB_idx_1)
        / den;

      /* polyarea([qp(1),coordB(1),coordC(1)],[qp(2),coordB(2),coordC(2)]);%abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2; */
      /* polyarea([qp(1),coordA(1),coordC(1)],[qp(2),coordA(2),coordC(2)]);%abs(vecA(1)*vecC(2)-vecA(2)*vecC(1))/2; */
      den = (1.0 - v) - coordA_idx_0;

      /* polyarea([qp(1),coordA(1),coordB(1)],[qp(2),coordA(2),coordB(2)]);%abs(vecA(1)*vecB(2)-vecA(2)*vecB(1))/2; */
      areaD = 0.0;
    } else {
      /* plot([qp(1),coordC(1),coordD(1),qp(1)],[qp(2),coordC(2),coordD(2),qp(2)]) */
      /*  plot([qp(1),coordB(1),coordD(1),qp(1)],[qp(2),coordB(2),coordD(2),qp(2)]) */
      /* plot([qp(1),coordB(1),coordC(1),qp(1)],[qp(2),coordB(2),coordC(2),qp(2)]) */
      coordA_idx_0 = coordC_idx_1 - coordC_idx_1;
      coordA_idx_1 = areaD - v;
      coordC_idx_0 = den - coordC_idx_1;
      coordB_idx_0 = y[0] - coordC_idx_1;
      coordC_idx_1 = areaD - v;
      coordB_idx_1 = y[1] - v;
      den = coordC_idx_0 * coordA_idx_1 - coordA_idx_0 * coordC_idx_1;
      coordA_idx_0 = (coordB_idx_0 * coordA_idx_1 - coordA_idx_0 * coordB_idx_1)
        / den;
      den = (coordC_idx_0 * coordB_idx_1 - coordB_idx_0 * coordC_idx_1) / den;
      v = 0.0;

      /* polyarea([qp(1),coordC(1),coordD(1)],[qp(2),coordC(2),coordD(2)]);%abs(vecC(1)*vecD(2)-vecC(2)*vecD(1))/2; */
      /* polyarea([qp(1),coordB(1),coordD(1)],[qp(2),coordB(2),coordD(2)]);%abs(vecB(1)*vecD(2)-vecB(2)*vecD(1))/2; */
      areaD = (1.0 - coordA_idx_0) - den;

      /* polyarea([qp(1),coordB(1),coordC(1)],[qp(2),coordB(2),coordC(2)]);%abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2; */
    }

    /* /areaTri; */
    d_st.site = &ab_emlrtRSI;
    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &jb_emlrtBCI,
        &d_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &kb_emlrtBCI, &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &jb_emlrtBCI, &d_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &kb_emlrtBCI, &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &jb_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &kb_emlrtBCI,
        &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &jb_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &kb_emlrtBCI,
        &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    /*  log10 of electron density */
    /*     disp(logNe)  % debugging */
    d_st.site = &bb_emlrtRSI;

    /* triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:)); */
    d_st.site = &cb_emlrtRSI;
    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &jb_emlrtBCI,
        &d_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &kb_emlrtBCI, &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &jb_emlrtBCI, &d_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &kb_emlrtBCI, &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &jb_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &kb_emlrtBCI,
        &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &jb_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &kb_emlrtBCI,
        &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    /*  at phase space point */
    /*     disp(dLogNedz) */
    /* triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
    d_st.site = &db_emlrtRSI;
    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &jb_emlrtBCI,
        &d_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &kb_emlrtBCI, &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &jb_emlrtBCI, &d_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &kb_emlrtBCI, &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, 323, &jb_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &kb_emlrtBCI,
        &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, 323, &jb_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &kb_emlrtBCI,
        &d_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&d_st);
    }

    /* dot(bc',triValDLogNedr')';   % at phase space point */
    /*     disp(dLogNedr) */
    yp[0] = muDoubleScalarSign(odeFcn_tunableEnvironment_f1) *
      odeFcn_tunableEnvironment_f3[1] * y[2] / kVac;
    yp[1] = muDoubleScalarSign(odeFcn_tunableEnvironment_f1) *
      odeFcn_tunableEnvironment_f3[1] * y[3] / kVac;
    yp_tmp_tmp = 323 * ((int32_T)(ind2 - 1.0) - 1);
    b_yp_tmp_tmp = ((int32_T)(ind1 - 1.0) + 323 * ((int32_T)ind2 - 1)) - 1;
    c_yp_tmp_tmp = ((int32_T)ind1 + 323 * ((int32_T)ind2 - 1)) - 1;
    d_yp_tmp_tmp = ((int32_T)(ind1 - 1.0) + yp_tmp_tmp) - 1;
    yp_tmp_tmp = ((int32_T)ind1 + yp_tmp_tmp) - 1;
    coordC_idx_1 = -0.5 * odeFcn_tunableEnvironment_f3[2] *
      odeFcn_tunableEnvironment_f1 * (muDoubleScalarPower(10.0, ((v *
      f_odeFcn_tunableEnvironment_f2_[b_yp_tmp_tmp] + coordA_idx_0 *
      f_odeFcn_tunableEnvironment_f2_[c_yp_tmp_tmp]) + den *
      f_odeFcn_tunableEnvironment_f2_[d_yp_tmp_tmp]) + areaD *
      f_odeFcn_tunableEnvironment_f2_[yp_tmp_tmp]) / (1.1E+21 / (a * a)));
    yp[2] = coordC_idx_1 * (((v * g_odeFcn_tunableEnvironment_f2_[b_yp_tmp_tmp]
      + coordA_idx_0 * g_odeFcn_tunableEnvironment_f2_[c_yp_tmp_tmp]) + den *
      g_odeFcn_tunableEnvironment_f2_[d_yp_tmp_tmp]) + areaD *
      g_odeFcn_tunableEnvironment_f2_[yp_tmp_tmp]);
    yp[3] = coordC_idx_1 * (((v * h_odeFcn_tunableEnvironment_f2_[b_yp_tmp_tmp]
      + coordA_idx_0 * h_odeFcn_tunableEnvironment_f2_[c_yp_tmp_tmp]) + den *
      h_odeFcn_tunableEnvironment_f2_[d_yp_tmp_tmp]) + areaD *
      h_odeFcn_tunableEnvironment_f2_[yp_tmp_tmp]);

    /*  column vector  */
  } else {
    /*  move ray in a straight line */
    coordC_idx_1 = muDoubleScalarSign(odeFcn_tunableEnvironment_f1) *
      odeFcn_tunableEnvironment_f3[1];
    yp[0] = coordC_idx_1 * y[2] / kVac;
    yp[1] = coordC_idx_1 * y[3] / kVac;
    yp[2] = 0.0;
    yp[3] = 0.0;

    /*  column vector          */
  }
}

/* End of code generation (callODEFunctionNSM.c) */
