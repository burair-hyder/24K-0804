# include <stdio.h>
int main(void){
	int customerid , units,Bill,surcharge;
	float total;
	surcharge = 0;
	printf("please enter your customer id :");
	scanf("%d",&customerid);
	printf("please enter total units consumed :");
	scanf("%d",&units);
	
	if ( units<200){
		Bill = (units *16.20);
	}
	else if ( units >=200 && units < 300){
		Bill = (units * 20.10);
		
	}
	else if ( units >=300 && units < 500 ){
		Bill = (units*27.10);
		
	}
	else if (units>= 500 ){
		Bill = units * 35.90;
	}
	
	if  (Bill > 18000){
		surcharge = ((Bill*15)/100);
	}
	total = total + surcharge;
	printf("your customer id is %d\n",customerid);
	printf("your total units are : %d\n",units);
	printf("your cost is : %d\n ",Bill);
	printf("your surcharge amount is : %d\n",surcharge);
	printf("your total bill is : %f\n",total);
	
}
