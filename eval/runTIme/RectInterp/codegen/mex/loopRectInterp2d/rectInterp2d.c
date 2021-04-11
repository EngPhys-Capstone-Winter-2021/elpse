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
#include "loopRectInterp2d_data.h"
#include "loopRectInterp2d_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  36,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  35,                                  /* lineNo */
  58,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/interpolation/ELPSEinterp/RectInterp/rectInterp2d.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
real_T closest_val(const emlrtStack *sp, const emxArray_real_T *A, real_T val)
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
        emlrtDynamicBoundsCheckR2012b(med, 1, A->size[0], &t_emlrtBCI, sp);
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
      emlrtDynamicBoundsCheckR2012b(floorInd, 1, A->size[0], &s_emlrtBCI, sp);
    }

    if (A->data[floorInd - 1] <= val) {
      if ((ceilInd < 1) || (ceilInd > A->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ceilInd, 1, A->size[0], &u_emlrtBCI, sp);
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

/* End of code generation (rectInterp2d.c) */
