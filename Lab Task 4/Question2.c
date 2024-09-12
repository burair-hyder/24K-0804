#include <stdio.h>
int main(void){
	int num;

	printf("enter a number:");
	scanf("%d",&num);
	if (num>0 && num%2 == 0 && num%10 == 0 )
		{
			printf("Number acepted");	
		}
	else
		{
			printf("number not accepted . please enter again ");
		}
}
	
	
