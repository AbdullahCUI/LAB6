#include <stdlib.h>
#include <math.h>

#include "colorUtils.h"

int max(int a, int b, int c) {
  return (a > b) ? (a > c ? a : c) : (b > c ? b: c);
}

int min(int a, int b, int c) {
  return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

// This function return Error and the Value of diferent filter
Error toGrayScale(int *r, int *g, int *b, Mode mode) {
  // if the address or refrence pass to this function as 0 it will return the value 1
  if(r == NULL || g == NULL || b == NULL ){
    return ERROR_PRESENT;
  }
}

int toSepia(int *r, int *g, int *b) {
  //TODO: implement
}
