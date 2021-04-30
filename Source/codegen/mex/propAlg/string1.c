/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * string1.c
 *
 * Code generation for function 'string1'
 *
 */

/* Include files */
#include "string1.h"
#include "propAlg_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T string_eq(const emxArray_char_T *obj1)
{
  static const char_T cv[2] = { 'E', 'M' };

  int32_T exitg1;
  int32_T kstr;
  boolean_T equal;
  equal = false;
  if (obj1->size[1] == 2) {
    kstr = 0;
    do {
      exitg1 = 0;
      if (kstr < 2) {
        if (obj1->data[kstr] != cv[kstr]) {
          exitg1 = 1;
        } else {
          kstr++;
        }
      } else {
        equal = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return equal;
}

/* End of code generation (string1.c) */
