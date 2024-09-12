# include <stdio.h>
int main() {
	int a;
	printf("enter the character :");
	scanf(" %c",&a);
	if (a>=97 && a <=122)
	{
		printf("it is a small alphabet");
		
	}
	else if (a >=65 && a <=90)
	{
		printf("it is a capital alphabet");
		
	}
	else if  ( a >=48 && a <=57)
	{
		printf("it is a digit ");
		
	}
		
	else if ((a  >=32 && a<=47) || (a>=58 && a <= 64) || (a>=91 && a <=96) || (a>=123 && a <= 126))
	{
		printf("it is a special character ");
		
	}
}
