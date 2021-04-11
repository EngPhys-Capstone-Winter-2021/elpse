/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rectInterp2d.c
 *
 * Code generation for function 'rectInterp2d'
 *
 */

/* Include files */
#include "rectInterp2d.h"
#include "rectInterp2d_data.h"
#include "rectInterp2d_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 2,     /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 3,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 5,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 6,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 7,   /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 8,   /* lineNo */
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
  5,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  55,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  55,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  57,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  8,                                   /* lineNo */
  57,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d",                      /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  36,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  58,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static real_T closest_val(const emlrtStack *sp, const emxArray_real_T *A, real_T
  val);

/* Function Definitions */
static real_T closest_val(const emlrtStack *sp, const emxArray_real_T *A, real_T
  val)
{
  real_T ind;
  int32_T ceilInd;
  int32_T exitg1;
  int32_T floorInd;
  int32_T med;

  /* if ~exist('floorInd','var') */
  floorInd = 1;

  /* end */
  /* if ~exist('ceilInd','var') */
  ceilInd = A->size[0];

  /* end */
  do {
    exitg1 = 0;
    med = ceilInd - floorInd;
    if (med > 1) {
      med = (int32_T)muDoubleScalarFloor((real_T)((uint32_T)floorInd + ceilInd) /
        2.0);
      if ((med < 1) || (med > A->size[0])) {
        emlrtDynamicBoundsCheckR2012b(med, 1, A->size[0], &r_emlrtBCI, sp);
      }

      if (A->data[med - 1] >= val) {
        ceilInd = med;
      } else {
        floorInd = med;
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (med == 1) {
    if (floorInd > A->size[0]) {
      emlrtDynamicBoundsCheckR2012b(floorInd, 1, A->size[0], &q_emlrtBCI, sp);
    }

    if (A->data[floorInd - 1] <= val) {
      if ((ceilInd < 1) || (ceilInd > A->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ceilInd, 1, A->size[0], &s_emlrtBCI, sp);
      }

      if (A->data[ceilInd - 1] > val) {
        ind = ceilInd;
      } else {
        ind = 0.0;
      }
    } else {
      ind = 0.0;
    }
  } else {
    ind = 0.0;
  }

  return ind;
}

real_T rectInterp2d(const emlrtStack *sp, const real_T query[2], const
                    emxArray_real_T *dim1_val, const emxArray_real_T *dim2_val,
                    const emxArray_real_T *vGrid)
{
  emlrtStack st;
  real_T dist_NE;
  real_T dist_NW;
  real_T dist_SE;
  real_T dist_SW;
  real_T ind1;
  real_T ind2;
  real_T total_dist;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &emlrtRSI;
  ind1 = closest_val(&st, dim1_val, query[0]);
  st.site = &b_emlrtRSI;
  ind2 = closest_val(&st, dim2_val, query[1]);
  st.site = &c_emlrtRSI;
  if (((int32_T)ind1 < 1) || ((int32_T)ind1 > dim1_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, dim1_val->size[0],
      &i_emlrtBCI, &st);
  }

  dist_SE = query[0] - dim1_val->data[(int32_T)ind1 - 1];
  st.site = &c_emlrtRSI;
  if (((int32_T)ind2 < 1) || ((int32_T)ind2 > dim2_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, dim2_val->size[0],
      &j_emlrtBCI, &st);
  }

  total_dist = query[1] - dim2_val->data[(int32_T)ind2 - 1];
  dist_NE = dist_SE * dist_SE + total_dist * total_dist;
  st.site = &d_emlrtRSI;
  if (((int32_T)ind1 < 1) || ((int32_T)ind1 > dim1_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, dim1_val->size[0],
      &k_emlrtBCI, &st);
  }

  dist_SE = query[0] - dim1_val->data[(int32_T)ind1 - 1];
  st.site = &d_emlrtRSI;
  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > dim2_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, dim2_val->size[0],
      &l_emlrtBCI, &st);
  }

  total_dist = query[1] - dim2_val->data[(int32_T)(ind2 - 1.0) - 1];
  dist_NW = dist_SE * dist_SE + total_dist * total_dist;
  st.site = &e_emlrtRSI;
  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > dim1_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, dim1_val->size[0],
      &m_emlrtBCI, &st);
  }

  dist_SE = query[0] - dim1_val->data[(int32_T)(ind1 - 1.0) - 1];
  st.site = &e_emlrtRSI;
  if (((int32_T)ind2 < 1) || ((int32_T)ind2 > dim2_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, dim2_val->size[0],
      &n_emlrtBCI, &st);
  }

  total_dist = query[1] - dim2_val->data[(int32_T)ind2 - 1];
  dist_SW = dist_SE * dist_SE + total_dist * total_dist;
  st.site = &f_emlrtRSI;
  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > dim1_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, dim1_val->size[0],
      &o_emlrtBCI, &st);
  }

  dist_SE = query[0] - dim1_val->data[(int32_T)(ind1 - 1.0) - 1];
  st.site = &f_emlrtRSI;
  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > dim2_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, dim2_val->size[0],
      &p_emlrtBCI, &st);
  }

  total_dist = query[1] - dim2_val->data[(int32_T)(ind2 - 1.0) - 1];
  dist_SE = dist_SE * dist_SE + total_dist * total_dist;
  total_dist = ((dist_NE + dist_NW) + dist_SW) + dist_SE;
  if (((int32_T)ind1 < 1) || ((int32_T)ind1 > vGrid->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, vGrid->size[0], &h_emlrtBCI,
      sp);
  }

  if (((int32_T)ind2 < 1) || ((int32_T)ind2 > vGrid->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, vGrid->size[1], &g_emlrtBCI,
      sp);
  }

  if (((int32_T)ind1 < 1) || ((int32_T)ind1 > vGrid->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, vGrid->size[0], &f_emlrtBCI,
      sp);
  }

  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > vGrid->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, vGrid->size[1],
      &e_emlrtBCI, sp);
  }

  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > vGrid->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, vGrid->size[0],
      &d_emlrtBCI, sp);
  }

  if (((int32_T)ind2 < 1) || ((int32_T)ind2 > vGrid->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, vGrid->size[1], &c_emlrtBCI,
      sp);
  }

  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > vGrid->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, vGrid->size[0],
      &b_emlrtBCI, sp);
  }

  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > vGrid->size[1])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, vGrid->size[1],
      &emlrtBCI, sp);
  }

  return ((dist_NE * vGrid->data[((int32_T)ind1 + vGrid->size[0] * ((int32_T)
             ind2 - 1)) - 1] / total_dist + dist_NW * vGrid->data[((int32_T)ind1
            + vGrid->size[0] * ((int32_T)(ind2 - 1.0) - 1)) - 1] / total_dist) +
          dist_SW * vGrid->data[((int32_T)(ind1 - 1.0) + vGrid->size[0] *
           ((int32_T)ind2 - 1)) - 1] / total_dist) + dist_SE * vGrid->data
    [((int32_T)(ind1 - 1.0) + vGrid->size[0] * ((int32_T)(ind2 - 1.0) - 1)) - 1]
    / total_dist;
}

/* End of code generation (rectInterp2d.c) */
