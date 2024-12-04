# include <stdio.h>
 #include <stdlib.h>
int main(){

	int num;
	int *arr;
	int sum;
	int *sptr;
	sptr =&sum;
	printf("How many numbers:");
	scanf("%d",&num);
	arr = (int*)malloc(num*sizeof(int));
	for ( int i=0;i<num;i++){
		printf("Enter Number#%d: ",i+1);
		scanf("%d",(arr+i));
	}
	
	for ( int i=0;i<num;i++){
		*sptr = *sptr + *(arr+i);
		
	}
	
	printf("Sum of Numbers is : %d",*sptr);
	
}


