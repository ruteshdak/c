#include <stdio.h>
int main(){
  int year,basic_year=1900, remaining_year,leap_year,total_days,days;
  printf("Enter the year");
  scanf("%d",& year);
  year = year-1-(basic_year);
  leap_year = year/4;
  remaining_year = year-leap_year;
  total_days = (remaining_year*365) + (leap_year*366)+1;
  days = total_days%7;
  if(days==0){
    printf("monday");
  }
  else if(days==1){
    printf("Tuesday");
  }
  else if(days == 2){
    printf("Wednesday");
  }
  else if(days ==3){
    printf("Thursday");
  }
  else if(days ==4){
    printf("Friday");
  }
  else if(days ==5){
    printf("Saturday");
  }
  else if(days ==6){
    printf("Sunday");
  }
  else {
    printf("Wrong entry");
  }
    }