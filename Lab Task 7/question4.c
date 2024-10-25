# include <stdio.h>
int main(void){
    char string[100];
    int count=0;
    char temp;
    
    printf("Enter the Name:");
    gets(string);
    char *ptr = string;
    for (int i=0;*(ptr+i)!='\0';i++){
        count++;
    }
    
    printf("\n");
    printf("The  Length of This Array is : %d\n",count);
  
    printf("Original Array: %s \n",string);
    int end=count-1;
    
    for (int i=0;i<(count)/2;i++){
        temp = *(ptr+i);
        *(ptr+i)= *(ptr+end);
        *(ptr+end)=temp;
        end--;
        
    }

    printf("Reversed Array : %s \n ",ptr);
}

