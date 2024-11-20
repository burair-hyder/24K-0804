# include <stdio.h>

struct packages{
	char packagename[20];
	char destination[20];
	int duration;
	float cost;
	int availableseats;
	
};

void bookpackage(struct packages pack[],int size,int num);
void displaypackages(struct packages pack[],int size);
int main(void){
	int num;
	 struct packages pack[3] = {
        {"Mystic ", "Indonesia", 14, 1200.00, 5},
        {"Exploration", "Japan", 10, 800.00, 3},
        {"Adventure", "New Zealand", 7, 1500.00,2}
};
	
	int size=3;
	
	displaypackages(pack,size);
	
	printf("Enter Corressponding Package Number to Book:");
	scanf("%d",&num);
	bookpackage(pack,size,num);

		
}

void displaypackages(struct packages pack[],int size){
	
	for ( int i=0;i<size;i++){
		printf(" Package Number:%d\n",i+1);
		printf(" Name : %s", pack[i].packagename);
		printf(" Destination : %s", pack[i].destination);
		printf(" Duration :  %d days ", pack[i].duration);
		printf(" Cost :$%.3f ", pack[i].cost);
		printf(" available seats : %d", pack[i].availableseats);
		printf("\n");
		printf(" ");
		printf("\n");
	}
	
}


void bookpackage(struct packages pack[],int size,int num){
	int seats=0;
	char name[20];
	printf("Enter Your Name:");
	scanf("%s",name);
	printf("How many seats you want to book :");
	scanf("%d",&seats);
	
	if (seats >pack[num-1].availableseats ){
		printf("Sorry! The Required Number of Seats are not available., %s ",name);
	}
	else{
		printf("Successfully Booked your Desired Package!\n");
		printf("Trip to %s is confirmed under package : %s\n",pack[num-1].destination,pack[num-1].packagename);
		
		printf("Have a W0nderfull Trip, %s",name);
		pack[num-1].availableseats= pack[num-1].availableseats - seats;
	
	}
}
