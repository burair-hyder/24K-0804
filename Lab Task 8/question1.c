# include <stdio.h>
int main(void){
    int start;
    int end;
    int flag =0;
    printf("Enter first number:");
    scanf("%d",&start);
    printf("Enter last number:");
    scanf("%d",&end);
    for (int i=start;i<=end;i++){
        flag =0;
        if (i!=2){
        for (int j=2;j<i;j++){
            if (i%j==0){
                flag =1;
            }
            
        }
         if (flag==0){
            printf("%d\n",i);
        }
       
        }
        
    }
}
