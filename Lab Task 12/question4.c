# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
	char buffer[30];
	char *name_dma;
	int value;
	printf("Enter total Number of Characters in your name:");
	scanf("%d",&value);
	
	while(getchar()!= '\n');
	printf("Enter your full name:");
	gets(buffer);
	if(strlen(buffer)>value){
		printf("Large Name Input!");
	}
	else{
	
	name_dma = (char*)malloc(value*sizeof(char));
	
	if (name_dma==NULL){
		printf("Memory Allocation Failed!");
	}
	else{
	
	strcpy(name_dma,buffer);
	
	printf("Your full Name is : %s",name_dma);
}
}

}
