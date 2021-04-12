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
static emlrtRSInfo v_emlrtRSI = { 11,  /* lineNo */
  "callODEFunctionNSM",                /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/funfun/private/callODEFunctionNSM.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 47,  /* lineNo */
  "function_handle/parenReference",    /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/function_handle.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 119, /* lineNo */
  "@(t,y) odeEmRayFun(t,y,omega_ps, ...\n                                                rayGd,cnstVar)",/* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 318,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 323,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 327,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/eval/runTIme/RectInterp/pushBundleRectMulti.m"/* pathName */
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
  emlrtStack st;
  real_T a;
  real_T b_netonc_tmp;
  real_T c_netonc_tmp;
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
  st.site = &v_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;

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
  lambdaum_tmp = muDoubleScalarAbs(odeFcn_tunableEnvironment_f1);
  a = odeFcn_tunableEnvironment_f3[3] * odeFcn_tunableEnvironment_f3[1] /
    lambdaum_tmp;

  /*  vac wavelength microns */
  kVac = lambdaum_tmp / odeFcn_tunableEnvironment_f3[1];

  /*  vacuum wavenumber 1/um */
  /*  crit density in 1/cm^3 */
  /*  current position at phase space point y */
  /*  current ray wavevector at phase space point y */
  /* goodPt = 1; */
  if (inDomain(*(real_T (*)[2])&y[0], c_odeFcn_tunableEnvironment_f2_)) {
    /*  interpolation for current position */
    /* [ti,bc] = pointLocation(rayGd.DT,x');  % Delauney triangles     */
    /* triValNe = rayGd.valsNe(rayGd.DT(ti,:)); */
    d_st.site = &jb_emlrtRSI;
    lambdaum_tmp = closest_val(&d_st, e_odeFcn_tunableEnvironment_f2_, y[0]);
    d_st.site = &kb_emlrtRSI;
    ind2 = b_closest_val(&d_st, d_odeFcn_tunableEnvironment_f2_, y[1]);
    d_st.site = &ab_emlrtRSI;
    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &t_emlrtBCI, &d_st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, 168, &u_emlrtBCI, &d_st);
    }

    if (((int32_T)lambdaum_tmp < 1) || ((int32_T)lambdaum_tmp > 323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)lambdaum_tmp, 1, 323, &v_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &w_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &x_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &y_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &ab_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &bb_emlrtBCI,
        &d_st);
    }

    /*  log10 of electron density */
    /*     disp(logNe)  % debugging */
    netonc_tmp = 323 * ((int32_T)ind2 - 1);
    b_netonc_tmp = e_odeFcn_tunableEnvironment_f2_[(int32_T)lambdaum_tmp - 1];
    c_netonc_tmp = e_odeFcn_tunableEnvironment_f2_[(int32_T)(lambdaum_tmp - 1.0)
      - 1];
    d_netonc_tmp = b_netonc_tmp - y[0];
    e_netonc_tmp = 323 * ((int32_T)(ind2 - 1.0) - 1);
    f_netonc_tmp = y[0] - c_netonc_tmp;
    b_netonc_tmp -= c_netonc_tmp;
    c_netonc_tmp = d_odeFcn_tunableEnvironment_f2_[(int32_T)ind2 - 1];
    g_netonc_tmp = d_odeFcn_tunableEnvironment_f2_[(int32_T)(ind2 - 1.0) - 1];
    h_netonc_tmp = ((int32_T)(lambdaum_tmp - 1.0) + netonc_tmp) - 1;
    netonc_tmp = ((int32_T)lambdaum_tmp + netonc_tmp) - 1;
    i_netonc_tmp = y[1] - g_netonc_tmp;
    j_netonc_tmp = ((int32_T)(lambdaum_tmp - 1.0) + e_netonc_tmp) - 1;
    e_netonc_tmp = ((int32_T)lambdaum_tmp + e_netonc_tmp) - 1;
    k_netonc_tmp = c_netonc_tmp - y[1];
    c_netonc_tmp -= g_netonc_tmp;

    /* triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:)); */
    d_st.site = &cb_emlrtRSI;
    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &t_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &w_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &x_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &y_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &ab_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &bb_emlrtBCI,
        &d_st);
    }

    /*  at phase space point */
    /*     disp(dLogNedz) */
    /* triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
    d_st.site = &db_emlrtRSI;
    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &t_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &w_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &x_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &y_emlrtBCI,
        &d_st);
    }

    if (((int32_T)(lambdaum_tmp - 1.0) < 1) || ((int32_T)(lambdaum_tmp - 1.0) >
         323)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(lambdaum_tmp - 1.0), 1, 323,
        &ab_emlrtBCI, &d_st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > 168)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, 168, &bb_emlrtBCI,
        &d_st);
    }

    /* dot(bc',triValDLogNedr')';   % at phase space point */
    /*     disp(dLogNedr) */
    yp[0] = muDoubleScalarSign(odeFcn_tunableEnvironment_f1) *
      odeFcn_tunableEnvironment_f3[1] * y[2] / kVac;
    yp[1] = muDoubleScalarSign(odeFcn_tunableEnvironment_f1) *
      odeFcn_tunableEnvironment_f3[1] * y[3] / kVac;
    lambdaum_tmp = -0.5 * odeFcn_tunableEnvironment_f3[2] *
      odeFcn_tunableEnvironment_f1 * (muDoubleScalarPower(10.0,
      ((f_odeFcn_tunableEnvironment_f2_[h_netonc_tmp] * d_netonc_tmp +
        f_odeFcn_tunableEnvironment_f2_[netonc_tmp] * f_netonc_tmp) /
       b_netonc_tmp * i_netonc_tmp +
       (f_odeFcn_tunableEnvironment_f2_[j_netonc_tmp] * d_netonc_tmp +
        f_odeFcn_tunableEnvironment_f2_[e_netonc_tmp] * f_netonc_tmp) /
       b_netonc_tmp * k_netonc_tmp) / c_netonc_tmp) / (1.1E+21 / (a * a)));
    yp[2] = lambdaum_tmp * (((h_odeFcn_tunableEnvironment_f2_[h_netonc_tmp] *
      d_netonc_tmp + h_odeFcn_tunableEnvironment_f2_[netonc_tmp] * f_netonc_tmp)
      / b_netonc_tmp * i_netonc_tmp +
      (h_odeFcn_tunableEnvironment_f2_[j_netonc_tmp] * d_netonc_tmp +
       h_odeFcn_tunableEnvironment_f2_[e_netonc_tmp] * f_netonc_tmp) /
      b_netonc_tmp * k_netonc_tmp) / c_netonc_tmp);
    yp[3] = lambdaum_tmp * (((g_odeFcn_tunableEnvironment_f2_[h_netonc_tmp] *
      d_netonc_tmp + g_odeFcn_tunableEnvironment_f2_[netonc_tmp] * f_netonc_tmp)
      / b_netonc_tmp * i_netonc_tmp +
      (g_odeFcn_tunableEnvironment_f2_[j_netonc_tmp] * d_netonc_tmp +
       g_odeFcn_tunableEnvironment_f2_[e_netonc_tmp] * f_netonc_tmp) /
      b_netonc_tmp * k_netonc_tmp) / c_netonc_tmp);

    /*  column vector  */
  } else {
    /*  move ray in a straight line */
    lambdaum_tmp = muDoubleScalarSign(odeFcn_tunableEnvironment_f1) *
      odeFcn_tunableEnvironment_f3[1];
    yp[0] = lambdaum_tmp * y[2] / kVac;
    yp[1] = lambdaum_tmp * y[3] / kVac;
    yp[2] = 0.0;
    yp[3] = 0.0;

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
  /*      clum  = (c)*(1.e-6); % speed of light in microns/ps */
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

/* End of code generation (callODEFunctionNSM.c) */
