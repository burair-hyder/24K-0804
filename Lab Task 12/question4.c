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

}
