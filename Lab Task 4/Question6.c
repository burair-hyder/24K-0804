# include <stdio.h>
int main(void){
	float costitem,amountsaved,discountprice;
	printf("please enter total cost of items :");
	scanf("%f",&costitem);
	
	if (costitem >=500 && costitem < 2000){
		discountprice = (costitem * 95)/100;
		amountsaved  =  (costitem * 5)/100;	
	}
	else if (costitem >=2000 && costitem < 4000){
		discountprice = (costitem * 90)/100;
		amountsaved  =  (costitem * 10)/100;
}
	else if (costitem >=4000 && costitem <6000 ){
		discountprice = (costitem * 80)/100;
		amountsaved  =  (costitem * 20)/100;
}
	else if (costitem > 6000){
		discountprice = (costitem *65)/100;
		amountsaved = (costitem *35)/100;
}
	else if (costitem <500){
		discountprice = costitem;
		
	
	}

	printf("the actual amount was :%.3f\n",costitem);
	printf("the amount saved is : %.3f\n",amountsaved );
	printf("the discounted amount is :  %.3f\n",discountprice);

}
