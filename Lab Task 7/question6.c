# include <stdio.h>
int main(void){
    int num[10];
    int freq[100];
    int i;
    for (int i=0;i<100;i++){
        freq[i] =0;
        
    }
    for (int i=0;i<9;i++){
        printf("Enter a number between 0 and 99:\n");
        scanf("%d",&num[i]);
        freq[num[i]] = freq[num[i]] +1;
        }
    for (int i=0;i<100;i++){
        if(freq[i]>0){
            printf("%d : %d times \n",i,freq[i]);
        }
    }
}
