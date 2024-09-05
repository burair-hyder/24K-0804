// Question 3
#include <stdio.h>

int main() {
    float salary,taxrate,tax;
    printf("Please enter your salary:");
    scanf("%f",&salary);
    printf("Please enter the tax rate :");
    scanf("%f",&taxrate);
    tax = (salary * taxrate)/100;
    salary  = (salary *(1-(taxrate/100)));
    printf("You have to pay %.4f as tax\n",tax);
    printf("The salary you will receive is %.4f\n",salary);
    
}
