#include <stdio.h>

int main() {
  float cm,inch,ft,dist,km,meters;
  printf("Enter the distance in kilometers \n");
  scanf("%f",&dist);
  meters = 1000*dist;
  cm  = meters*100;
  inch = cm/2.54;
  ft = inch/12;
  printf("cm = %f",cm);
  printf("inch = %f",inch);
  printf("ft = %f",ft);
  printf("meters = %f",meters);
  return 0;
  }
