# include <stdio.h>
# include <stdbool.h>
int main(void){
	bool weekday;
	bool vacation;
	int temp;
	printf("Please Enter 1 if today is weekday else 0:\n ");
	scanf("%d",&temp);
	weekday = temp;
	printf("Please etner 1 if it is vacation else enter 0:");
	scanf("%d",&temp);
	vacation = temp;
	if ((weekday ==0)||(vacation)){
		printf("true");
	}
	else{
		printf("false");
	}
	return 0;
}
