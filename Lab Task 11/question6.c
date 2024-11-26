#include <stdio.h>
struct Address{
	char city[20];
	int zip_code;
	
};
struct Employee{
	char field_name[20];
	char id[20];
	float salary;
	struct Address address;
	
}employees,tempemp;
int main(){
	FILE *fptr;
	fptr = fopen("test.bin","wb");
	
	for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        
        printf("Field Name: ");
        scanf("%s", employees.field_name);
        
        printf("Employee ID: ");
        scanf("%s", employees.id);
        
        printf("Salary: ");
        scanf("%f", &employees.salary);
        
        printf("City: ");
        scanf("%s", employees.address.city);
        
        printf("Zip Code: ");
        scanf("%d", &employees.address.zip_code);
        
        printf("\n");  
        
         fwrite(&employees,sizeof(Employee),1,fptr);
    }
    fclose(fptr);
   
   fptr = fopen("test.bin","rb");
   printf("Printing Employee INFO;\n");
   for ( int i=0;i<3;i++){
   
   fread(&tempemp,sizeof(Employee),1,fptr);
     
        printf("Field Name:%s", tempemp.field_name);
        
        printf("\n");
        printf("Employee ID:%s", tempemp.id);
        printf("\n");
     
        printf("Salary: %.2f", tempemp.salary);
        printf("\n");
    
        printf("City: %s", tempemp.address.city);
        
       printf("\n");
        printf("Zip Code:%d", tempemp.address.zip_code);
        printf(" \n");
 		printf(" \n");       
       
        
    }
    fclose(fptr);
}
