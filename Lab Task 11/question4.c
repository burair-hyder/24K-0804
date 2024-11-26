# include <stdio.h>
struct Marks{
	float maths;
	float science;
	float english;
};

struct Student{
	char roll_num[20];
	char name[20];
	struct Marks marks;
}students[5];


int main(void){
	float avg;
	for ( int i=0;i<5;i++){
		printf("Enter your name:");
		scanf("%s",students[i].name);
		printf("Enter your roll number:");
		scanf("%s",students[i].roll_num);
		printf("Please Enter your Marks!\n");
		printf("English:");
		scanf("%f",&students[i].marks.english);
		printf("Maths:");
		scanf("%f",&students[i].marks.maths);		
		printf("Science:");
		scanf("%f",&students[i].marks.science);
			
	}
	
	for ( int i=0;i<5;i++){
		avg = students[i].marks.english + students[i].marks.maths  +students[i].marks.science;
		avg = avg/3;
		printf("%s Your avg marks are :%.2f\n",students[i].name,avg);
	}
}
