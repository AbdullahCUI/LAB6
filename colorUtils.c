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
 // for AVERAGE TECHNIQUE
  if (mode == AVERAGE) {
    *r = *g = *b = (*r + *g + *b) / 3;
  }
  //FOR LIGHTNESS TECHNIQUE
  else if (mode == LIGHTNESS) {
    *r = *g = *b = (max(*r, *g, *b) + min(*r, *g, *b))/2;
  } 
  //FOR LUMINOSITY TECHNIQUE
  else if (mode == LUMINOSITY) {
    *r = *g = *b = round(0.21 * *r + 0.72 * *g + 0.07 * *b);
  }

  return NO_ERROR;
}


  //TODO: implement
  // this function for to check the condition for sepia
int checkSepia(float value){
  return (value < 255) ? value : 255;
}
// value passed by refrence to this function no need of return type 
// Error write to return the ERROR VALUE
Error toSepia(int *r, int *g, int *b){
  if(r == NULL || g == NULL || b == NULL){
    return ERROR_PRESENT;
  }
  

