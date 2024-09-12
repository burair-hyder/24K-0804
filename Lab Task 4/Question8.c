# include <stdio.h>
int main(void){
	int num ; 
	printf("please enter a number between 1 and 9 :");
	scanf("%d",&num);
	if (num >=1 && num <=9){
		switch(num){
			case 1:
				printf("one");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6 :
				printf("Six");
				break;
			case 7 :
				printf("Seven");
				break;
			case  8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine");
				break;
			
		}
	}
	else{
		printf("the number is greater than 9 ");
	}
}
