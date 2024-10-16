# include <stdio.h>
int main(void){
    int num;
    int temp;
    int finalcounter=0,duplicate;
    int x=0;
    printf("Enter total number of numbers:");
    scanf("%d",&num);
    int arr[num];
    for (int i = 0;i<num;i++){
        printf("Enter %d number",i+1);
        scanf("%d",&arr[i]);
        

    }
    for(;;){
         if (arr[finalcounter] == arr[x+1]){
             
             temp = arr[finalcounter];
             printf("duplication of %d",temp);
             x++;
             
         }
         else{
             x++;
         }
         if(x>=num){
             finalcounter++;
             x=0;
         }
         if (finalcounter == num){
             break;
         }
    }
    printf("duplication of %d",temp);
}
