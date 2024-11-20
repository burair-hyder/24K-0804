# include <stdio.h>
int recprintarray(int arr[],int size);
int main(void){
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	int size=10;
	recprintarray(num,size);
}

int recprintarray(int arr[],int size){
    	if (size<=0){
	    return 1;
		}
	
	recprintarray(arr,size-1);
	printf("%d\n",arr[size-1]);

}
