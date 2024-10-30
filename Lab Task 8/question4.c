# include <stdio.h>
int main(void){
    int arr1[3][3]={0};
    int arr2[3][3]={0};
    int arr3[3][3]={0};
    int arr4[3][3]={0};
   int sum=0;
   

printf("Enter value for matrixA:\n");

   for ( int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           printf("Etner value for( %d, %d): ",i,j);
           scanf("%d",&arr1[i][j]);
       }
   }
   printf("\n");
printf("Enter value for matrixB:\n");   
           
             for ( int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           printf("Etner value for (%d ,%d) : ",i,j);
           scanf("%d",&arr2[i][j]);
       }
   }








   for ( int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           
           for( int k=0;k<3;k++){
               sum =  sum + arr1[i][k] * arr2[k][j];
           }
           arr3[i][j] = sum;
           sum  =0;
       }
   }
   
    for ( int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           
           arr4[i][j] = arr3[i][j] - arr1[i][j];
       }
    }
   
   printf("Resultant martix Ater multiplication:\n");
      for ( int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           printf("%d ",arr3[i][j]);
           
       }
       printf("\n");
       
      }
         printf("Resultant martix Ater subtraction:\n");
    for ( int i=0;i<3;i++){
       for (int j=0;j<3;j++){
           printf("%d ",arr4[i][j]);
           
       }
       printf("\n");
      }
}
