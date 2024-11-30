#include <stdio.h>

typedef struct Company{
    char name[20];
    int year;
    char department[5][20];
}Company;
int main(){
    Company company;

    printf("Enter the Company Name: ");
    scanf(" %s",company.name);

    printf("Enter the Year it was established: ");
    scanf(" %d",&company.year);

    printf("Enter the Department names \n");
    for (int i = 0; i < 5; i++){
        printf("Department 0%d: ", i+1);
        scanf(" %s",company.department[i]);
    }

    printf("\n");

    printf(" THE %s\n",company.name);
    printf(" YEAR :%d\n",company.year);
    for (int i = 0; i < 5; i++){
        printf("Department 0%d: %s\n",i+1,company.department[i]);
    }

}
