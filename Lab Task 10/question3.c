# include <stdio.h>
int count(int temp);
int main(){
	int temp;
	int value;
	while (temp != -273){
	
	printf("Enter Input temperature OR enter -100 to exit :");
	scanf("%d",&temp);
	value =count(temp);
}
	printf("temperature exceeded the limit %d times ",value);
}


int count(int temp){
	const int max =100;
	static int index;
	if ( temp>max){
		index++;
	}
	return index;
}
