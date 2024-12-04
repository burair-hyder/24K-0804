# include <stdio.h>
# include <stdlib.h>
int findhighest(int *arr,int size);
int main(){
	int num;
	int *arr;
	printf("Enter size of array:");
	scanf("%d",&num);

	arr = (int*)malloc(num*sizeof(int));
	int *temp;
	temp =arr;
	int high;
	int newsize;
	for ( int i=0;i<num;i++){
		printf("Enter Number #%d:",i+1);
		scanf("%d",(temp+i));
		
	}
	high =findhighest(arr,num);
	printf("The  high value is : %d\n",high);
	
	printf("Enter The new size:");
	scanf("%d",&newsize);
	
	arr=(int*)realloc(arr,newsize*sizeof(int));
	
	if (newsize>num){
		for ( int i=num;i<newsize;i++){
			printf("Enter Additional Numbers:");
			scanf("%d",(temp+i));
			
		}
	}
	
	high = findhighest(arr,newsize);
	printf("The new high value is : %d",high);
	
}

int  findhighest(int *arr,int size){
	int index;
	int high =-999;
	for ( int i=0;i<size;i++){
		if (arr[i]>high){
			high=  arr[i];
			index= i;
		}
	}
//	printf("The highest Number was : %d @ index: %d",high,index);
	return high;
}
