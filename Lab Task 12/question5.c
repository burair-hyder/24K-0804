# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
	
	char buffer3[] =" ";
	char *name_dma;
	char *buffer2;
	int value;
	int size;
	
	printf("Enter No of Characters in your name:");
	scanf("%d",&value);
	while(getchar()!='\n');
	
	name_dma = (char*)malloc(value*sizeof(char));
	
	if (name_dma==NULL){
		printf("Memory Allocation Failed!");
	}
	else{
		printf("Enter your full name:");
		gets(name_dma);
	}	
	
	printf("Your full Name is : %s\n",name_dma);


	buffer2 = (char*)malloc(50*sizeof(char));
	printf("Enter your Student Id:");
	gets(buffer2);
	size = strlen(buffer2);

	name_dma = (char*)realloc(name_dma,(size+value)*sizeof(char));

	strcat(buffer2,buffer3);
	strcat(buffer2,name_dma);
	strcpy(name_dma,buffer2);
	
	printf("Your StudentID + Full Name is :%s",name_dma);
	
	
	free(name_dma);
	free(buffer2);
}
