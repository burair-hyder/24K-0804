# include <stdio.h>
# include <string.h>
#include <cstdlib>


void displayInventory(char ***matirx, int noPets, int supplies);
	void removeSupplies(char ***matrix,int noPets,int supplies);
		void addSupplies(char ***matrix,int noPets,int supplies);
			
void init_inventory(char ****matrix,int noPets);
		
void updateSupplies(char ***matrix, int noPets, int supplies);
int main(void){
	// PETS IN HEARTS
	int noPets;
	char ***matrix;
	int supplies;
	
	
	
		
	printf("Enter Number of Species You have:");
	scanf("%d",&noPets);
	
	
		printf("Enter Number of Supplies for Pet ");
	scanf("%d",&supplies);

	init_inventory(&matrix, noPets);
	addSupplies(matrix,noPets,supplies);
	updateSupplies(matrix,noPets,supplies);
	removeSupplies(matrix,noPets,supplies);
	displayInventory(matrix,noPets,supplies);
	
	for (int i = 0; i < noPets; i++) {
    if (matrix[i] != NULL) { // Ensure it wasn't already removed
        for (int j = 0; j < supplies; j++) {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }
}

	free(matrix);
	
	
	
}

void init_inventory(char ****matrix,int noPets){

	*matrix = (char***)malloc(noPets*sizeof(char**));
	printf("helo");
}


void addSupplies(char ***matrix,int noPets,int supplies){

	int maxlength =50;
	printf("\n@");
	for (int i=0;i<noPets;i++){
		printf("\na");
		matrix[i] = (char**)malloc(supplies * sizeof(char*));
		printf("\n@");
		printf("Enter Supplies for Pet # %d: \n",i+1);
		
		for ( int j=0;j<supplies;j++){
			matrix[i][j] = (char*)malloc(maxlength * sizeof(char));
			printf("Enter Supply Name:\n");
			scanf("%s",matrix[i][j]);			
		}		
	
	}
	printf("helo");
}


void updateSupplies(char ***matrix, int noPets, int supplies){
	int pet;
	char oldsupply[50];
	char newsupply[50];
	int res;
	printf("Enter pet no to edit:");
	scanf("%d",&pet);
	printf("Etner supply to update:");
	scanf("%s",oldsupply);
	printf("Enter Updated name:");
	scanf("%s",newsupply);
	
	for ( int i=0;i<noPets;i++){
		for (int j=0;j<supplies;j++){
			res =strcmp(oldsupply,matrix[i][j]);
			if (res==0){
				strcpy(matrix[i][j],newsupply);
			}
		}
	}
	
}

void removeSupplies(char ***matrix,int noPets,int supplies){
	int remove;
	printf("Enter Pet to remove:");
	scanf("%d",&remove);
	

	for ( int i=0;i<supplies;i++){
		free(matrix[remove-1][i]);
	}  
	free(matrix[remove-1]);
	
	matrix[remove-1]= NULL;
	printf("Pet # %d Removed Succesfully!",remove);
}

void displayInventory(char ***matrix, int noPets, int supplies) {
    for (int i = 0; i < noPets; i++) {
        if (matrix[i] != NULL) { // Skip  already  removed pets
            printf("Supplies for Pet #%d:\n", i + 1);
            for (int j = 0; j < supplies; j++) {
                printf("  - %s\n", matrix[i][j]);
            }
        }
    }
}

	


