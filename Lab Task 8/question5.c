# include <stdio.h>
int main(void){
    int max;
    printf("Enter max star :");
    scanf("%d",&max);
    for ( int i=0;i<max;i++){
        for ( int j=max-1-i;j>0;j--){
            printf(" ");
        }
        for ( int k=0;k<=i;k++){
            printf("* ");
            
        }
        printf("\n");
    }
       for ( int i =0;i<max-1;i++){
        
        for ( int j=0;j<i+1;j++){
            printf(" ");
        }
        
        
        for ( int k=0;k<(max-1)-i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
        
        

    
