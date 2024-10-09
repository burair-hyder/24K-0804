// question3 
#include <stdio.h>
int main() {
    int terms;
    printf("Enter the number of Terms: ");
    scanf("%d", &terms);
    int precedingterm = 0;
    int comingterm = 1;
    int i;
    int sum = 0;
    int flag = 0;
   
    for(i = 2; i < terms; i++){
		if (terms%i==0)
			flag = 1;
	}
	
	if (flag==0){
	 printf("%d %d ", precedingterm, comingterm);
	for(i = 2; i < terms; i++){
        sum = precedingterm + comingterm;
        precedingterm = comingterm;
        comingterm = sum;
        printf("%d ", sum);
    }
}
    
}
