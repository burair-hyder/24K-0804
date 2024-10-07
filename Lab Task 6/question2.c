# include <stdio.h>
int main(void){
	int num;
	int flag=0;
	printf("Enter Number:");
	scanf("%d",&num);
	
	for (int i=2;i<num;i++){
		if (num%i == 0)
			flag  = 1;
		
		}
		
	if (flag ==1 ){
	 printf("Not Prime");}
	
	else {
	printf("prime");}
}
