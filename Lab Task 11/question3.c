# include <stdio.h>
# include <string.h>

int main(void){
	FILE *file1;
	FILE *file2;
	file1 = fopen("check1.txt","w");
	char name[200];
	char check[50];
	char new1[50];
	
	

	for (int i=0;i<5;i++){
		printf("Enter line:");
		gets(name);
		fprintf(file1,"%s\n",&name);
		
	}
	fclose(file1);
	printf("Enter the word to replace:");
	scanf("%s",check);
	printf("Enter the new word:");
	scanf("%s",new1);
	
int x=0;
int res;

file1= fopen("check1.txt","r");
file2 = fopen("replace.txt","w");


while (fscanf(file1,"%s",name)!= EOF){
	
		 res =strcmp(name,check);
		 
		 if (res==0){
		 	fprintf(file2,"%s",new1);
		 }
		 else{
		 	fprintf(file2,"%s",name);
		 }
		 
		 char c = fgetc(file1);
    	if (c == '\n') {
        	fprintf(file2, "\n");
    	}
	 	else if (c != EOF) {
        	fprintf(file2, " ");
    	}
	


}

fclose(file1);
fclose(file2);
}
