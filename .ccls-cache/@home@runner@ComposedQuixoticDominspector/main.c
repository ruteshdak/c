#include <stdio.h>

int main() {
  float celsius,far;
  printf("Enter temperature in celsius");
  scanf("%f",&celsius);
  far = (9*celsius)/5+32;
  printf("farenheit = %f",far);
  return 0;
  }
