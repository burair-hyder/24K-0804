#include <stdio.h>
int main(void){
	int a = 65;
	int b = a+4;
	for (int i=0;i<6;i++){
		if (i==0|| i==5){
		
		printf(" %c  %c  %c  %c  %c \n",a,a+1,a+2,a+3,b);
	}
		else{
		printf(" %c           %c \n",a,b);
		}
		a++;
		b++;
	}
}

#include <stdio.h>
int main(){
int a=65;
int b=a+4;
int i;
for(i=0;i<=4;i++){

     if(i==2){
    	printf("       E    \n");
    	b=72;
    	a=69;
    	continue;
	}
    else if(i==0 ){
      printf(" %c  %c  %c  %c  %c\n",a,a+1,a+2,a+3,b);}
    else if(i==4){
      a=69;
      b=73;
      printf( " %c  %c  %c  %c  %c\n",a,a+1,a+2,a+3,b);
	}
    else{
    printf("    %c     %c     \n",a,b);
	}

	a=a+2;
	b++;
}

}
