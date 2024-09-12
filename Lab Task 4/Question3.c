# include <stdio.h>
int main ()
{
	int num1,num2,res;
	char op;
	
	printf("enter number one :");
	scanf("%d",&num1);
	printf("enter operator :");
	scanf(" %c",&op);
	printf("enter second number:");
	scanf("%d",&num2);
	
	switch (op) 
	{
		case '+':
			res = num1 + num2;
			break;
		case '-':
			res = num1 - num2;
			break;
		case '*':
			res = num1 * num2;
			break;
		case '/':
			res = num1 / num2;
			break;
		default:
			printf("invalid operator input");
			
						
	}
	printf("The result is :%d",res);

}
