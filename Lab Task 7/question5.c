# include <stdio.h>
int main (void){
    int flag =1;
    int len;
    int index=0;
    char string[100];
    char digit;
    printf("Enter a palindrome:");
    scanf("%s",string);
    digit = string[index];
    while (digit != '\0'){
        index++;
        digit = string[index];
    }

    for (int i=0; i<(index/2);i++){
        
        if (string[i]!= string[(index-1)-i]){
            flag =-1;
        }
    }
    if (flag ==1){
        printf("Yes it is a Palindrome");
    }
    else{
        printf("No your lying. it is not a Palindrome");
    }
}
