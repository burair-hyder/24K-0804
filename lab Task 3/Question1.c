// Question 1
# include <stdio.h> // preprocessor directory

int main(){   // main function driver mode

	int temp,num1,num2 ;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("now the first number is : %d\n",num1);
	printf("now the second number is : %d",num2);


}
