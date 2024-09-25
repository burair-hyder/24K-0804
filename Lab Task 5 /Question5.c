# include <stdio.h>
int main(void){
	float gpa;
	printf("Please Enter your gpa:");
	scanf("%f",&gpa);
	(gpa>=0.0 && gpa<=0.99)? printf("Failed Semester--registration suspended"):
	(gpa>=1.0&& gpa <=1.99)? printf("On porbation for next semester"):
	(gpa>=3.0&& gpa <=3.49)? printf("Dean's list for semester"):
	(gpa >=3.5&& gpa<=4.00)? printf("Highest Honors for semester"): printf("");



}
