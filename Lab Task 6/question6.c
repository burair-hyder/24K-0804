#include <stdio.h>
int main(void){
int x= 0;
do {
	if (x==0 || x==5){
		printf("*       *\n");
		
	}
	else{
		printf("* * * * *\n");
	}
	x++;
}
while (x<6);
}
