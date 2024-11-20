# include <stdio.h>
# include <math.h>

struct points{
	int x;
	int y;
	
}I,J,B1,B2,B3,B4,check;
void distance(struct points A,struct points B);
void tocheck(struct points check);
int main(){
		
	printf("Please Enter first Coordinate  x1 and y1:");
	scanf("%d",&I.x);
	scanf("%d",&I.y);
	printf("Please Enter Second Coordinate  x2 and y2:");
	scanf("%d",&J.x);
	scanf("%d",&J.y);

	
	distance(I,J);
	
	printf("\nEnter 4 boundry coordinates of the rectangle:\n");
	
	printf("Enter botton left points\n");
	printf("x1:");
	scanf("%d",&B1.x);
	printf("y1:");
	scanf("%d",&B1.y);
	
	printf("Enter botton right points\n");
	printf("x2:");
	scanf("%d",&B2.x);
	printf("y2:");
	scanf("%d",&B2.y);
	
	printf("Enter top right points\n");
	printf("x3:");
	scanf("%d",&B3.x);
	printf("y3:");
	scanf("%d",&B3.y);
	
	printf("Enter top left points\n");
	printf("x4:");
	scanf("%d",&B4.x);
	printf("y4:");
	scanf("%d",&B4.y);
	
	printf("Enter coordinates to verify :");
	printf("x1 y1");
	scanf("%d %d",&check.x,&check.y);
	
	tocheck(check);
	
}



void distance(struct points A,struct points B){
	int x;
	int y;
	float value;
	x= (A.x) -(B.x);
	x = pow(x,2);
	y = (A.y) -(B.y);
	y = pow(y,2);
	value = x +y;
	value = pow(value ,0.5);
	printf("the distance between the point (%d,%d) and (%d,%d)is %.2f",A.x,A.y,B.x,B.y,value);
	
}

void tocheck(struct points check){
	if ((check.x<B2.x && check.x>B1.x) && (check.y<B4.y && check.y > B1.y))
	{
		printf("Point Lie Within the Rectangle!");
	}
	else{
		printf("Point Lie Outside the Rectangle!");
	}
	
	}
