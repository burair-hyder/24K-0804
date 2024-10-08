//  part 1
//  hour glass
# include <stdio.h>
int main(void){
	int a=0;
	for (int i=0;i<5;i++){
		if (i%2==0 && i!=2){
			printf("%c %c %c %c %c\n",i+65,i+66,i+67,i+68,i+69);
		}
		else if (i==2){
			printf("    %c\n",i+67);
		}
		else  {
			printf("  %c    %c\n",i+66,i+69);
		}
	
	}
}
//  part 2
# include <stdio.h>
int main(void){
	int a=0;
	for (int i=0;i<5;i++){
		if (i%2==0 && i!=2){
			printf("* * * * *\n");
		}
		else if (i==2){
			printf("    *\n",i+67);
		}
		else  {
			printf("  *    *\n",i+66,i+69);
		}
	
	}
}
