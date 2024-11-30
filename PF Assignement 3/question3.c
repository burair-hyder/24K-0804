# include <stdio.h>
#include <string.h>
#include <cstdlib>


int validate(char *email);
int main(void){
	
	int size;
	char *email;
	email = (char*)malloc(50* sizeof(char));
	int res;
	
	printf("Enter Email for Validation: ");
	fgets(email,50,stdin);
	size = strlen(email);	
	email = (char*)realloc(email,size * sizeof(char));


	res =validate(email);
	if (res==1){
		printf("Valid Email!");
		
	}
	else{
		printf("Invalid Email!");
	}
	free(email);
		
}

int validate(char *email){
	int size;
	int i;
	int countat=0;
	int flag =0;
	size=  strlen(email);
	if (size==0){
		return 0;
	}
	for (i=0;i<size;i++){
		
		if (email[i]=='@'){
			countat++;
			if(email[i+1]=='.'){
				flag =1;
			}
		}
	}
	
	if (countat==1 && flag ==1){
		return 1;
	}
	else
		return 0;
	
}
