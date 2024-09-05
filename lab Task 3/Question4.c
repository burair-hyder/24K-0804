// Question4
#include <stdio.h>

int main() {
    float fuelavg,costforward,costbackward,totalcost;
    printf("Please enter your car's fuel average:");
    scanf("%f",&fuelavg);
    while (fuelavg <=0)
        { printf("please enter valid fuel average:");
            scanf("%f",&fuelavg);}
        
    costforward = (1207/fuelavg)*118;
    costbackward=  (1207/fuelavg)*123;
    totalcost = costforward + costbackward;
    printf(" it costed %.4f rupes for the total trip",totalcost);

}
