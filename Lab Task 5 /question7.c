#include <stdio.h>

int main() {
    int  num;
    printf("please enter a number:\n");
    scanf("%d",&num);
    (num%10 == 0)? printf("last  digit is zero"): printf("last digit is non zero");
}
