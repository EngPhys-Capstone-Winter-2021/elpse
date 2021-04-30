/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * rectLocate.c
 *
 * Code generation for function 'rectLocate'
 *
 */

/* Include files */
#include "rectLocate.h"
#include "propAlg_data.h"
#include "propAlg_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo kb_emlrtRSI = { 7,  /* lineNo */
  "rectLocate",                        /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 8,  /* lineNo */
  "rectLocate",                        /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m"/* pathName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  24,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  39,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  15,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  10,                                  /* lineNo */
  32,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  15,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  11,                                  /* lineNo */
  30,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  15,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  12,                                  /* lineNo */
  32,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectLocate",                        /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  36,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  77,                                  /* lineNo */
  58,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/rectLocate.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static real_T b_closest_val(const emlrtStack *sp, const emxArray_real_T *A,
  real_T val);

/* Function Definitions */
static real_T b_closest_val(const emlrtStack *sp, const emxArray_real_T *A,
  real_T val)
{
  real_T ind;
  int32_T ceilInd;
  int32_T exitg1;
  int32_T floorInd;
  int32_T med;

  /* determines the lowest indice in an ordered list satisfying: */
  /* val < A(ind) */
  floorInd = 1;
  ceilInd = A->size[0];
  do {
    exitg1 = 0;
    med = ceilInd - floorInd;
    if (med > 1) {
      med = (int32_T)muDoubleScalarFloor((real_T)((uint32_T)floorInd + ceilInd) /
        2.0);
      if ((med < 1) || (med > A->size[0])) {
        emlrtDynamicBoundsCheckR2012b(med, 1, A->size[0], &n_emlrtBCI, sp);
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
      emlrtDynamicBoundsCheckR2012b(floorInd, 1, A->size[0], &m_emlrtBCI, sp);
    }

    if (A->data[floorInd - 1] <= val) {
      if ((ceilInd < 1) || (ceilInd > A->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ceilInd, 1, A->size[0], &o_emlrtBCI, sp);
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

void rectLocate(const emlrtStack *sp, const real_T qp[2], const emxArray_real_T *
                dim1_val, const emxArray_real_T *dim2_val, real_T weights[4],
                real_T inds[8])
{
  emlrtStack st;
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
  st.prev = sp;
  st.tls = sp->tls;

  /* determines the two indices of a rectangular grid that define the */
  /* rectangle enclosing the queried point and the weighting assigned to */
  /* the four points of the rectangle  */
  /* (J.S, R.F. April 2020) */
  st.site = &kb_emlrtRSI;
  ind1 = b_closest_val(&st, dim1_val, qp[0]);
  st.site = &lb_emlrtRSI;
  ind2 = b_closest_val(&st, dim2_val, qp[1]);
  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > dim1_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, dim1_val->size[0],
      &g_emlrtBCI, sp);
  }

  coordA_idx_0 = dim1_val->data[(int32_T)(ind1 - 1.0) - 1];
  if (((int32_T)ind2 < 1) || ((int32_T)ind2 > dim2_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, dim2_val->size[0],
      &h_emlrtBCI, sp);
  }

  coordA_idx_1 = dim2_val->data[(int32_T)ind2 - 1];
  if (((int32_T)ind1 < 1) || ((int32_T)ind1 > dim1_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, dim1_val->size[0],
      &i_emlrtBCI, sp);
  }

  coordB_idx_0 = dim1_val->data[(int32_T)ind1 - 1];
  if (((int32_T)ind2 < 1) || ((int32_T)ind2 > dim2_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind2, 1, dim2_val->size[0],
      &j_emlrtBCI, sp);
  }

  coordB_idx_1 = dim2_val->data[(int32_T)ind2 - 1];
  if (((int32_T)(ind1 - 1.0) < 1) || ((int32_T)(ind1 - 1.0) > dim1_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind1 - 1.0), 1, dim1_val->size[0],
      &k_emlrtBCI, sp);
  }

  coordC_idx_0 = dim1_val->data[(int32_T)(ind1 - 1.0) - 1];
  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > dim2_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, dim2_val->size[0],
      &l_emlrtBCI, sp);
  }

  coordC_idx_1 = dim2_val->data[(int32_T)(ind2 - 1.0) - 1];
  if (((int32_T)ind1 < 1) || ((int32_T)ind1 > dim1_val->size[0])) {
    emlrtDynamicBoundsCheckR2012b((int32_T)ind1, 1, dim1_val->size[0],
      &e_emlrtBCI, sp);
  }

  if (((int32_T)(ind2 - 1.0) < 1) || ((int32_T)(ind2 - 1.0) > dim2_val->size[0]))
  {
    emlrtDynamicBoundsCheckR2012b((int32_T)(ind2 - 1.0), 1, dim2_val->size[0],
      &f_emlrtBCI, sp);
  }

  den = dim2_val->data[(int32_T)(ind2 - 1.0) - 1];
  areaD = dim2_val->data[(int32_T)ind2 - 1];
  if ((den - qp[1]) / (dim1_val->data[(int32_T)(ind1 - 1.0) - 1] - qp[0]) >
      (areaD - den) / (dim1_val->data[(int32_T)ind1 - 1] - dim1_val->data
                       [(int32_T)(ind1 - 1.0) - 1])) {
    /* triangle above diagonal */
    /* algorithm that can determine the barycentric weights of point p  */
    /* based on a triangle defined by points a,b,c */
    coordB_idx_0 -= coordA_idx_0;
    coordC_idx_0 -= coordA_idx_0;
    coordA_idx_0 = qp[0] - coordA_idx_0;
    coordB_idx_1 -= coordA_idx_1;
    coordC_idx_1 -= coordA_idx_1;
    coordA_idx_1 = qp[1] - coordA_idx_1;

    /* total triangle area */
    den = coordB_idx_0 * coordC_idx_1 - coordC_idx_0 * coordB_idx_1;

    /* individual area of subtriangles */
    coordC_idx_0 = (coordA_idx_0 * coordC_idx_1 - coordC_idx_0 * coordA_idx_1) /
      den;
    coordA_idx_0 = (coordB_idx_0 * coordA_idx_1 - coordA_idx_0 * coordB_idx_1) /
      den;

    /* final coordinate calculated by subtraction as u + v + w = 1 */
    /* polyarea([qp(1),coordB(1),coordC(1)],[qp(2),coordB(2),coordC(2)]);%abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2; */
    /* polyarea([qp(1),coordA(1),coordC(1)],[qp(2),coordA(2),coordC(2)]);%abs(vecA(1)*vecC(2)-vecA(2)*vecC(1))/2; */
    den = (1.0 - coordC_idx_0) - coordA_idx_0;

    /* polyarea([qp(1),coordA(1),coordB(1)],[qp(2),coordA(2),coordB(2)]);%abs(vecA(1)*vecB(2)-vecA(2)*vecB(1))/2; */
    areaD = 0.0;
  } else {
    /* triangle below diagonal */
    /* algorithm that can determine the barycentric weights of point p  */
    /* based on a triangle defined by points a,b,c */
    coordA_idx_0 = dim1_val->data[(int32_T)ind1 - 1] - dim1_val->data[(int32_T)
      ind1 - 1];
    coordA_idx_1 = den - areaD;
    coordC_idx_0 -= coordB_idx_0;
    coordB_idx_0 = qp[0] - coordB_idx_0;
    coordC_idx_1 -= coordB_idx_1;
    coordB_idx_1 = qp[1] - coordB_idx_1;

    /* total triangle area */
    den = coordC_idx_0 * coordA_idx_1 - coordA_idx_0 * coordC_idx_1;

    /* individual area of subtriangles */
    coordA_idx_0 = (coordB_idx_0 * coordA_idx_1 - coordA_idx_0 * coordB_idx_1) /
      den;
    den = (coordC_idx_0 * coordB_idx_1 - coordB_idx_0 * coordC_idx_1) / den;

    /* final coordinate calculated by subtraction as u + v + w = 1 */
    coordC_idx_0 = 0.0;

    /* polyarea([qp(1),coordC(1),coordD(1)],[qp(2),coordC(2),coordD(2)]);%abs(vecC(1)*vecD(2)-vecC(2)*vecD(1))/2; */
    /* polyarea([qp(1),coordB(1),coordD(1)],[qp(2),coordB(2),coordD(2)]);%abs(vecB(1)*vecD(2)-vecB(2)*vecD(1))/2; */
    areaD = (1.0 - coordA_idx_0) - den;

    /* polyarea([qp(1),coordB(1),coordC(1)],[qp(2),coordB(2),coordC(2)]);%abs(vecB(1)*vecC(2)-vecB(2)*vecC(1))/2; */
  }

  inds[0] = ind1 - 1.0;
  inds[4] = ind2;
  inds[1] = ind1;
  inds[5] = ind2;
  inds[2] = ind1 - 1.0;
  inds[6] = ind2 - 1.0;
  inds[3] = ind1;
  inds[7] = ind2 - 1.0;
  weights[0] = coordC_idx_0;
  weights[1] = coordA_idx_0;
  weights[2] = den;
  weights[3] = areaD;

  /* /areaTri; */
}

/* End of code generation (rectLocate.c) */
