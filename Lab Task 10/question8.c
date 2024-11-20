#include <stdio.h>
int  recfindelement(int arr[],int size,int target, int i);
int main(void){
	int num[10]= {2,3,54,95,55,4,0,69,8,10};
	int target;
	printf("Enter Value To Find :");
	scanf("%d",&target);
	int size=sizeof(num)/sizeof(num[0]);
	int i=0;
	recfindelement(num,size,target,i);
}

int recfindelement(int arr[],int size , int target, int i){
	if ( arr[i]== target || i>=size){
		if(i>=size){
			printf("Value Not Found");
			
		}
		else{
		
		printf("Target Found @ index %d",i);
		}
		return 1;
		
	}
	else{
	recfindelement(arr,size,target,i+1);
}
}
