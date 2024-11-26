#include <stdio.h>
struct Date{
	int day;
	int month;
	int year;
};

struct Fields{
	char event_name[20];
	struct Date date;
	char location[30];
}fields[3];

void inputdata(){
	
for (int i=0;i<3;i++){
	printf("Enter Event Name:");
	scanf("%s",fields[i].event_name);
	printf("Enter location:");
	scanf("%s",fields[i].location);
	printf("Enter date (DD/MM/YYYY):");
	scanf("%d %d %d",&fields[i].date.day,&fields[i].date.month,&fields[i].date.year);
	
	
	}
	
}

void inputdata();
int main(){
	int num;
	printf("Press 1 to Enter data:");
	scanf("%d",&num);
	if ( num==1){
		  inputdata();
	}

for ( int i=0;i<3;i++){
	printf("Event Name: %s\n",fields[i].event_name);
	printf("Location : %s\n",fields[i].location);
	printf("Date : %d-%d-%d\n",fields[i].date.day,fields[i].date.month,fields[i].date.year);
	
	printf(" \n");
}


}
