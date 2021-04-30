/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ode45.c
 *
 * Code generation for function 'ode45'
 *
 */

/* Include files */
#include "ode45.h"
#include "eps.h"
#include "num2str.h"
#include "propAlg.h"
#include "propAlg_emxutil.h"
#include "propAlg_types.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 70,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 17,  /* lineNo */
  "ode45",                             /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/ode45.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 518, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 382, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 369, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 372, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 371, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 341, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 330, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 311, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 276, /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 82,  /* lineNo */
  "ode2345",                           /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 11, /* lineNo */
  "callODEFunctionNSM",                /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/callODEFunctionNSM.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 47, /* lineNo */
  "function_handle/parenReference",    /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/function_handle.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 45, /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 82,  /* lineNo */
  5,                                   /* colNo */
  "fltpower",                          /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 47,/* lineNo */
  1,                                   /* colNo */
  "ode2345",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 49,/* lineNo */
  15,                                  /* colNo */
  "ode2345",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 271,/* lineNo */
  15,                                  /* colNo */
  "ode2345",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 217,/* lineNo */
  5,                                   /* colNo */
  "ode2345",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 218,/* lineNo */
  5,                                   /* colNo */
  "ode2345",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 542,/* lineNo */
  1,                                   /* colNo */
  "ode2345",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 543,/* lineNo */
  1,                                   /* colNo */
  "ode2345",                           /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/ode2345.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 14,/* lineNo */
  9,                                   /* colNo */
  "appendZeroColumns",                 /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/appendZeroColumns.m"/* pName */
};

static const real_T dv[21] = { 0.2, 0.075, 0.225, 0.97777777777777775,
  -3.7333333333333334, 3.5555555555555554, 2.9525986892242035,
  -11.595793324188385, 9.8228928516994358, -0.29080932784636487,
  2.8462752525252526, -10.757575757575758, 8.9064227177434727,
  0.27840909090909088, -0.2735313036020583, 0.091145833333333329, 0.0,
  0.44923629829290207, 0.65104166666666663, -0.322376179245283,
  0.13095238095238096 };

static const real_T dv1[7] = { 0.0012326388888888888, 0.0,
  -0.0042527702905061394, 0.036979166666666667, -0.05086379716981132,
  0.0419047619047619, -0.025 };

static const real_T dv2[7] = { -2.859375, 0.0, 4.0431266846361185, -3.90625,
  2.7939268867924527, -1.5714285714285714, 1.5 };

static const real_T dv3[7] = { 3.0833333333333335, 0.0, -6.2893081761006293,
  10.416666666666666, -6.8773584905660377, 3.6666666666666665, -4.0 };

static const real_T dv4[7] = { -1.1328125, 0.0, 2.6954177897574123, -5.859375,
  3.7610554245283021, -1.9642857142857142, 2.5 };

