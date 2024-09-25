# include <stdio.h>
int main(void){
	float ph;
	printf("Please Enter The ph of The Water:");
	scanf("%f",&ph);
	if (ph>7){
		if (ph>12){
			printf("Very Alkaline");
			
		}
		else{
			printf("Alkaline");
		}
		
	}
	else {
		if(ph==7){
			printf("Neutral");
		}
		else if (ph >2){
			printf("Acidic");
		}
		else{
			printf("Very Acidic");
		}
	}

}
