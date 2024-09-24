# include <stdio.h>
int main(void){
	char type,size;
	float step1,step2,step3,step4,step5,step6;
	printf("Enter B for black coffee and W for white coffee:");
	scanf(" %c",&type);
	printf("Enter D for double size and N for normal:");
	scanf(" %c",&size);
	switch(type){
		case 'B':
		case 'b':
			
			switch(size){
				case  'd':
				case 'D':
					step1 = (20.0*150)/100;
					step2 = (20.0*150)/100;
					step3 = (25.0*150)/100;
					step4=  (15.0*150)/100;
					step5= 0;
					step6 = (25.0*150)/100;
					break;
				case 'N':
				case 'n':
					step1 = 20.0;
					step2 = 20.0;
					step3 = 25.0;
					step4= 15.0;
					step5= 0.0;
					step6 = 25.0;
					break;
			}
			break;						
		case 'w':
		case 'W':
			switch(size){
				case  'd':
				case 'D':
					step1 = (15.0*150)/100;
					step2 = (15.0*150)/100;
					step3 = (20.0*150)/100;
					step4=  (2.0*150)/100;
					step5= (4.0*150)/100;
					step6 = (20.0*150)/100;
					break;
				case 'N':
				case 'n':
					step1 = 15.0;
					step2 = 15.0;
					step3 = 20.0;
					step4= 2.0;
					step5=4.0;
					step6 = 20.0;
					break;				
	}
			break;
		
		default:
			printf("invalid input values\n");
			break;

}
printf("Put water: Estimated time  = %.3f\n",step1);
printf("Sugar: Estimated time  = %.3f\n",step2);
printf("Mix Well: Estimated time  = %.3f\n",step3);
printf("Add Coffee: Estimated time  = %.3f\n",step4);
printf("Add Milk: Estimated time  = %.3f\n",step5);
printf("Mix Well: Estimated time  = %.3f\n",step6);
printf("total expected time =%.3f",(step1+step2+step3+step4+step5+step6));
}
