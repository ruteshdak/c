#include <stdio.h>
int main(){
  int l,b,area,perimeter;
  printf("Enter length and breadth : \n");
  scanf("%d %d",&l,&b);
  area = l*b;
  perimeter = 2*(l+b);
  printf("Area is %d \n",area);
  printf("Perimeter is = %d",perimeter);
}