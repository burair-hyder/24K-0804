# include <stdio.h>
struct date{
	int day;
	int month;
	int year;
};
struct Employee{
	char employeeName[20];
	char employeeCode[20];
	struct date dateOfJoining;
	
};


void assign(struct Employee *employees);
void calculate(struct Employee *employees);
int main(){
	struct Employee employees[4];
	assign(employees);
	calculate(employees);
	
}

void assign(struct Employee *employees){
	int i;
	for (i=0;i<4;i++){
		printf("Enter Your Name:");
		scanf("%s",employees[i].employeeName);
		printf("Enter Your Code:");
		scanf("%s",employees[i].employeeCode);
		printf("Enter Your Date Of Joining: (DD//MM//YYYY)");
		scanf("%d %d %d",&employees[i].dateOfJoining.day, &employees[i].dateOfJoining.month,&employees[i].dateOfJoining.year);
	}	
	
}


void calculate(struct Employee *employees){
	int day,year,month;
	printf("enter Current Date: (DD//MM//YYYY)");
	scanf("%d %d %d",&day,&month,&year);
	int i=0;
	int value;
	int count=0;
	for (i=0;i<4;i++){
	
	if ( day < employees[i].dateOfJoining.day){
		value = month - employees[i].dateOfJoining.month;
		value = (value *30) - (employees[i].dateOfJoining.day- day);
		value = value + ((year- employees[i].dateOfJoining.year)*365);
		
	}
	else{
		value = month - employees[i].dateOfJoining.month;
		value = (value*30) +(day-employees[i].dateOfJoining.day);
		value = value + ((year- employees[i].dateOfJoining.year)*365);
		
	}
	
	if (value >1095){
		printf("Name: %s\n", employees[i].employeeName);
		printf("Code: %s\n", employees[i].employeeCode);
		printf(" joining date : %d //%d// %d \n",employees[i].dateOfJoining.day,employees[i].dateOfJoining.month,employees[i].dateOfJoining.year);
		count++;
	}
	
}
printf("%d",count);

}


