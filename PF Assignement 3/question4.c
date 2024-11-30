#include <stdio.h>

#include <cstdlib>
struct Employee{
	int totalScore;
	int **ratings;
};
void inputEmployees(int **ratings, int numEmployees,int numPeriods);
void displayPerformance(int **ratings, int numEmployees,int numPeriods);
int findEmployeeOfTheYear(int **ratings,int numEmployees,int numPeriods);
int findHighestRatedPeriod(int **ratings, int numEmployees, int numPeriods);
int findWorstPerformingEmployee(int **ratings, int numEmployees, int numPeriods);
int main(){	
	int numEmployees;
	int numPeriod;
	int year,best,year2;
	int **ratings;
	printf("Enter Number of Employees:");
	scanf("%d",&numEmployees);
	
	printf("Enter no of  Evaluation Periods:");
	scanf("%d",&numPeriod);
	
//	struct Employees employees[numEmployees];

	// allocating memory for array of pointers
	
	ratings = (int**)malloc(numEmployees*sizeof(int*));
	if (ratings == NULL)
		printf("Allocation Failed");
	else{
	
		printf("Sucessfull Allocation for array of Pointers\n");
	for (int i=0;i<numEmployees;i++){
		ratings[i] = (int*)malloc(numPeriod*sizeof(int));
		if (ratings[i]==NULL)
			printf("Allocation Failed\n");
		else{
			printf("Sucessfully Allocated for array \n");
		}	
	}
	
	inputEmployees(ratings,numEmployees,numPeriod);
	displayPerformance(ratings,numEmployees,numPeriod);
	year = findEmployeeOfTheYear(ratings,numEmployees,numPeriod);
	best = findHighestRatedPeriod(ratings,numEmployees,numPeriod);
	year2 = findWorstPerformingEmployee(ratings,numEmployees,numPeriod);
	
	printf("Employee Of the year  is %d\n",year);
	printf("best period was %d\n",best);
	printf("worst employee  of the year is %d\n",year2);
	free(ratings);
}

	
}
void inputEmployees(int **ratings, int numEmployees,int numPeriods){
	int i;
	int j;
	int value;
	int total =0;
	for(i=0;i<numEmployees;i++ ){
		for (j=0;j<numPeriods;j++){
			
			while(1){
			printf("Enter rating:");
			scanf("%d",&value);	
			if (value>=1 && value <=10){
				ratings[i][j] = value;
				total = total+value;
				break;
				}
			else{
				printf("invalid Enter again!\n");
				}
			}
		}
	
		
		
	}
}


void displayPerformance(int **ratings, int numEmployees,int numPeriods){
	printf(" \n");
	printf("num of rows : %d\n",numEmployees);
	printf("num of columns : %d\n",numPeriods);
 	for ( int i=0;i<numEmployees;i++){
 		
 			printf("Ratings for Employee # %d\n",i+1);
 		for ( int j=0;j<numPeriods;j++){
 			printf("Evalution Period # %d : Rating = %d\n",j,ratings[i][j]);
 			
 			
		 }
	 }
 }
 
 
int  findEmployeeOfTheYear(int **ratings,int numEmployees,int numPeriods){
	int *temp;
	int i;
	int j;
	int index;
	int high =-1;
	int value =0;
	temp = (int*)malloc(numEmployees*sizeof(int));
	if (temp != NULL){
		printf("Memory Allocation successfull\n");
	
	for (i=0;i<numEmployees;i++){
		for (j=0;j<numPeriods;j++){
			value = value +ratings[i][j];
			
		}
		temp[i] = value/numPeriods;
		value=0;
		
	}
	
	for ( i=0;i<numEmployees;i++){
		if (temp[i]>high){
			high = temp[i];
			index =i;
		}
	}
//	printf("Employee with the highest avg rating was  # %d with avg rating of %d",index,high);
	free(temp);
	return index+1;
}
else{

	printf("Memory allocation for temp failed!");
}
	
	
}

int findHighestRatedPeriod(int **ratings, int numEmployees, int numPeriods){
	int i;
	int j;
	int *temp;
	int high =-9;
	int index=0;
	int value =0;
	temp = (int*)malloc(numPeriods * sizeof(int));
	
	if (temp != NULL){
	
	for ( j=0;j<numPeriods;j++){
			value =0;
		for (i=0;i<numEmployees;i++){
			value = value + ratings[i][j];	
		}
		temp[j] = value/numEmployees;
	
		
	}
	
	for ( i=0;i<numPeriods;i++){
		if (temp[i]>high){
			high = temp[i];
			index =i;
		}

	}
	
	//	printf("Highest Avg rating Evalution Period #%d, with rating of %d",index,high);
	free(temp);
	return index+1;

}

else{

printf("Allocation Failed for temp!");
}
	
	
}

int findWorstPerformingEmployee(int **ratings, int numEmployees, int numPeriods){
	int *temp;
	int i;
	int j;
	int index;
	int low =999;
	int value =0;
	temp = (int*)malloc(numEmployees*sizeof(int));
	
	for (i=0;i<numEmployees;i++){
		for (j=0;j<numPeriods;j++){
			value = value +ratings[i][j];
			
		}
		temp[i] = value/numPeriods;
		value=0;
		
	}
	
	for ( i=0;i<numEmployees;i++){
		if (temp[i]<low){
			low = temp[i];
			index =i;
		}
	}


	//printf("Employee with the highest avg rating was  # %d with avg rating of %d",index,low);	
	free(temp);
	return index+1;
}







