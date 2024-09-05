// Question5
#include <stdio.h>

int main() {
    float principle,interestrate,timeperiod,simpleinterest;
    
  printf("Please Enter principle between the amount of  100 Rs. To 1,000,000 Rs:");
  scanf("%f",&principle);
  while (principle<100 || principle >1000000) 
  {printf("Please Enter  again principle between the amount of  100 Rs. To 1,000,000 Rs:");
  scanf("%f",&principle);}
  
      printf("Please Enter The Interest Rate Between 5% - 10 %:");
  scanf("%f",&interestrate);
  while (interestrate <5 || interestrate>10)
  {printf("Please Enter The Interest Rate Between 5% - 10 %:");
  scanf("%f",&interestrate);}
  
  printf("Please Enter a Time Period Between 1 and 10 Years:");
  scanf("%f",&timeperiod);
  while (timeperiod <1 || timeperiod >10)
  {printf("Please Enter a Time Period Between 1 and 10 Years:");
  scanf("%f",&timeperiod);}
  
  simpleinterest  = (principle*interestrate*timeperiod)/100;
  printf("The Simple Interest is %f",simpleinterest);
  
}
