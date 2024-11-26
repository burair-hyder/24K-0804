# include <stdio.h>
# include <string.h>

int main(void){
	FILE *file1;
	file1 = fopen("hello.txt","w");
	char name[200];
	char name1[100][50];
	int count[100];
	char temp[]="X";
	
	for ( int  i=0;i<100;i++){
		count[i] =0;
		strcpy(name1[i],temp);
	}
	for (int i=0;i<5;i++){
		printf("Enter line:");
		gets(name);
		fprintf(file1,"%s\n",&name);
		
	}
	fclose(file1);
	
int x=0;
int res;

file1= fopen("hello.txt","r");

while (fscanf(file1,"%s",name)!= EOF){
	for ( int i=0;i<100;i++){
		res = strcmp(name,name1[i]);
		if(res==0){
			count[i]++;
			break;
		}
		
		}
		if(res!=0){
			strcpy(name1[x],name);
			count[x]=count[x]+1;
			x++;
			
	}
}
	
fclose(file1);

for ( int  i=0;i<100;i++){
	if ((strcmp(name1[i],temp)))
	printf("%s was repeated %d times\n",name1[i],count[i]);
}
}
