// the question stated the definition of armstrong that the number is same as sum of cube of its digits.
// though it is not correct definition ,however the code is written as per questions requirement.
# include <stdio.h>
int main(void){
	int num,digit;
	int check =0,temp;
	printf("Enter a number :");
	scanf("%d",&num);
	temp =num;
	while (temp!=0){
		digit = temp%10;
		temp = temp/10;
		check = check + (digit*digit*digit);
		
		
	}
	if (num == check){
	printf("Armstrong\n");}
	else{printf("Not Armstrong\n12");
	}
	printf("%d\n",check);
	printf("%d\n",num);

}
