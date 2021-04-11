/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * strcmp.c
 *
 * Code generation for function 'strcmp'
 *
 */

/* Include files */
#include "strcmp.h"
#include "pushBundleRect.h"
#include "rt_nonfinite.h"
#include <string.h>

/* Function Definitions */
boolean_T b_strcmp(const char_T a[2])
{
  static const char_T b[2] = { 'E', 'M' };

  emlrt_checkEscapedGlobals();
  return memcmp(&a[0], &b[0], 2) == 0;
}

/* End of code generation (strcmp.c) */
