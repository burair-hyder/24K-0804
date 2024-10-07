#include <stdio.h>
int main(void){
	int a = 65;
	int b = a+4;
	for (int i=0;i<6;i++){
		if (i==0|| i==5){
		
		printf(" %c  %c  %c  %c  %c \n",a,a+1,a+2,a+3,b);
	}
		else{
		printf(" %c           %c \n",a,b);
		}
		a++;
		b++;
	}
}
