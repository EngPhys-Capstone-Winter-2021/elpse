/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loopRectInterp2d.c
 *
 * Code generation for function 'loopRectInterp2d'
 *
 */

/* Include files */
#include "loopRectInterp2d.h"
#include "loopRectInterp2d_data.h"
#include "loopRectInterp2d_emxutil.h"
#include "loopRectInterp2d_types.h"
#include "rectInterp2d.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8,     /* lineNo */
  "loopRectInterp2d",                  /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/loopRectInterp2d.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 2,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 3,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 5,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 6,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 7,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 8,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  35,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  28,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  35,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  28,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  33,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  28,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  33,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  28,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  40,                                  /* colNo */
  "PqList",                            /* aName */
  "loopRectInterp2d",                  /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/loopRectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  55,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  55,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  57,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  57,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  9,                                   /* colNo */
  "VqLin",                             /* aName */
  "loopRectInterp2d",                  /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/loopRectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo emlrtRTEI = { 6,   /* lineNo */
  5,                                   /* colNo */
  "loopRectInterp2d",                  /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/loopRectInterp2d.m"/* pName */
};

/* Function Definitions */
void loopRectInterp2d(const emlrtStack *sp, const emxArray_real_T *PqList, const
                      emxArray_real_T *Z, const emxArray_real_T *R, const
                      emxArray_real_T *V, emxArray_real_T *VqLin)
{
  emlrtStack b_st;
  emlrtStack st;
  real_T dist_NE;
  real_T dist_NW;
  real_T dist_SE;
  real_T dist_SW;
  real_T ind1;
  real_T ind2;
  real_T total_dist;
  int32_T b_i;
  int32_T i;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* DT - Delaunay Triangulation */
  /* ValsNe - log density value at each given coordinate */
  /* PqList - matrix with requested coordinates for interpolation: ordered */
  /* [z,r] */
  i = VqLin->size[0];
  VqLin->size[0] = PqList->size[0];
  emxEnsureCapacity_real_T(sp, VqLin, i, &emlrtRTEI);
  loop_ub = PqList->size[0];
  for (i = 0; i < loop_ub; i++) {
    VqLin->data[i] = 0.0;
  }

  i = PqList->size[0];
  for (b_i = 0; b_i < i; b_i++) {
    st.site = &emlrtRSI;
    loop_ub = b_i + 1;
    if ((loop_ub < 1) || (loop_ub > PqList->size[0])) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, PqList->size[0], &i_emlrtBCI,
        &st);
    }

    b_st.site = &b_emlrtRSI;
    ind1 = closest_val(&b_st, Z, PqList->data[b_i]);
    b_st.site = &c_emlrtRSI;
    ind2 = closest_val(&b_st, R, PqList->data[b_i + PqList->size[0]]);
    b_st.site = &d_emlrtRSI;
    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > Z->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, Z->size[0], &j_emlrtBCI,
        &b_st);
    }

    dist_SE = PqList->data[b_i] - Z->data[(int32_T)ind1 - 1];
    b_st.site = &d_emlrtRSI;
    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > R->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, R->size[0], &k_emlrtBCI,
        &b_st);
    }

    total_dist = PqList->data[b_i + PqList->size[0]] - R->data[(int32_T)ind2 - 1];
    dist_NE = dist_SE * dist_SE + total_dist * total_dist;
    b_st.site = &e_emlrtRSI;
    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > Z->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, Z->size[0], &l_emlrtBCI,
        &b_st);
    }

    dist_SE = PqList->data[b_i] - Z->data[(int32_T)ind1 - 1];
    b_st.site = &e_emlrtRSI;
    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > R->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, R->size[0],
        &m_emlrtBCI, &b_st);
    }

    total_dist = PqList->data[b_i + PqList->size[0]] - R->data[(int32_T)(ind2 -
      1.0) - 1];
    dist_NW = dist_SE * dist_SE + total_dist * total_dist;
    b_st.site = &f_emlrtRSI;
    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > Z->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, Z->size[0],
        &n_emlrtBCI, &b_st);
    }

    dist_SE = PqList->data[b_i] - Z->data[(int32_T)(ind1 - 1.0) - 1];
    b_st.site = &f_emlrtRSI;
    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > R->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, R->size[0], &o_emlrtBCI,
        &b_st);
    }

    total_dist = PqList->data[b_i + PqList->size[0]] - R->data[(int32_T)ind2 - 1];
    dist_SW = dist_SE * dist_SE + total_dist * total_dist;
    b_st.site = &g_emlrtRSI;
    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > Z->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, Z->size[0],
        &p_emlrtBCI, &b_st);
    }

    dist_SE = PqList->data[b_i] - Z->data[(int32_T)(ind1 - 1.0) - 1];
    b_st.site = &g_emlrtRSI;
    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > R->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, R->size[0],
        &q_emlrtBCI, &b_st);
    }

    total_dist = PqList->data[b_i + PqList->size[0]] - R->data[(int32_T)(ind2 -
      1.0) - 1];
    dist_SE = dist_SE * dist_SE + total_dist * total_dist;
    total_dist = ((dist_NE + dist_NW) + dist_SW) + dist_SE;
    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > V->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, V->size[0], &h_emlrtBCI,
        &st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > V->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, V->size[1], &g_emlrtBCI,
        &st);
    }

    if (((int32_T)ind1 < 1) || ((int32_T)ind1 > V->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, V->size[0], &f_emlrtBCI,
        &st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > V->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, V->size[1],
        &e_emlrtBCI, &st);
    }

    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > V->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, V->size[0],
        &d_emlrtBCI, &st);
    }

    if (((int32_T)ind2 < 1) || ((int32_T)ind2 > V->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, V->size[1], &c_emlrtBCI,
        &st);
    }

    if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > V->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, V->size[0],
        &b_emlrtBCI, &st);
    }

    if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > V->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, V->size[1],
        &emlrtBCI, &st);
    }

    if ((b_i + 1 < 1) || (b_i + 1 > VqLin->size[0])) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, VqLin->size[0], &r_emlrtBCI, &st);
    }

    VqLin->data[b_i] = ((dist_NE * V->data[((int32_T)ind1 + V->size[0] *
      ((int32_T)ind2 - 1)) - 1] / total_dist + dist_NW * V->data[((int32_T)ind1
      + V->size[0] * ((int32_T)(ind2 - 1.0) - 1)) - 1] / total_dist) + dist_SW *
                        V->data[((int32_T)(ind1 - 1.0) + V->size[0] * ((int32_T)
      ind2 - 1)) - 1] / total_dist) + dist_SE * V->data[((int32_T)(ind1 - 1.0) +
      V->size[0] * ((int32_T)(ind2 - 1.0) - 1)) - 1] / total_dist;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (loopRectInterp2d.c) */