/* Function Definitions */
void b_ode45(const emlrtStack *sp, real_T ode_tunableEnvironment_f1, const
             real_T c_ode_tunableEnvironment_f2_dom[4], const emxArray_real_T
             *ode_tunableEnvironment_f2_zVal, const emxArray_real_T
             *ode_tunableEnvironment_f2_rVal, const emxArray_real_T
             *c_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *d_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *e_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *f_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *g_ode_tunableEnvironment_f2_gri, const emxArray_real_T
             *h_ode_tunableEnvironment_f2_gri, const real_T
             ode_tunableEnvironment_f3[6], const real_T
             ode_tunableEnvironment_f4[4], const real_T tspan[2], const real_T
             b_y0[4], emxArray_real_T *varargout_1, emxArray_real_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *tout;
  emxArray_real_T *yout;
  real_T f[28];
  real_T youtnew[16];
  real_T b_y[4];
  real_T f0[4];
  real_T fhBI1[4];
  real_T fhBI3[4];
  real_T fhBI4[4];
  real_T ynew[4];
  real_T ystage[4];
  real_T tref[3];
  real_T absh;
  real_T absx;
  real_T d;
  real_T d1;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T err;
  real_T h;
  real_T h_tmp;
  real_T hmax;
  real_T hmin;
  real_T s;
  real_T t;
  real_T tdir;
  real_T tfinal;
  real_T tnew;
  real_T y;
  int32_T Bcolidx;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T i1;
  int32_T ia;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T nout;
  int32_T outidx;
  char_T cv[23];
  char_T cv1[23];
  boolean_T Done;
  boolean_T MinStepExit;
  boolean_T NoFailedAttempts;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &o_emlrtRSI;
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "MATLAB:odearguments:TspanEndpointsNotDistinct",
      "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }

  MinStepExit = true;
  if (!(tspan[1] > tspan[0])) {
    MinStepExit = (tspan[0] > tspan[1]);
  }

  if (!MinStepExit) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "MATLAB:odearguments:TspanNotMonotonic",
      "MATLAB:odearguments:TspanNotMonotonic", 0);
  }

  emxInit_real_T(&st, &tout, 2, &i_emlrtRTEI, true);
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  b_anon(&d_st, ode_tunableEnvironment_f1, c_ode_tunableEnvironment_f2_dom,
         ode_tunableEnvironment_f2_zVal, ode_tunableEnvironment_f2_rVal,
         c_ode_tunableEnvironment_f2_gri, d_ode_tunableEnvironment_f2_gri,
         e_ode_tunableEnvironment_f2_gri, f_ode_tunableEnvironment_f2_gri,
         g_ode_tunableEnvironment_f2_gri, h_ode_tunableEnvironment_f2_gri,
         ode_tunableEnvironment_f3, ode_tunableEnvironment_f4, b_y0, f0);
  i = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = 200;
  emxEnsureCapacity_real_T(&st, tout, i, &i_emlrtRTEI);
  for (i = 0; i < 200; i++) {
    tout->data[i] = 0.0;
  }

  emxInit_real_T(&st, &yout, 2, &j_emlrtRTEI, true);
  i = yout->size[0] * yout->size[1];
  yout->size[0] = 4;
  yout->size[1] = 200;
  emxEnsureCapacity_real_T(&st, yout, i, &j_emlrtRTEI);
  for (i = 0; i < 800; i++) {
    yout->data[i] = 0.0;
  }

  nout = 0;
  tout->data[0] = tspan[0];
  yout->data[0] = b_y0[0];
  yout->data[1] = b_y0[1];
  yout->data[2] = b_y0[2];
  yout->data[3] = b_y0[3];
  h = tspan[1] - tspan[0];
  absx = muDoubleScalarAbs(h);
  hmax = muDoubleScalarMin(absx, muDoubleScalarMax(0.1 * absx,
    3.5527136788005009E-15 * muDoubleScalarMax(muDoubleScalarAbs(tspan[0]),
    muDoubleScalarAbs(tspan[1]))));
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
      "MATLAB:odearguments:MaxStepLEzero", "MATLAB:odearguments:MaxStepLEzero",
      0);
  }

  b_st.site = &x_emlrtRSI;
  hmin = 16.0 * eps(tspan[0]);
  absh = muDoubleScalarMin(hmax, absx);
  y = 0.0;
  absx = muDoubleScalarAbs(f0[0] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[0]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > 0.0)) {
    y = absx;
  }

  absx = muDoubleScalarAbs(f0[1] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[1]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > y)) {
    y = absx;
  }

  absx = muDoubleScalarAbs(f0[2] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[2]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > y)) {
    y = absx;
  }

  absx = muDoubleScalarAbs(f0[3] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[3]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > y)) {
    y = absx;
  }

  absx = y / 0.20095091452076641;
  if (absh * absx > 1.0) {
    absh = 1.0 / absx;
  }

  absh = muDoubleScalarMax(absh, hmin);
  t = tspan[0];
  b_y[0] = b_y0[0];
  b_y[1] = b_y0[1];
  b_y[2] = b_y0[2];
  b_y[3] = b_y0[3];
  memset(&f[0], 0, 28U * sizeof(real_T));
  f[0] = f0[0];
  f[1] = f0[1];
  f[2] = f0[2];
  f[3] = f0[3];
  tdir = muDoubleScalarSign(h);
  MinStepExit = false;
  Done = false;
  do {
    exitg1 = 0;
    b_st.site = &w_emlrtRSI;
    hmin = 16.0 * eps(t);
    absh = muDoubleScalarMin(hmax, muDoubleScalarMax(hmin, absh));
    h = tdir * absh;
    d = tfinal - t;
    d1 = muDoubleScalarAbs(d);
    if (1.1 * absh >= d1) {
      h = d;
      absh = d1;
      Done = true;
    }

    NoFailedAttempts = true;
    do {
      exitg2 = 0;
      Bcolidx = 0;
      for (j = 0; j < 5; j++) {
        Bcolidx += j;
        ystage[0] = b_y[0];
        ystage[1] = b_y[1];
        ystage[2] = b_y[2];
        ystage[3] = b_y[3];
        if (!(h == 0.0)) {
          ix = Bcolidx;
          i = (j << 2) + 1;
          for (outidx = 1; outidx <= i; outidx += 4) {
            absx = h * dv[ix];
            iy = 0;
            i1 = outidx + 3;
            for (ia = outidx; ia <= i1; ia++) {
              ystage[iy] += f[ia - 1] * absx;
              iy++;
            }

            ix++;
          }
        }

        b_st.site = &v_emlrtRSI;
        c_st.site = &ab_emlrtRSI;
        d_st.site = &bb_emlrtRSI;
        b_anon(&d_st, ode_tunableEnvironment_f1, c_ode_tunableEnvironment_f2_dom,
               ode_tunableEnvironment_f2_zVal, ode_tunableEnvironment_f2_rVal,
               c_ode_tunableEnvironment_f2_gri, d_ode_tunableEnvironment_f2_gri,
               e_ode_tunableEnvironment_f2_gri, f_ode_tunableEnvironment_f2_gri,
               g_ode_tunableEnvironment_f2_gri, h_ode_tunableEnvironment_f2_gri,
               ode_tunableEnvironment_f3, ode_tunableEnvironment_f4, ystage,
               *(real_T (*)[4])&f[(j + 1) << 2]);
      }

      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }

      ynew[0] = b_y[0];
      ynew[1] = b_y[1];
      ynew[2] = b_y[2];
      ynew[3] = b_y[3];
      if (!(h == 0.0)) {
        for (outidx = 0; outidx <= 20; outidx += 4) {
          absx = h * dv[Bcolidx + 5];
          iy = 0;
          i = outidx + 4;
          for (ia = outidx + 1; ia <= i; ia++) {
            ynew[iy] += f[ia - 1] * absx;
            iy++;
          }

          Bcolidx++;
        }
      }

      b_st.site = &u_emlrtRSI;
      c_st.site = &ab_emlrtRSI;
      d_st.site = &bb_emlrtRSI;
      b_anon(&d_st, ode_tunableEnvironment_f1, c_ode_tunableEnvironment_f2_dom,
             ode_tunableEnvironment_f2_zVal, ode_tunableEnvironment_f2_rVal,
             c_ode_tunableEnvironment_f2_gri, d_ode_tunableEnvironment_f2_gri,
             e_ode_tunableEnvironment_f2_gri, f_ode_tunableEnvironment_f2_gri,
             g_ode_tunableEnvironment_f2_gri, h_ode_tunableEnvironment_f2_gri,
             ode_tunableEnvironment_f3, ode_tunableEnvironment_f4, ynew,
             *(real_T (*)[4])&f[24]);
      h_tmp = tnew - t;
      y = 0.0;
      for (ix = 0; ix < 4; ix++) {
        absx = muDoubleScalarAbs(b_y[ix]);
        h = muDoubleScalarAbs(ynew[ix]);
        if ((absx > h) || muDoubleScalarIsNaN(h)) {
          d = muDoubleScalarMax(absx, 0.001);
        } else {
          d = muDoubleScalarMax(h, 0.001);
        }

        d1 = 0.0;
        for (i = 0; i < 7; i++) {
          d1 += f[ix + (i << 2)] * dv1[i];
        }

        absx = muDoubleScalarAbs(d1 / d);
        if (muDoubleScalarIsNaN(absx) || (absx > y)) {
          y = absx;
        }
      }

      err = absh * y;
      if (err > 0.001) {
        if (absh <= hmin) {
          b_st.site = &t_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &s_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &r_emlrtRSI;
          warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &q_emlrtRSI;
            c_st.site = &jb_emlrtRSI;
            absh = muDoubleScalarMax(hmin, absh * muDoubleScalarMax(0.1, 0.8 *
              muDoubleScalarPower(0.001 / err, 0.2)));
          } else {
            absh = muDoubleScalarMax(hmin, 0.5 * absh);
          }

          h = tdir * absh;
          Done = false;
        }
      } else {
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (MinStepExit) {
      exitg1 = 1;
    } else {
      outidx = nout + 1;
      d = t + h_tmp * 0.25;
      tref[0] = d;
      ystage[0] = d;
      d = t + h_tmp * 0.5;
      tref[1] = d;
      ystage[1] = d;
      d = t + h_tmp * 0.75;
      tref[2] = d;
      ystage[2] = d;
      ystage[3] = tnew;
      for (i = 0; i < 4; i++) {
        fhBI1[i] = f[i] * h_tmp;
        d = 0.0;
        d1 = 0.0;
        absx = 0.0;
        for (i1 = 0; i1 < 7; i1++) {
          h = f[i + (i1 << 2)];
          d += h * (h_tmp * dv2[i1]);
          d1 += h * (h_tmp * dv3[i1]);
          absx += h * (h_tmp * dv4[i1]);
        }

        fhBI4[i] = absx;
        fhBI3[i] = d1;
        f0[i] = d;
      }

      d = fhBI4[0];
      d1 = fhBI4[1];
      absx = fhBI4[2];
      h = fhBI4[3];
      y = fhBI3[0];
      hmin = fhBI3[1];
      d2 = fhBI3[2];
      d3 = fhBI3[3];
      d4 = f0[0];
      d5 = f0[1];
      d6 = f0[2];
      d7 = f0[3];
      d8 = fhBI1[0];
      d9 = fhBI1[1];
      d10 = fhBI1[2];
      d11 = fhBI1[3];
      d12 = b_y[0];
      d13 = b_y[1];
      d14 = b_y[2];
      d15 = b_y[3];
      for (j = 0; j < 3; j++) {
        s = (tref[j] - t) / h_tmp;
        Bcolidx = j << 2;
        youtnew[Bcolidx] = (((d * s + y) * s + d4) * s + d8) * s + d12;
        youtnew[Bcolidx + 1] = (((d1 * s + hmin) * s + d5) * s + d9) * s + d13;
        youtnew[Bcolidx + 2] = (((absx * s + d2) * s + d6) * s + d10) * s + d14;
        youtnew[Bcolidx + 3] = (((h * s + d3) * s + d7) * s + d11) * s + d15;
      }

      youtnew[12] = ynew[0];
      youtnew[13] = ynew[1];
      youtnew[14] = ynew[2];
      youtnew[15] = ynew[3];
      nout += 4;
      if (nout + 1 > tout->size[1]) {
        Bcolidx = tout->size[1];
        i = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] += 200;
        emxEnsureCapacity_real_T(&st, tout, i, &m_emlrtRTEI);
        ix = yout->size[1];
        i = yout->size[0] * yout->size[1];
        yout->size[0] = 4;
        yout->size[1] += 200;
        emxEnsureCapacity_real_T(&st, yout, i, &m_emlrtRTEI);
        for (j = 0; j < 200; j++) {
          tout->data[Bcolidx + j] = 0.0;
          iy = ix + j;
          yout->data[4 * iy] = 0.0;
          yout->data[4 * iy + 1] = 0.0;
          yout->data[4 * iy + 2] = 0.0;
          yout->data[4 * iy + 3] = 0.0;
        }
      }

      for (ix = 0; ix < 4; ix++) {
        Bcolidx = ix + outidx;
        tout->data[Bcolidx] = ystage[ix];
        iy = ix << 2;
        yout->data[4 * Bcolidx] = youtnew[iy];
        yout->data[4 * Bcolidx + 1] = youtnew[iy + 1];
        yout->data[4 * Bcolidx + 2] = youtnew[iy + 2];
        yout->data[4 * Bcolidx + 3] = youtnew[iy + 3];
      }

      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &p_emlrtRSI;
          absx = err / 0.001;
          c_st.site = &jb_emlrtRSI;
          d_st.site = &n_emlrtRSI;
          if (absx < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
              "Coder:toolbox:power_domainError",
              "Coder:toolbox:power_domainError", 0);
          }

          absx = 1.25 * muDoubleScalarPower(absx, 0.2);
          if (absx > 0.2) {
            absh /= absx;
          } else {
            absh *= 5.0;
          }
        }

        t = tnew;
        b_y[0] = ynew[0];
        f[0] = f[24];
        b_y[1] = ynew[1];
        f[1] = f[25];
        b_y[2] = ynew[2];
        f[2] = f[26];
        b_y[3] = ynew[3];
        f[3] = f[27];
      }
    }
  } while (exitg1 == 0);

  if (1 > nout + 1) {
    Bcolidx = -1;
  } else {
    Bcolidx = nout;
  }

  i = varargout_1->size[0];
  varargout_1->size[0] = Bcolidx + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &k_emlrtRTEI);
  for (i = 0; i <= Bcolidx; i++) {
    varargout_1->data[i] = tout->data[i];
  }

  emxFree_real_T(&tout);
  if (1 > nout + 1) {
    Bcolidx = -1;
  } else {
    Bcolidx = nout;
  }

  i = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = Bcolidx + 1;
  varargout_2->size[1] = 4;
  emxEnsureCapacity_real_T(&st, varargout_2, i, &l_emlrtRTEI);
  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i] = yout->data[4 * i];
  }

  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i + varargout_2->size[0]] = yout->data[4 * i + 1];
  }

  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i + varargout_2->size[0] * 2] = yout->data[4 * i + 2];
  }

  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i + varargout_2->size[0] * 3] = yout->data[4 * i + 3];
  }

  emxFree_real_T(&yout);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void ode45(const emlrtStack *sp, real_T ode_tunableEnvironment_f1, const real_T
           c_ode_tunableEnvironment_f2_dom[4], const emxArray_real_T
           *ode_tunableEnvironment_f2_zVal, const emxArray_real_T
           *ode_tunableEnvironment_f2_rVal, const emxArray_real_T
           *c_ode_tunableEnvironment_f2_gri, const emxArray_real_T
           *d_ode_tunableEnvironment_f2_gri, const emxArray_real_T
           *e_ode_tunableEnvironment_f2_gri, const real_T
           ode_tunableEnvironment_f3[6], const real_T ode_tunableEnvironment_f4
           [4], const real_T tspan[2], const real_T b_y0[4], emxArray_real_T
           *varargout_1, emxArray_real_T *varargout_2)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *tout;
  emxArray_real_T *yout;
  real_T f[28];
  real_T youtnew[16];
  real_T b_y[4];
  real_T f0[4];
  real_T fhBI1[4];
  real_T fhBI3[4];
  real_T fhBI4[4];
  real_T ynew[4];
  real_T ystage[4];
  real_T tref[3];
  real_T absh;
  real_T absx;
  real_T d;
  real_T d1;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T err;
  real_T h;
  real_T h_tmp;
  real_T hmax;
  real_T hmin;
  real_T s;
  real_T t;
  real_T tdir;
  real_T tfinal;
  real_T tnew;
  real_T y;
  int32_T Bcolidx;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T i1;
  int32_T ia;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int32_T nout;
  int32_T outidx;
  char_T cv[23];
  char_T cv1[23];
  boolean_T Done;
  boolean_T MinStepExit;
  boolean_T NoFailedAttempts;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &o_emlrtRSI;
  tfinal = tspan[1];
  if (tspan[0] == tspan[1]) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "MATLAB:odearguments:TspanEndpointsNotDistinct",
      "MATLAB:odearguments:TspanEndpointsNotDistinct", 0);
  }

  MinStepExit = true;
  if (!(tspan[1] > tspan[0])) {
    MinStepExit = (tspan[0] > tspan[1]);
  }

  if (!MinStepExit) {
    emlrtErrorWithMessageIdR2018a(&st, &c_emlrtRTEI,
      "MATLAB:odearguments:TspanNotMonotonic",
      "MATLAB:odearguments:TspanNotMonotonic", 0);
  }

  emxInit_real_T(&st, &tout, 2, &i_emlrtRTEI, true);
  b_st.site = &y_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  d_st.site = &bb_emlrtRSI;
  anon(&d_st, ode_tunableEnvironment_f1, c_ode_tunableEnvironment_f2_dom,
       ode_tunableEnvironment_f2_zVal, ode_tunableEnvironment_f2_rVal,
       c_ode_tunableEnvironment_f2_gri, d_ode_tunableEnvironment_f2_gri,
       e_ode_tunableEnvironment_f2_gri, ode_tunableEnvironment_f3,
       ode_tunableEnvironment_f4, b_y0, f0);
  i = tout->size[0] * tout->size[1];
  tout->size[0] = 1;
  tout->size[1] = 200;
  emxEnsureCapacity_real_T(&st, tout, i, &i_emlrtRTEI);
  for (i = 0; i < 200; i++) {
    tout->data[i] = 0.0;
  }

  emxInit_real_T(&st, &yout, 2, &j_emlrtRTEI, true);
  i = yout->size[0] * yout->size[1];
  yout->size[0] = 4;
  yout->size[1] = 200;
  emxEnsureCapacity_real_T(&st, yout, i, &j_emlrtRTEI);
  for (i = 0; i < 800; i++) {
    yout->data[i] = 0.0;
  }

  nout = 0;
  tout->data[0] = tspan[0];
  yout->data[0] = b_y0[0];
  yout->data[1] = b_y0[1];
  yout->data[2] = b_y0[2];
  yout->data[3] = b_y0[3];
  h = tspan[1] - tspan[0];
  absx = muDoubleScalarAbs(h);
  hmax = muDoubleScalarMin(absx, muDoubleScalarMax(0.1 * absx,
    3.5527136788005009E-15 * muDoubleScalarMax(muDoubleScalarAbs(tspan[0]),
    muDoubleScalarAbs(tspan[1]))));
  if (!(hmax > 0.0)) {
    emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI,
      "MATLAB:odearguments:MaxStepLEzero", "MATLAB:odearguments:MaxStepLEzero",
      0);
  }

  b_st.site = &x_emlrtRSI;
  hmin = 16.0 * eps(tspan[0]);
  absh = muDoubleScalarMin(hmax, absx);
  y = 0.0;
  absx = muDoubleScalarAbs(f0[0] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[0]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > 0.0)) {
    y = absx;
  }

  absx = muDoubleScalarAbs(f0[1] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[1]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > y)) {
    y = absx;
  }

  absx = muDoubleScalarAbs(f0[2] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[2]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > y)) {
    y = absx;
  }

  absx = muDoubleScalarAbs(f0[3] / muDoubleScalarMax(muDoubleScalarAbs(b_y0[3]),
    0.001));
  if (muDoubleScalarIsNaN(absx) || (absx > y)) {
    y = absx;
  }

  absx = y / 0.20095091452076641;
  if (absh * absx > 1.0) {
    absh = 1.0 / absx;
  }

  absh = muDoubleScalarMax(absh, hmin);
  t = tspan[0];
  b_y[0] = b_y0[0];
  b_y[1] = b_y0[1];
  b_y[2] = b_y0[2];
  b_y[3] = b_y0[3];
  memset(&f[0], 0, 28U * sizeof(real_T));
  f[0] = f0[0];
  f[1] = f0[1];
  f[2] = f0[2];
  f[3] = f0[3];
  tdir = muDoubleScalarSign(h);
  MinStepExit = false;
  Done = false;
  do {
    exitg1 = 0;
    b_st.site = &w_emlrtRSI;
    hmin = 16.0 * eps(t);
    absh = muDoubleScalarMin(hmax, muDoubleScalarMax(hmin, absh));
    h = tdir * absh;
    d = tfinal - t;
    d1 = muDoubleScalarAbs(d);
    if (1.1 * absh >= d1) {
      h = d;
      absh = d1;
      Done = true;
    }

    NoFailedAttempts = true;
    do {
      exitg2 = 0;
      Bcolidx = 0;
      for (j = 0; j < 5; j++) {
        Bcolidx += j;
        ystage[0] = b_y[0];
        ystage[1] = b_y[1];
        ystage[2] = b_y[2];
        ystage[3] = b_y[3];
        if (!(h == 0.0)) {
          ix = Bcolidx;
          i = (j << 2) + 1;
          for (outidx = 1; outidx <= i; outidx += 4) {
            absx = h * dv[ix];
            iy = 0;
            i1 = outidx + 3;
            for (ia = outidx; ia <= i1; ia++) {
              ystage[iy] += f[ia - 1] * absx;
              iy++;
            }

            ix++;
          }
        }

        b_st.site = &v_emlrtRSI;
        c_st.site = &ab_emlrtRSI;
        d_st.site = &bb_emlrtRSI;
        anon(&d_st, ode_tunableEnvironment_f1, c_ode_tunableEnvironment_f2_dom,
             ode_tunableEnvironment_f2_zVal, ode_tunableEnvironment_f2_rVal,
             c_ode_tunableEnvironment_f2_gri, d_ode_tunableEnvironment_f2_gri,
             e_ode_tunableEnvironment_f2_gri, ode_tunableEnvironment_f3,
             ode_tunableEnvironment_f4, ystage, *(real_T (*)[4])&f[(j + 1) << 2]);
      }

      tnew = t + h;
      if (Done) {
        tnew = tfinal;
      }

      ynew[0] = b_y[0];
      ynew[1] = b_y[1];
      ynew[2] = b_y[2];
      ynew[3] = b_y[3];
      if (!(h == 0.0)) {
        for (outidx = 0; outidx <= 20; outidx += 4) {
          absx = h * dv[Bcolidx + 5];
          iy = 0;
          i = outidx + 4;
          for (ia = outidx + 1; ia <= i; ia++) {
            ynew[iy] += f[ia - 1] * absx;
            iy++;
          }

          Bcolidx++;
        }
      }

      b_st.site = &u_emlrtRSI;
      c_st.site = &ab_emlrtRSI;
      d_st.site = &bb_emlrtRSI;
      anon(&d_st, ode_tunableEnvironment_f1, c_ode_tunableEnvironment_f2_dom,
           ode_tunableEnvironment_f2_zVal, ode_tunableEnvironment_f2_rVal,
           c_ode_tunableEnvironment_f2_gri, d_ode_tunableEnvironment_f2_gri,
           e_ode_tunableEnvironment_f2_gri, ode_tunableEnvironment_f3,
           ode_tunableEnvironment_f4, ynew, *(real_T (*)[4])&f[24]);
      h_tmp = tnew - t;
      y = 0.0;
      for (ix = 0; ix < 4; ix++) {
        absx = muDoubleScalarAbs(b_y[ix]);
        h = muDoubleScalarAbs(ynew[ix]);
        if ((absx > h) || muDoubleScalarIsNaN(h)) {
          d = muDoubleScalarMax(absx, 0.001);
        } else {
          d = muDoubleScalarMax(h, 0.001);
        }

        d1 = 0.0;
        for (i = 0; i < 7; i++) {
          d1 += f[ix + (i << 2)] * dv1[i];
        }

        absx = muDoubleScalarAbs(d1 / d);
        if (muDoubleScalarIsNaN(absx) || (absx > y)) {
          y = absx;
        }
      }

      err = absh * y;
      if (err > 0.001) {
        if (absh <= hmin) {
          b_st.site = &t_emlrtRSI;
          num2str(&b_st, t, cv);
          b_st.site = &s_emlrtRSI;
          num2str(&b_st, hmin, cv1);
          b_st.site = &r_emlrtRSI;
          warning(&b_st, cv, cv1);
          MinStepExit = true;
          exitg2 = 1;
        } else {
          if (NoFailedAttempts) {
            NoFailedAttempts = false;
            b_st.site = &q_emlrtRSI;
            c_st.site = &jb_emlrtRSI;
            absh = muDoubleScalarMax(hmin, absh * muDoubleScalarMax(0.1, 0.8 *
              muDoubleScalarPower(0.001 / err, 0.2)));
          } else {
            absh = muDoubleScalarMax(hmin, 0.5 * absh);
          }

          h = tdir * absh;
          Done = false;
        }
      } else {
        exitg2 = 1;
      }
    } while (exitg2 == 0);

    if (MinStepExit) {
      exitg1 = 1;
    } else {
      outidx = nout + 1;
      d = t + h_tmp * 0.25;
      tref[0] = d;
      ystage[0] = d;
      d = t + h_tmp * 0.5;
      tref[1] = d;
      ystage[1] = d;
      d = t + h_tmp * 0.75;
      tref[2] = d;
      ystage[2] = d;
      ystage[3] = tnew;
      for (i = 0; i < 4; i++) {
        fhBI1[i] = f[i] * h_tmp;
        d = 0.0;
        d1 = 0.0;
        absx = 0.0;
        for (i1 = 0; i1 < 7; i1++) {
          h = f[i + (i1 << 2)];
          d += h * (h_tmp * dv2[i1]);
          d1 += h * (h_tmp * dv3[i1]);
          absx += h * (h_tmp * dv4[i1]);
        }

        fhBI4[i] = absx;
        fhBI3[i] = d1;
        f0[i] = d;
      }

      d = fhBI4[0];
      d1 = fhBI4[1];
      absx = fhBI4[2];
      h = fhBI4[3];
      y = fhBI3[0];
      hmin = fhBI3[1];
      d2 = fhBI3[2];
      d3 = fhBI3[3];
      d4 = f0[0];
      d5 = f0[1];
      d6 = f0[2];
      d7 = f0[3];
      d8 = fhBI1[0];
      d9 = fhBI1[1];
      d10 = fhBI1[2];
      d11 = fhBI1[3];
      d12 = b_y[0];
      d13 = b_y[1];
      d14 = b_y[2];
      d15 = b_y[3];
      for (j = 0; j < 3; j++) {
        s = (tref[j] - t) / h_tmp;
        Bcolidx = j << 2;
        youtnew[Bcolidx] = (((d * s + y) * s + d4) * s + d8) * s + d12;
        youtnew[Bcolidx + 1] = (((d1 * s + hmin) * s + d5) * s + d9) * s + d13;
        youtnew[Bcolidx + 2] = (((absx * s + d2) * s + d6) * s + d10) * s + d14;
        youtnew[Bcolidx + 3] = (((h * s + d3) * s + d7) * s + d11) * s + d15;
      }

      youtnew[12] = ynew[0];
      youtnew[13] = ynew[1];
      youtnew[14] = ynew[2];
      youtnew[15] = ynew[3];
      nout += 4;
      if (nout + 1 > tout->size[1]) {
        Bcolidx = tout->size[1];
        i = tout->size[0] * tout->size[1];
        tout->size[0] = 1;
        tout->size[1] += 200;
        emxEnsureCapacity_real_T(&st, tout, i, &m_emlrtRTEI);
        ix = yout->size[1];
        i = yout->size[0] * yout->size[1];
        yout->size[0] = 4;
        yout->size[1] += 200;
        emxEnsureCapacity_real_T(&st, yout, i, &m_emlrtRTEI);
        for (j = 0; j < 200; j++) {
          tout->data[Bcolidx + j] = 0.0;
          iy = ix + j;
          yout->data[4 * iy] = 0.0;
          yout->data[4 * iy + 1] = 0.0;
          yout->data[4 * iy + 2] = 0.0;
          yout->data[4 * iy + 3] = 0.0;
        }
      }

      for (ix = 0; ix < 4; ix++) {
        Bcolidx = ix + outidx;
        tout->data[Bcolidx] = ystage[ix];
        iy = ix << 2;
        yout->data[4 * Bcolidx] = youtnew[iy];
        yout->data[4 * Bcolidx + 1] = youtnew[iy + 1];
        yout->data[4 * Bcolidx + 2] = youtnew[iy + 2];
        yout->data[4 * Bcolidx + 3] = youtnew[iy + 3];
      }

      if (Done) {
        exitg1 = 1;
      } else {
        if (NoFailedAttempts) {
          b_st.site = &p_emlrtRSI;
          absx = err / 0.001;
          c_st.site = &jb_emlrtRSI;
          d_st.site = &n_emlrtRSI;
          if (absx < 0.0) {
            emlrtErrorWithMessageIdR2018a(&d_st, &emlrtRTEI,
              "Coder:toolbox:power_domainError",
              "Coder:toolbox:power_domainError", 0);
          }

          absx = 1.25 * muDoubleScalarPower(absx, 0.2);
          if (absx > 0.2) {
            absh /= absx;
          } else {
            absh *= 5.0;
          }
        }

        t = tnew;
        b_y[0] = ynew[0];
        f[0] = f[24];
        b_y[1] = ynew[1];
        f[1] = f[25];
        b_y[2] = ynew[2];
        f[2] = f[26];
        b_y[3] = ynew[3];
        f[3] = f[27];
      }
    }
  } while (exitg1 == 0);

  if (1 > nout + 1) {
    Bcolidx = -1;
  } else {
    Bcolidx = nout;
  }

  i = varargout_1->size[0];
  varargout_1->size[0] = Bcolidx + 1;
  emxEnsureCapacity_real_T(&st, varargout_1, i, &k_emlrtRTEI);
  for (i = 0; i <= Bcolidx; i++) {
    varargout_1->data[i] = tout->data[i];
  }

  emxFree_real_T(&tout);
  if (1 > nout + 1) {
    Bcolidx = -1;
  } else {
    Bcolidx = nout;
  }

  i = varargout_2->size[0] * varargout_2->size[1];
  varargout_2->size[0] = Bcolidx + 1;
  varargout_2->size[1] = 4;
  emxEnsureCapacity_real_T(&st, varargout_2, i, &l_emlrtRTEI);
  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i] = yout->data[4 * i];
  }

  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i + varargout_2->size[0]] = yout->data[4 * i + 1];
  }

  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i + varargout_2->size[0] * 2] = yout->data[4 * i + 2];
  }

  for (i = 0; i <= Bcolidx; i++) {
    varargout_2->data[i + varargout_2->size[0] * 3] = yout->data[4 * i + 3];
  }

  emxFree_real_T(&yout);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (ode45.c) */
