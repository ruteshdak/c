#include <stdio.h>
int main(){
  float cp,sp,profit,loss;
  printf("Enter your cp:\n");
  scanf("%f",&cp);
  printf("Enter your sp :\n");
  scanf("%f",&sp);
  
  loss = sp-cp;
    if (sp>cp){
      profit = sp-cp;
      printf("Profit = %f",profit);
    }
    else{
     printf("Loss = %f",loss);
    }
  }
