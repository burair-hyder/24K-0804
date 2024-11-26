#include <stdio.h>
int main(void){
	FILE *toread;
	FILE *towrite;
	char name[20];
	toread = fopen("file1.txt","w");
	for(int i=0;i<5;i++){
		printf("Enter your Name:");
		scanf("%s",name);
		fprintf(toread,"Your Name is : %s\n",name);
	}
	fclose(toread);

printf("Data Successfully Entered in the File1\n");

towrite = fopen("file2.txt","w");
toread = fopen("file1.txt","r");
char ch=fgetc(toread);
	while (ch!=EOF){
	fputc(ch,towrite);
	 ch=fgetc(toread);
	}
fclose(toread);
fclose(towrite);
printf("Data successfuly copied to File2");
}
