/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * propAlg.c
 *
 * Code generation for function 'propAlg'
 *
 */

/* Include files */
#include "propAlg.h"
#include "error.h"
#include "ifWhileCond.h"
#include "ode45.h"
#include "propAlg_data.h"
#include "propAlg_emxutil.h"
#include "propAlg_types.h"
#include "rectLocate.h"
#include "rt_nonfinite.h"
#include "strcmp.h"
#include "string1.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 27,    /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 40,  /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 43,  /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 93,  /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 96,  /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 102, /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 119, /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 159, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 160, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 161, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 163, /* lineNo */
  "toDispSurface",                     /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 395, /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 396, /* lineNo */
  "rectInterp2d",                      /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 93, /* lineNo */
  "@(t,y) odeEmRayFun(t,y,omega_ps, ...\n                                                    rayGd,cnstVar,margin)",/* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 281,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 282,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 287,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 291,/* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 96, /* lineNo */
  "@(t,y) odeLwRayFun(t,y,omega_ps, ...\n                                                    rayGd,cnstVar,margin)",/* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 338,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 342,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 344,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 349,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 353,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 358,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 359,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 362,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 366,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 372,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 375,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 381,/* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 27, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 102,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  36,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  409,                                 /* lineNo */
  12,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  416,                                 /* lineNo */
  58,                                  /* colNo */
  "A",                                 /* aName */
  "closest_val",                       /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  7,                                   /* lineNo */
  36,                                  /* colNo */
  "grid",                              /* aName */
  "triInterp",                         /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/triInterp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  431,                                 /* lineNo */
  101,                                 /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  431,                                 /* lineNo */
  62,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  431,                                 /* lineNo */
  34,                                  /* colNo */
  "dim2_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  97,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  82,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  62,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  430,                                 /* lineNo */
  28,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  429,                                 /* lineNo */
  94,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  429,                                 /* lineNo */
  79,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  429,                                 /* lineNo */
  59,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  429,                                 /* lineNo */
  25,                                  /* colNo */
  "dim1_val",                          /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  427,                                 /* lineNo */
  24,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  427,                                 /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  426,                                 /* lineNo */
  22,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  426,                                 /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  22,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  425,                                 /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  24,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  424,                                 /* lineNo */
  16,                                  /* colNo */
  "vGrid",                             /* aName */
  "rectInterp2d_v2",                   /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  162,                                 /* lineNo */
  24,                                  /* colNo */
  "rayBundle_nc",                      /* aName */
  "toDispSurface",                     /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  151,                                 /* lineNo */
  34,                                  /* colNo */
  "rayBundle_frequency",               /* aName */
  "toDispSurface",                     /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 283,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  44,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  41,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  46,                                  /* colNo */
  "rayBundle.trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  54,                                  /* colNo */
  "rayBundle.trajs{rayIdx}",           /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  52,                                  /* colNo */
  "rayBundle.trajs{rayIdx}",           /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  41,                                  /* colNo */
  "yr",                                /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  49,                                  /* lineNo */
  31,                                  /* colNo */
  "lastInfo",                          /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  46,                                  /* lineNo */
  49,                                  /* colNo */
  "rayBundle_trajs{rayIdx}",           /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  42,                                  /* colNo */
  "rayBundle_rayICs",                  /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  35,                                  /* lineNo */
  17,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  28,                                  /* colNo */
  "rayBundle_halt",                    /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo h_emlrtRTEI = { 24,/* lineNo */
  19,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  34,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  28,                                  /* colNo */
  "rayBundle_frequency",               /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  109,                                 /* lineNo */
  18,                                  /* colNo */
  "rayBundle_halt",                    /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  18,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  18,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  47,                                  /* lineNo */
  28,                                  /* colNo */
  "lastInfo",                          /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  28,                                  /* colNo */
  "lastInfo",                          /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  45,                                  /* colNo */
  "yr",                                /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo o_emlrtRTEI = { 12,/* lineNo */
  6,                                   /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 17,/* lineNo */
  9,                                   /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 127,/* lineNo */
  6,                                   /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 88,/* lineNo */
  10,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 89,/* lineNo */
  10,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 93,/* lineNo */
  22,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 96,/* lineNo */
  22,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 102,/* lineNo */
  14,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 115,/* lineNo */
  18,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 118,/* lineNo */
  28,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 119,/* lineNo */
  18,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 1,/* lineNo */
  22,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/CapstoneWinter/elpse/Source/propAlg.m"/* pName */
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
        emlrtDynamicBoundsCheckR2012b(med, 1, A->size[0], &b_emlrtBCI, sp);
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
      emlrtDynamicBoundsCheckR2012b(floorInd, 1, A->size[0], &emlrtBCI, sp);
    }

    if (A->data[floorInd - 1] <= val) {
      if ((ceilInd < 1) || (ceilInd > A->size[0])) {
        emlrtDynamicBoundsCheckR2012b(ceilInd, 1, A->size[0], &c_emlrtBCI, sp);
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

void anon(const emlrtStack *sp, real_T omega_ps, const real_T rayGd_domain[4],
          const emxArray_real_T *rayGd_zVal, const emxArray_real_T *rayGd_rVal,
          const emxArray_real_T *rayGd_gridNe, const emxArray_real_T
          *rayGd_gridDLogNedz, const emxArray_real_T *rayGd_gridDLogNedr, const
          real_T cnstVar[6], const real_T margin[4], const real_T y[4], real_T
          varargout_1[4])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T inds[8];
  real_T weights[4];
  real_T a;
  real_T kVac;
  real_T lambdaum_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cb_emlrtRSI;
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
  /* .c; */
  /*  need these */
  lambdaum_tmp = muDoubleScalarAbs(omega_ps);
  a = cnstVar[3] * cnstVar[1] / lambdaum_tmp;

  /*  vac wavelength microns */
  kVac = lambdaum_tmp / cnstVar[1];

  /*  vacuum wavenumber 1/um */
  /*  crit density in 1/cm^3 */
  /*  current position at phase space point y */
  /*  current ray wavevector at phase space point y */
  /* goodPt = 1; */
  /*  INDOMAIN - given a column vector of positions x, return a list */
  /*  of logicals showing if they are in the domain (given by rayGd) */
  /*  or not */
  /*     */
  /*  could write as zmin = (rayGd.domain+margin)(1) */
  if ((y[1] < rayGd_domain[3] - margin[3]) && (y[1] > rayGd_domain[2] + margin[2])
      && ((y[0] < rayGd_domain[1] - margin[1]) && (y[0] > rayGd_domain[0] +
        margin[0]))) {
    /*  interpolation for current position */
    b_st.site = &eb_emlrtRSI;
    rectLocate(&b_st, *(real_T (*)[2])&y[0], rayGd_zVal, rayGd_rVal, weights,
               inds);
    b_st.site = &fb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /*  log10 of electron density */
    /*     disp(logNe)  % debugging */
    /* triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:)); */
    b_st.site = &hb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /*  at phase space point */
    /*     disp(dLogNedz) */
    /* triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
    b_st.site = &ib_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* dot(bc',triValDLogNedr')';   % at phase space point */
    /*     disp(dLogNedr) */
    varargout_1[0] = muDoubleScalarSign(omega_ps) * cnstVar[1] * y[2] / kVac;
    varargout_1[1] = muDoubleScalarSign(omega_ps) * cnstVar[1] * y[3] / kVac;
    lambdaum_tmp = -0.5 * cnstVar[2] * omega_ps * (muDoubleScalarPower(10.0,
      ((weights[0] * rayGd_gridNe->data[((int32_T)inds[0] + rayGd_gridNe->size[0]
      * ((int32_T)inds[4] - 1)) - 1] + weights[1] * rayGd_gridNe->data[((int32_T)
      inds[1] + rayGd_gridNe->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights
       [2] * rayGd_gridNe->data[((int32_T)inds[2] + rayGd_gridNe->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridNe->data[((int32_T)
      inds[3] + rayGd_gridNe->size[0] * ((int32_T)inds[7] - 1)) - 1]) / (1.1E+21
      / (a * a)));
    varargout_1[2] = lambdaum_tmp * (((weights[0] * rayGd_gridDLogNedz->data
      [((int32_T)inds[0] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedz->data[((int32_T)inds[1] +
      rayGd_gridDLogNedz->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedz->data[((int32_T)inds[2] + rayGd_gridDLogNedz->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedz->data
      [((int32_T)inds[3] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[7] - 1))
      - 1]);
    varargout_1[3] = lambdaum_tmp * (((weights[0] * rayGd_gridDLogNedr->data
      [((int32_T)inds[0] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedr->data[((int32_T)inds[1] +
      rayGd_gridDLogNedr->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedr->data[((int32_T)inds[2] + rayGd_gridDLogNedr->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedr->data
      [((int32_T)inds[3] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[7] - 1))
      - 1]);

    /*  column vector  */
  } else {
    /*  move ray in a straight line */
    lambdaum_tmp = muDoubleScalarSign(omega_ps) * cnstVar[1];
    varargout_1[0] = lambdaum_tmp * y[2] / kVac;
    varargout_1[1] = lambdaum_tmp * y[3] / kVac;
    varargout_1[2] = 0.0;
    varargout_1[3] = 0.0;

    /*  column vector          */
  }
}

void b_anon(const emlrtStack *sp, real_T omega_ps, const real_T rayGd_domain[4],
            const emxArray_real_T *rayGd_zVal, const emxArray_real_T *rayGd_rVal,
            const emxArray_real_T *rayGd_gridNe, const emxArray_real_T
            *rayGd_gridDLogNedz, const emxArray_real_T *rayGd_gridDLogNedr,
            const emxArray_real_T *rayGd_gridTe, const emxArray_real_T
            *rayGd_gridDLnTedr, const emxArray_real_T *rayGd_gridDLnTedz, const
            real_T cnstVar[6], const real_T margin[4], const real_T y[4], real_T
            varargout_1[4])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T inds[8];
  real_T weights[4];
  real_T a_data[2];
  real_T b_data[2];
  real_T Te;
  real_T k2;
  real_T varargout_1_tmp;
  real_T wpe;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  RHS for our ray ode for Langmuir waves */
  /*   output dydt is a column vector: */
  /*   dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]' */
  /*  NOTE: here omega_ps is a scalar (since we deal with a single ray) */
  /* .c; */
  /*  wave frequency in rads/ps  % wave frequency in rads/ps */
  /*  current position at phase space point y */
  /*  current ray wavevector at phase space point y */
  a_data[0] = y[2];
  b_data[0] = y[2];
  a_data[1] = y[3];
  b_data[1] = y[3];
  n_t = (ptrdiff_t)2;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  k2 = ddot(&n_t, &a_data[0], &incx_t, &b_data[0], &incy_t);

  /* goodPt = 1;     */
  /*  INDOMAIN - given a column vector of positions x, return a list */
  /*  of logicals showing if they are in the domain (given by rayGd) */
  /*  or not */
  /*     */
  /*  could write as zmin = (rayGd.domain+margin)(1) */
  if ((y[1] < rayGd_domain[3] - margin[3]) && (y[1] > rayGd_domain[2] + margin[2])
      && ((y[0] < rayGd_domain[1] - margin[1]) && (y[0] > rayGd_domain[0] +
        margin[0]))) {
    /*  interpolation for current position */
    b_st.site = &pb_emlrtRSI;
    rectLocate(&b_st, *(real_T (*)[2])&y[0], rayGd_zVal, rayGd_rVal, weights,
               inds);

    /*  rectangle     */
    /*  density */
    /* triValNe = triInterp(weights,inds,rayGd.grid); */
    b_st.site = &qb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridNe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridNe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /*  log10 of electron density */
    /*     disp(logNe)  % debugging */
    b_st.site = &rb_emlrtRSI;
    wpe = cnstVar[4] * muDoubleScalarSqrt(muDoubleScalarPower(10.0, ((weights[0]
      * rayGd_gridNe->data[((int32_T)inds[0] + rayGd_gridNe->size[0] * ((int32_T)
      inds[4] - 1)) - 1] + weights[1] * rayGd_gridNe->data[((int32_T)inds[1] +
      rayGd_gridNe->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridNe->data[((int32_T)inds[2] + rayGd_gridNe->size[0] * ((int32_T)
      inds[6] - 1)) - 1]) + weights[3] * rayGd_gridNe->data[((int32_T)inds[3] +
      rayGd_gridNe->size[0] * ((int32_T)inds[7] - 1)) - 1])) * 1.0E-12;

    /*  electron plasma */
    /*  frequency (rad/ps) */
    /*     disp(wpe) */
    /* triValDLogNedz = triInterp(weights,inds,rayGd.grid); */
    b_st.site = &sb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedz->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedz->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /*  at phase space point */
    /*     disp(dLogNedz) */
    /* triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
    b_st.site = &tb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedr->size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedr->size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /*  at phase space point */
    /*     disp(dLogNedr) */
    /*  derivatives of electron temperature */
    /* triValTe = rayGd.valsTe(rayGd.DT(ti,:)); */
    b_st.site = &ub_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridTe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridTe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridTe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridTe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridTe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridTe->size[1],
        &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridTe->size[0],
        &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridTe->size[1],
        &d_emlrtBCI, &b_st);
    }

    Te = ((weights[0] * rayGd_gridTe->data[((int32_T)inds[0] +
            rayGd_gridTe->size[0] * ((int32_T)inds[4] - 1)) - 1] + weights[1] *
           rayGd_gridTe->data[((int32_T)inds[1] + rayGd_gridTe->size[0] *
            ((int32_T)inds[5] - 1)) - 1]) + weights[2] * rayGd_gridTe->data
          [((int32_T)inds[2] + rayGd_gridTe->size[0] * ((int32_T)inds[6] - 1)) -
          1]) + weights[3] * rayGd_gridTe->data[((int32_T)inds[3] +
      rayGd_gridTe->size[0] * ((int32_T)inds[7] - 1)) - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* dot(bc',triValTe')';        % electron temperature in eV */
    b_st.site = &vb_emlrtRSI;
    c_st.site = &vb_emlrtRSI;
    if (Te < 0.0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    Te = cnstVar[5] * muDoubleScalarSqrt(Te);
    Te *= Te;

    /*  square of electron thermal velocity (um/ps)^2 */
    /* triValDLnTedz = rayGd.valsDLnTedz(rayGd.DT(ti,:)); */
    b_st.site = &wb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridDLnTedz->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridDLnTedz->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridDLnTedz->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridDLnTedz->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridDLnTedz->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridDLnTedz->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridDLnTedz->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridDLnTedz->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* dot(bc',triValDLnTedz')';   % at phase space point */
    /*     disp(dLnTedz) */
    /* triValDLnTedr = rayGd.valsDLnTedr(rayGd.DT(ti,:)); */
    b_st.site = &xb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    /* (J.S, R.F. April 2020) */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridDLnTedr->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridDLnTedr->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridDLnTedr->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridDLnTedr->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridDLnTedr->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridDLnTedr->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridDLnTedr->
        size[0], &d_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridDLnTedr->
        size[1], &d_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* dot(bc',triValDLnTedr')';   % at phase space point */
    /*     disp(dLnTedr) */
    b_st.site = &yb_emlrtRSI;
    b_st.site = &ac_emlrtRSI;
    varargout_1_tmp = 3.0 * Te / omega_ps;
    varargout_1[0] = varargout_1_tmp * y[2];
    varargout_1[1] = varargout_1_tmp * y[3];
    varargout_1_tmp = -(wpe * wpe) / (2.0 * omega_ps) * cnstVar[2];
    Te = 1.5 * (k2 * Te / omega_ps);
    varargout_1[2] = varargout_1_tmp * (((weights[0] * rayGd_gridDLogNedz->data
      [((int32_T)inds[0] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedz->data[((int32_T)inds[1] +
      rayGd_gridDLogNedz->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedz->data[((int32_T)inds[2] + rayGd_gridDLogNedz->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedz->data
      [((int32_T)inds[3] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[7] - 1))
      - 1]) - Te * (((weights[0] * rayGd_gridDLnTedz->data[((int32_T)inds[0] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[4] - 1)) - 1] + weights[1] *
                      rayGd_gridDLnTedz->data[((int32_T)inds[1] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
                     rayGd_gridDLnTedz->data[((int32_T)inds[2] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[6] - 1)) - 1]) + weights[3] *
                    rayGd_gridDLnTedz->data[((int32_T)inds[3] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[7] - 1)) - 1]);
    varargout_1[3] = varargout_1_tmp * (((weights[0] * rayGd_gridDLogNedr->data
      [((int32_T)inds[0] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedr->data[((int32_T)inds[1] +
      rayGd_gridDLogNedr->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedr->data[((int32_T)inds[2] + rayGd_gridDLogNedr->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedr->data
      [((int32_T)inds[3] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[7] - 1))
      - 1]) - Te * (((weights[0] * rayGd_gridDLnTedr->data[((int32_T)inds[0] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[4] - 1)) - 1] + weights[1] *
                      rayGd_gridDLnTedr->data[((int32_T)inds[1] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
                     rayGd_gridDLnTedr->data[((int32_T)inds[2] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[6] - 1)) - 1]) + weights[3] *
                    rayGd_gridDLnTedr->data[((int32_T)inds[3] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[7] - 1)) - 1]);

    /*  column vector  */
  } else {
    /*  dummy electron temperature in eV */
    b_st.site = &bc_emlrtRSI;
    b_st.site = &bc_emlrtRSI;
    Te = cnstVar[5] * 44.721359549995796;

    /*  square of elec therm vel (um/ps) */
    varargout_1_tmp = 3.0 * (Te * Te) / omega_ps;
    varargout_1[0] = varargout_1_tmp * y[2];
    varargout_1[1] = varargout_1_tmp * y[3];
    varargout_1[2] = 0.0;
    varargout_1[3] = 0.0;

    /*  column vector          */
  }
}

void propAlg(const emlrtStack *sp, struct0_T *rayBundle, const struct1_T *rayGd,
             real_T tStep, const real_T margin[4], real_T npts, const struct2_T *
             cnst)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_cell_wrap_0 *rayBundle_trajs;
  emxArray_real_T *b_rayBundle;
  emxArray_real_T *b_yr;
  emxArray_real_T *newTraj;
  emxArray_real_T *rayBundle_nc;
  emxArray_real_T *tr;
  emxArray_real_T *yr;
  real_T cnstVar[6];
  real_T ray0[4];
  real_T tSpan[2];
  real_T b_x_tmp;
  real_T k0_idx_0;
  real_T k0_idx_1;
  real_T omega_ps;
  real_T tPrev;
  real_T tStop;
  real_T x0_idx_0;
  real_T x0_idx_1;
  real_T x_tmp;
  int32_T result[2];
  int32_T b_result;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T input_sizes_idx_0;
  int32_T loop_ub;
  int32_T rayIdx;
  int32_T sizes_idx_0;
  int32_T sizes_idx_1;
  int8_T i3;
  boolean_T c_rayBundle[2];
  boolean_T empty_non_axis_sizes;
  boolean_T trajIsNew;
  (void)npts;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_cell_wrap_0(sp, &rayBundle_trajs, 2, &o_emlrtRTEI, true);

  /*  speed of light in microns/ps */
  cnstVar[0] = cnst->c;
  cnstVar[1] = cnst->c * 1.0E-6;
  cnstVar[2] = cnst->ln10;
  cnstVar[3] = cnst->twopi;
  cnstVar[4] = cnst->wpe;
  cnstVar[5] = cnst->vTe1eV;
  i = rayBundle_trajs->size[0] * rayBundle_trajs->size[1];
  rayBundle_trajs->size[0] = 1;
  rayBundle_trajs->size[1] = rayBundle->trajs->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, rayBundle_trajs, i, &o_emlrtRTEI);
  loop_ub = rayBundle->trajs->size[0] * rayBundle->trajs->size[1];
  for (i = 0; i < loop_ub; i++) {
    emxCopyStruct_cell_wrap_0(sp, &rayBundle_trajs->data[i], &rayBundle->
      trajs->data[i], &o_emlrtRTEI);
  }

  emxInit_real_T(sp, &rayBundle_nc, 2, &q_emlrtRTEI, true);
  if (string_eq(rayBundle->type)) {
    i = rayBundle_nc->size[0] * rayBundle_nc->size[1];
    rayBundle_nc->size[0] = 1;
    rayBundle_nc->size[1] = rayBundle->nc->size[1];
    emxEnsureCapacity_real_T(sp, rayBundle_nc, i, &q_emlrtRTEI);
    loop_ub = rayBundle->nc->size[0] * rayBundle->nc->size[1];
    for (i = 0; i < loop_ub; i++) {
      rayBundle_nc->data[i] = rayBundle->nc->data[i];
    }
  } else {
    i = rayBundle_nc->size[0] * rayBundle_nc->size[1];
    rayBundle_nc->size[0] = 1;
    rayBundle_nc->size[1] = 1;
    emxEnsureCapacity_real_T(sp, rayBundle_nc, i, &p_emlrtRTEI);
    rayBundle_nc->data[0] = 0.0;

    /* for EPW */
  }

  i = (int32_T)rayBundle->nrays;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, rayBundle->nrays, mxDOUBLE_CLASS,
    (int32_T)rayBundle->nrays, &h_emlrtRTEI, sp);
  emxInit_real_T(sp, &tr, 1, &s_emlrtRTEI, true);
  emxInit_real_T(sp, &yr, 2, &t_emlrtRTEI, true);
  emxInit_real_T(sp, &newTraj, 2, &w_emlrtRTEI, true);
  emxInit_real_T(sp, &b_yr, 2, &bb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_rayBundle, 2, &y_emlrtRTEI, true);
  for (rayIdx = 0; rayIdx < i; rayIdx++) {
    /*  check to see if we need to move this ray */
    i1 = rayBundle->halt->size[1];
    i2 = rayIdx + 1;
    if ((i2 < 1) || (i2 > i1)) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ub_emlrtBCI, sp);
    }

    st.site = &emlrtRSI;
    if (muDoubleScalarIsNaN(rayBundle->halt->data[rayIdx])) {
      emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI, "MATLAB:nologicalnan",
        "MATLAB:nologicalnan", 0);
    }

    if (!(rayBundle->halt->data[rayIdx] != 0.0)) {
      i1 = rayBundle->trajs->size[1] - 1;
      if (rayIdx > i1) {
        emlrtDynamicBoundsCheckR2012b(rayIdx, 0, i1, &nb_emlrtBCI, sp);
      }

      trajIsNew = ((rayBundle->trajs->data[rayIdx].f1->size[0] == 0) ||
                   (rayBundle->trajs->data[rayIdx].f1->size[1] == 0));
      if (trajIsNew) {
        /*  need IC's for trajectory */
        result[0] = 1;
        result[1] = 2;
        emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])rayBundle->type->size, result,
          &emlrtECI, sp);
        c_rayBundle[0] = (rayBundle->type->data[0] == 'E');
        c_rayBundle[1] = (rayBundle->type->data[1] == 'M');
        if (ifWhileCond(c_rayBundle)) {
          i1 = rayBundle->rayICs->size[1];
          if (((int32_T)(rayIdx + 1U) < 1) || ((int32_T)(rayIdx + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(rayIdx + 1U), 1, i1,
              &tb_emlrtBCI, sp);
          }

          x0_idx_0 = rayBundle->rayICs->data[2 * rayIdx];
          sizes_idx_1 = 2 * rayIdx + 1;
          x0_idx_1 = rayBundle->rayICs->data[sizes_idx_1];

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
          /* global cnst */
          /* .c; */
          /*  get magnitude of local wavevector */
          i1 = rayBundle->frequency->size[0] * rayBundle->frequency->size[1];
          if (i2 > i1) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kb_emlrtBCI, &st);
          }

          /*  1/s */
          /*  TO DO: need to deal with the case that rayBundle_frequency */
          /*  is a row vector */
          /*  */
          /*  1/ps */
          /*  we assume light - need to fix to be more general */
          /*     we can use rayBundle_type for this... */
          /*  1/um */
          b_st.site = &h_emlrtRSI;
          c_st.site = &l_emlrtRSI;
          k0_idx_1 = closest_val(&c_st, rayGd->zVal, rayBundle->rayICs->data[2 *
            rayIdx]);
          c_st.site = &m_emlrtRSI;
          tPrev = closest_val(&c_st, rayGd->rVal, rayBundle->rayICs->data[2 *
                              rayIdx + 1]);
          b_st.site = &i_emlrtRSI;
          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               rayGd->gridNe->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1,
              rayGd->gridNe->size[0], &ib_emlrtBCI, &b_st);
          }

          if (((int32_T)tPrev < 1) || ((int32_T)tPrev > rayGd->gridNe->size[1]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)tPrev, 1, rayGd->gridNe->
              size[1], &hb_emlrtBCI, &b_st);
          }

          if (((int32_T)k0_idx_1 < 1) || ((int32_T)k0_idx_1 > rayGd->
               gridNe->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)k0_idx_1, 1, rayGd->
              gridNe->size[0], &gb_emlrtBCI, &b_st);
          }

          if (((int32_T)tPrev < 1) || ((int32_T)tPrev > rayGd->gridNe->size[1]))
          {
            emlrtDynamicBoundsCheckR2012b((int32_T)tPrev, 1, rayGd->gridNe->
              size[1], &fb_emlrtBCI, &b_st);
          }

          if (((int32_T)k0_idx_1 < 1) || ((int32_T)k0_idx_1 > rayGd->
               gridNe->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)k0_idx_1, 1, rayGd->
              gridNe->size[0], &eb_emlrtBCI, &b_st);
          }

          if (((int32_T)(tPrev - 1.0) < 1) || ((int32_T)(tPrev - 1.0) >
               rayGd->gridNe->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(tPrev - 1.0), 1,
              rayGd->gridNe->size[1], &db_emlrtBCI, &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               rayGd->gridNe->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1,
              rayGd->gridNe->size[0], &cb_emlrtBCI, &b_st);
          }

          if (((int32_T)(tPrev - 1.0) < 1) || ((int32_T)(tPrev - 1.0) >
               rayGd->gridNe->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(tPrev - 1.0), 1,
              rayGd->gridNe->size[1], &bb_emlrtBCI, &b_st);
          }

          if (((int32_T)k0_idx_1 < 1) || ((int32_T)k0_idx_1 > rayGd->zVal->size
               [0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)k0_idx_1, 1, rayGd->
              zVal->size[0], &ab_emlrtBCI, &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               rayGd->zVal->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1,
              rayGd->zVal->size[0], &y_emlrtBCI, &b_st);
          }

          if (((int32_T)k0_idx_1 < 1) || ((int32_T)k0_idx_1 > rayGd->zVal->size
               [0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)k0_idx_1, 1, rayGd->
              zVal->size[0], &x_emlrtBCI, &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               rayGd->zVal->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1,
              rayGd->zVal->size[0], &w_emlrtBCI, &b_st);
          }

          if (((int32_T)k0_idx_1 < 1) || ((int32_T)k0_idx_1 > rayGd->zVal->size
               [0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)k0_idx_1, 1, rayGd->
              zVal->size[0], &v_emlrtBCI, &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               rayGd->zVal->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1,
              rayGd->zVal->size[0], &u_emlrtBCI, &b_st);
          }

          if (((int32_T)k0_idx_1 < 1) || ((int32_T)k0_idx_1 > rayGd->zVal->size
               [0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)k0_idx_1, 1, rayGd->
              zVal->size[0], &t_emlrtBCI, &b_st);
          }

          if (((int32_T)(k0_idx_1 - 1.0) < 1) || ((int32_T)(k0_idx_1 - 1.0) >
               rayGd->zVal->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(k0_idx_1 - 1.0), 1,
              rayGd->zVal->size[0], &s_emlrtBCI, &b_st);
          }

          if (((int32_T)(tPrev - 1.0) < 1) || ((int32_T)(tPrev - 1.0) >
               rayGd->rVal->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(tPrev - 1.0), 1, rayGd->
              rVal->size[0], &r_emlrtBCI, &b_st);
          }

          if (((int32_T)tPrev < 1) || ((int32_T)tPrev > rayGd->rVal->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)tPrev, 1, rayGd->rVal->size[0],
              &q_emlrtBCI, &b_st);
          }

          if (((int32_T)(tPrev - 1.0) < 1) || ((int32_T)(tPrev - 1.0) >
               rayGd->rVal->size[0])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(tPrev - 1.0), 1, rayGd->
              rVal->size[0], &p_emlrtBCI, &b_st);
          }

          b_st.site = &j_emlrtRSI;

          /* interpOnTraj('valsNe',[x0 x0],rayGd); */
          if (i2 > rayBundle_nc->size[1]) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, rayBundle_nc->size[1],
              &jb_emlrtBCI, &st);
          }

          /*  1/cm3 */
          b_st.site = &k_emlrtRSI;
          omega_ps = rayGd->zVal->data[(int32_T)k0_idx_1 - 1];
          tStop = rayGd->zVal->data[(int32_T)(k0_idx_1 - 1.0) - 1];
          k0_idx_0 = omega_ps - rayBundle->rayICs->data[2 * rayIdx];
          x_tmp = rayBundle->rayICs->data[2 * rayIdx] - tStop;
          omega_ps -= tStop;
          tStop = rayGd->rVal->data[(int32_T)tPrev - 1];
          b_x_tmp = rayGd->rVal->data[(int32_T)(tPrev - 1.0) - 1];
          k0_idx_1 = 1.0 - muDoubleScalarPower(10.0, ((rayGd->gridNe->data
            [((int32_T)(k0_idx_1 - 1.0) + rayGd->gridNe->size[0] * ((int32_T)
            tPrev - 1)) - 1] * k0_idx_0 + rayGd->gridNe->data[((int32_T)k0_idx_1
            + rayGd->gridNe->size[0] * ((int32_T)tPrev - 1)) - 1] * x_tmp) /
            omega_ps * (rayBundle->rayICs->data[sizes_idx_1] - b_x_tmp) +
            (rayGd->gridNe->data[((int32_T)(k0_idx_1 - 1.0) + rayGd->
            gridNe->size[0] * ((int32_T)(tPrev - 1.0) - 1)) - 1] * k0_idx_0 +
             rayGd->gridNe->data[((int32_T)k0_idx_1 + rayGd->gridNe->size[0] *
            ((int32_T)(tPrev - 1.0) - 1)) - 1] * x_tmp) / omega_ps * (tStop -
            rayBundle->rayICs->data[sizes_idx_1])) / (tStop - b_x_tmp)) /
            rayBundle_nc->data[rayIdx];
          if (k0_idx_1 < 0.0) {
            emlrtErrorWithMessageIdR2018a(&b_st, &e_emlrtRTEI,
              "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError",
              3, 4, 4, "sqrt");
          }

          k0_idx_1 = muDoubleScalarSqrt(k0_idx_1);
          k0_idx_1 *= 1.0E-6 * muDoubleScalarAbs(rayBundle->frequency->
            data[rayIdx]) / cnstVar[0];

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
        if (rayIdx > rayBundle_trajs->size[1] - 1) {
          emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle_trajs->size[1] - 1,
            &mb_emlrtBCI, sp);
        }

        i1 = rayBundle_trajs->data[rayIdx].f1->size[0];
        i2 = rayBundle_trajs->data[rayIdx].f1->size[0];
        if ((i2 < 1) || (i2 > i1)) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &sb_emlrtBCI, sp);
        }

        /*  use the last time info */
        i1 = rayBundle_trajs->data[rayIdx].f1->size[1];
        if (2 > i1) {
          emlrtDynamicBoundsCheckR2012b(2, 1, i1, &bc_emlrtBCI, sp);
        }

        x0_idx_0 = rayBundle_trajs->data[rayIdx].f1->data[(rayBundle_trajs->
          data[rayIdx].f1->size[0] + rayBundle_trajs->data[rayIdx].f1->size[0])
          - 1];
        i1 = rayBundle_trajs->data[rayIdx].f1->size[1];
        if (3 > i1) {
          emlrtDynamicBoundsCheckR2012b(3, 1, i1, &bc_emlrtBCI, sp);
        }

        x0_idx_1 = rayBundle_trajs->data[rayIdx].f1->data[(rayBundle_trajs->
          data[rayIdx].f1->size[0] + rayBundle_trajs->data[rayIdx].f1->size[0] *
          2) - 1];

        /*  position row vector */
        i1 = rayBundle_trajs->data[rayIdx].f1->size[1];
        if (4 > i1) {
          emlrtDynamicBoundsCheckR2012b(4, 1, i1, &cc_emlrtBCI, sp);
        }

        k0_idx_0 = rayBundle_trajs->data[rayIdx].f1->data[(rayBundle_trajs->
          data[rayIdx].f1->size[0] + rayBundle_trajs->data[rayIdx].f1->size[0] *
          3) - 1];
        i1 = rayBundle_trajs->data[rayIdx].f1->size[1];
        if (5 > i1) {
          emlrtDynamicBoundsCheckR2012b(5, 1, i1, &cc_emlrtBCI, sp);
        }

        k0_idx_1 = rayBundle_trajs->data[rayIdx].f1->data[(rayBundle_trajs->
          data[rayIdx].f1->size[0] + rayBundle_trajs->data[rayIdx].f1->size[0] *
          4) - 1];

        /*  wave vector row vector */
        i1 = rayBundle_trajs->data[rayIdx].f1->size[1];
        if (1 > i1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, i1, &rb_emlrtBCI, sp);
        }

        tPrev = rayBundle_trajs->data[rayIdx].f1->data[rayBundle_trajs->
          data[rayIdx].f1->size[0] - 1];
      }

      /*  TO DO: deal with the case where rayBundle.frequency is a row vector */
      /*  */
      i1 = rayBundle->frequency->size[0] * rayBundle->frequency->size[1];
      if (((int32_T)(rayIdx + 1U) < 1) || ((int32_T)(rayIdx + 1U) > i1)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)(rayIdx + 1U), 1, i1,
          &wb_emlrtBCI, sp);
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
      i1 = tr->size[0];
      tr->size[0] = 1;
      emxEnsureCapacity_real_T(sp, tr, i1, &s_emlrtRTEI);
      tr->data[0] = 0.0;
      i1 = yr->size[0] * yr->size[1];
      yr->size[0] = 1;
      yr->size[1] = 1;
      emxEnsureCapacity_real_T(sp, yr, i1, &t_emlrtRTEI);
      yr->data[0] = 0.0;
      if (tStop > tPrev) {
        if (string_eq(rayBundle->type)) {
          sizes_idx_1 = 0;
        } else if (b_strcmp(rayBundle->type)) {
          sizes_idx_1 = 1;
        } else {
          sizes_idx_1 = -1;
        }

        switch (sizes_idx_1) {
         case 0:
          st.site = &d_emlrtRSI;
          ode45(&st, omega_ps, rayGd->domain, rayGd->zVal, rayGd->rVal,
                rayGd->gridNe, rayGd->gridDLogNedz, rayGd->gridDLogNedr, cnstVar,
                margin, tSpan, ray0, tr, b_yr);
          i1 = yr->size[0] * yr->size[1];
          yr->size[0] = b_yr->size[0];
          yr->size[1] = 4;
          emxEnsureCapacity_real_T(sp, yr, i1, &u_emlrtRTEI);
          loop_ub = b_yr->size[0] * b_yr->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            yr->data[i1] = b_yr->data[i1];
          }
          break;

         case 1:
          st.site = &e_emlrtRSI;
          b_ode45(&st, omega_ps, rayGd->domain, rayGd->zVal, rayGd->rVal,
                  rayGd->gridNe, rayGd->gridDLogNedz, rayGd->gridDLogNedr,
                  rayGd->gridTe, rayGd->gridDLnTedr, rayGd->gridDLnTedz, cnstVar,
                  margin, tSpan, ray0, tr, b_yr);
          i1 = yr->size[0] * yr->size[1];
          yr->size[0] = b_yr->size[0];
          yr->size[1] = 4;
          emxEnsureCapacity_real_T(sp, yr, i1, &v_emlrtRTEI);
          loop_ub = b_yr->size[0] * b_yr->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            yr->data[i1] = b_yr->data[i1];
          }

          /* otherwise */
          /* exit('invalid waveType') */
          break;
        }

        st.site = &f_emlrtRSI;
        b_st.site = &cc_emlrtRSI;
        if (tr->size[0] != 0) {
          b_result = tr->size[0];
        } else if (yr->size[0] != 0) {
          b_result = yr->size[0];
        } else {
          b_result = 0;
          if (yr->size[0] > 0) {
            b_result = yr->size[0];
          }
        }

        c_st.site = &dc_emlrtRSI;
        if ((tr->size[0] != b_result) && (tr->size[0] != 0)) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        if ((yr->size[0] != b_result) && (yr->size[0] != 0)) {
          emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
            "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
        }

        empty_non_axis_sizes = (b_result == 0);
        if (empty_non_axis_sizes || (tr->size[0] != 0)) {
          i3 = 1;
        } else {
          i3 = 0;
        }

        if (empty_non_axis_sizes || (yr->size[0] != 0)) {
          sizes_idx_1 = yr->size[1];
        } else {
          sizes_idx_1 = 0;
        }

        i1 = newTraj->size[0] * newTraj->size[1];
        newTraj->size[0] = b_result;
        newTraj->size[1] = i3 + sizes_idx_1;
        emxEnsureCapacity_real_T(&b_st, newTraj, i1, &w_emlrtRTEI);
        loop_ub = i3;
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < b_result; i2++) {
            newTraj->data[i2] = tr->data[i2];
          }
        }

        for (i1 = 0; i1 < sizes_idx_1; i1++) {
          for (i2 = 0; i2 < b_result; i2++) {
            newTraj->data[i2 + newTraj->size[0] * (i1 + i3)] = yr->data[i2 +
              b_result * i1];
          }
        }

        /*  because otherwise ode45 will return */
        /*  a struct          */
        /*  need to check and set halt flags if we are too close to */
        /*  theboundary at the last time */
        /*  */
        if (yr->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(yr->size[0], 1, yr->size[0],
            &qb_emlrtBCI, sp);
        }

        if (1 > yr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(1, 1, yr->size[1], &dc_emlrtBCI, sp);
        }

        if (2 > yr->size[1]) {
          emlrtDynamicBoundsCheckR2012b(2, 1, yr->size[1], &dc_emlrtBCI, sp);
        }

        /*  INDOMAIN - given a column vector of positions x, return a list */
        /*  of logicals showing if they are in the domain (given by rayGd) */
        /*  or not */
        /*     */
        /*  could write as zmin = (rayGd.domain+margin)(1) */
        if ((!(yr->data[(yr->size[0] + yr->size[0]) - 1] < rayGd->domain[3] -
               margin[3])) || (!(yr->data[(yr->size[0] + yr->size[0]) - 1] >
              rayGd->domain[2] + margin[2])) || ((!(yr->data[yr->size[0] - 1] <
               rayGd->domain[1] - margin[1])) || (!(yr->data[yr->size[0] - 1] >
               rayGd->domain[0] + margin[0])))) {
          i1 = rayBundle->halt->size[1];
          if (((int32_T)(rayIdx + 1U) < 1) || ((int32_T)(rayIdx + 1U) > i1)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(rayIdx + 1U), 1, i1,
              &xb_emlrtBCI, sp);
          }

          rayBundle->halt->data[rayIdx] = 1.0;

          /*  set halt flag for */
          /*  out-of-margin */
        }

        /*  attach solution to rayBundle structure */
        /*   have two cases here...  */
        if (trajIsNew) {
          loop_ub = newTraj->size[0] * newTraj->size[1];
          if (rayIdx > rayBundle_trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle_trajs->size[1] -
              1, &vb_emlrtBCI, sp);
          }

          i1 = rayBundle_trajs->data[rayIdx].f1->size[0] * rayBundle_trajs->
            data[rayIdx].f1->size[1];
          rayBundle_trajs->data[rayIdx].f1->size[0] = newTraj->size[0];
          emxEnsureCapacity_real_T(sp, rayBundle_trajs->data[rayIdx].f1, i1,
            &x_emlrtRTEI);
          if (rayIdx > rayBundle_trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle_trajs->size[1] -
              1, &vb_emlrtBCI, sp);
          }

          i1 = rayBundle_trajs->data[rayIdx].f1->size[0] * rayBundle_trajs->
            data[rayIdx].f1->size[1];
          rayBundle_trajs->data[rayIdx].f1->size[1] = newTraj->size[1];
          emxEnsureCapacity_real_T(sp, rayBundle_trajs->data[rayIdx].f1, i1,
            &x_emlrtRTEI);
          sizes_idx_1 = rayBundle_trajs->size[1] - 1;
          if (rayIdx > rayBundle_trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle_trajs->size[1] -
              1, &vb_emlrtBCI, sp);
          }

          if (rayIdx > rayBundle_trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle_trajs->size[1] -
              1, &vb_emlrtBCI, sp);
          }

          for (i1 = 0; i1 < loop_ub; i1++) {
            if (rayIdx > sizes_idx_1) {
              emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1, &yb_emlrtBCI,
                sp);
            }

            rayBundle_trajs->data[rayIdx].f1->data[i1] = newTraj->data[i1];
          }
        } else {
          /*  append to existing */
          i1 = rayBundle->trajs->size[1] - 1;
          if (rayIdx > i1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, i1, &lb_emlrtBCI, sp);
          }

          if (1.0 > (real_T)rayBundle->trajs->data[rayIdx].f1->size[0] - 1.0) {
            loop_ub = 0;
          } else {
            i1 = rayBundle->trajs->data[rayIdx].f1->size[0];
            if (1 > i1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, i1, &pb_emlrtBCI, sp);
            }

            i1 = rayBundle->trajs->data[rayIdx].f1->size[0];
            loop_ub = rayBundle->trajs->data[rayIdx].f1->size[0] - 1;
            if ((loop_ub < 1) || (loop_ub > i1)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i1, &ob_emlrtBCI, sp);
            }
          }

          /*  drop IC */
          st.site = &g_emlrtRSI;
          b_st.site = &cc_emlrtRSI;
          if ((loop_ub != 0) && (rayBundle->trajs->data[rayIdx].f1->size[1] != 0))
          {
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

          c_st.site = &dc_emlrtRSI;
          if ((rayBundle->trajs->data[rayIdx].f1->size[1] != b_result) &&
              ((loop_ub != 0) && (rayBundle->trajs->data[rayIdx].f1->size[1] !=
                                  0))) {
            emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
              "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
          }

          if ((newTraj->size[1] != b_result) && ((newTraj->size[0] != 0) &&
               (newTraj->size[1] != 0))) {
            emlrtErrorWithMessageIdR2018a(&c_st, &g_emlrtRTEI,
              "MATLAB:catenate:matrixDimensionMismatch",
              "MATLAB:catenate:matrixDimensionMismatch", 0);
          }

          empty_non_axis_sizes = (b_result == 0);
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

          sizes_idx_1 = rayBundle->trajs->data[rayIdx].f1->size[1];
          i1 = b_rayBundle->size[0] * b_rayBundle->size[1];
          b_rayBundle->size[0] = loop_ub;
          b_rayBundle->size[1] = sizes_idx_1;
          emxEnsureCapacity_real_T(&b_st, b_rayBundle, i1, &y_emlrtRTEI);
          for (i1 = 0; i1 < sizes_idx_1; i1++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_rayBundle->data[i2 + b_rayBundle->size[0] * i1] =
                rayBundle->trajs->data[rayIdx].f1->data[i2 + rayBundle->
                trajs->data[rayIdx].f1->size[0] * i1];
            }
          }

          sizes_idx_1 = rayBundle_trajs->size[1] - 1;
          if (rayIdx > rayBundle_trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle_trajs->size[1] -
              1, &ac_emlrtBCI, &b_st);
          }

          i1 = rayBundle_trajs->data[rayIdx].f1->size[0] * rayBundle_trajs->
            data[rayIdx].f1->size[1];
          rayBundle_trajs->data[rayIdx].f1->size[0] = input_sizes_idx_0 +
            sizes_idx_0;
          emxEnsureCapacity_real_T(&b_st, rayBundle_trajs->data[rayIdx].f1, i1,
            &ab_emlrtRTEI);
          if (rayIdx > sizes_idx_1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1, &ac_emlrtBCI,
              &b_st);
          }

          i1 = rayBundle_trajs->data[rayIdx].f1->size[0] * rayBundle_trajs->
            data[rayIdx].f1->size[1];
          rayBundle_trajs->data[rayIdx].f1->size[1] = b_result;
          emxEnsureCapacity_real_T(&b_st, rayBundle_trajs->data[rayIdx].f1, i1,
            &ab_emlrtRTEI);
          for (i1 = 0; i1 < b_result; i1++) {
            for (i2 = 0; i2 < input_sizes_idx_0; i2++) {
              if (rayIdx > sizes_idx_1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1,
                  &ac_emlrtBCI, &b_st);
              }

              rayBundle_trajs->data[rayIdx].f1->data[i2 + rayBundle_trajs->
                data[rayIdx].f1->size[0] * i1] = b_rayBundle->data[i2 +
                input_sizes_idx_0 * i1];
            }
          }

          for (i1 = 0; i1 < b_result; i1++) {
            for (i2 = 0; i2 < sizes_idx_0; i2++) {
              if (rayIdx > sizes_idx_1) {
                emlrtDynamicBoundsCheckR2012b(rayIdx, 0, sizes_idx_1,
                  &ac_emlrtBCI, &b_st);
              }

              rayBundle_trajs->data[rayIdx].f1->data[(i2 + input_sizes_idx_0) +
                rayBundle_trajs->data[rayIdx].f1->size[0] * i1] = newTraj->
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
  emxFree_real_T(&b_yr);
  emxFree_real_T(&newTraj);
  emxFree_real_T(&yr);
  emxFree_real_T(&tr);
  emxFree_real_T(&rayBundle_nc);

  /*  for loop over rays */
  i = rayBundle->trajs->size[0] * rayBundle->trajs->size[1];
  rayBundle->trajs->size[0] = 1;
  rayBundle->trajs->size[1] = rayBundle_trajs->size[1];
  emxEnsureCapacity_cell_wrap_0(sp, rayBundle->trajs, i, &r_emlrtRTEI);
  loop_ub = rayBundle_trajs->size[0] * rayBundle_trajs->size[1];
  for (i = 0; i < loop_ub; i++) {
    emxCopyStruct_cell_wrap_0(sp, &rayBundle->trajs->data[i],
      &rayBundle_trajs->data[i], &r_emlrtRTEI);
  }

  emxFree_cell_wrap_0(&rayBundle_trajs);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (propAlg.c) */
