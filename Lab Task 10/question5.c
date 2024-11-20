# include <stdio.h>
int recbubblesort(int arr[],int size);
int main(void){
	int arr[30] = {
    84, 56, 39, 12, 76, 50, 62, 45, 18, 91,
    27, 59, 8, 78, 14, 37, 11, 67, 3, 29,
    95, 23, 61, 41, 13, 68, 66, 47, 16, 26,
    
};

	int size = sizeof(arr)/sizeof(arr[0]);	
	recbubblesort(arr,size);
	
	for ( int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	
}

int recbubblesort(int arr[],int size){
	static int x=0;
	static int i=0;
	int temp;
	if (x== (size)*(size)){
		return 1;
	}
	else{
		if  (i==size-1){
		i=0;}
	
	if(arr[i]>arr[i+1]){
		temp = arr[i+1];
		arr[i+1] = arr[i];
		arr[i] = temp;
		
	}
	i++;
	x++;
	recbubblesort(arr,size);
}
}
