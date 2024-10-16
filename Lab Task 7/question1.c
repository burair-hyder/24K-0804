# include <stdio.h>
int main(void){
    int arr[100];
    int num;
    int temp;
    printf("how many number to enter:");
    scanf("%d",&num);
    for ( int  i =0;i<num;i++){
        printf("Enter number:");
        scanf("%d",&arr[i]);
        
    }
    for (int i =(num-1);i>=0;i--){
        if (i == (num-1)){
            temp = arr[i];
            
        }
        
            arr[i] = arr[i-1];
        
            
        }
        arr[0]= temp;
        
    for (int i =0; i <num;i++){
        printf("%d\n",arr[i]);
    }
}
