/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * pushBundleRectMulti_mexutil.c
 *
 * Code generation for function 'pushBundleRectMulti_mexutil'
 *
 */

/* Include files */
#include "pushBundleRectMulti_mexutil.h"
#include "pushBundleRectMulti_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static pushBundleRectMultiTLS *pushBundleRectMultiTLSGlobal;

#pragma omp threadprivate (pushBundleRectMultiTLSGlobal)

/* Function Definitions */
void emlrtFreeThreadStackData(const emlrtStack *sp)
{
  jmp_buf * volatile b_emlrtJBStack;
  jmp_buf * volatile emlrtJBStack;
  int32_T i;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &b_emlrtJBStack);

#pragma omp parallel for schedule(static)\
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs()))

  for (i = 1; i <= omp_get_max_threads(); i++) {
    free(pushBundleRectMultiTLSGlobal);
  }

  emlrtPopJmpBuf(sp, &b_emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
}

pushBundleRectMultiTLS *emlrtGetThreadStackData(void)
{
  return pushBundleRectMultiTLSGlobal;
}

void emlrtInitThreadStackData(const emlrtStack *sp)
{
  jmp_buf * volatile b_emlrtJBStack;
  jmp_buf * volatile emlrtJBStack;
  int32_T i;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &b_emlrtJBStack);

#pragma omp parallel for schedule(static)\
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs()))

  for (i = 1; i <= omp_get_max_threads(); i++) {
    pushBundleRectMultiTLSGlobal = (pushBundleRectMultiTLS *)malloc((size_t)1U *
      sizeof(pushBundleRectMultiTLS));
  }

  emlrtPopJmpBuf(sp, &b_emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
}

/* End of code generation (pushBundleRectMulti_mexutil.c) */
