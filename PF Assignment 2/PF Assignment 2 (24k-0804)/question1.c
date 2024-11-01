# include <stdio.h>
int main(void){
    int arr[5];
    int count=0;
    int num;
    int low = 9999;
    int temp;
    while (count<5){
        printf("Enter a Number:");
        scanf("%d",&num);
        if (num>9999){
        printf("Invalid Input!\n");
        printf("Enter Again");
        }
        else{
            arr[count] = num;
            count++;
            
        }
    }
    
    
    for ( int i=0;i<5;i++){
        if (arr[i]<low){
            temp = low;
            low = arr[i];
            
        }
        if ( arr[i]>low && arr[i]<temp){
                temp = arr[i];
        }
    } 
    printf("The Second  Smallest is : %d",temp);
}


