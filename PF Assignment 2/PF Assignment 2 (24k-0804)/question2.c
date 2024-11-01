# include <stdio.h>
int main(void){
    char string[3][100];
    int freq1[3][270];
    
    int temp;
    
    for (int i=0;i<3;i++){
        for (int j=0;j<270;j++){
            freq1[i][j] =0;
            
        }
        
    
    }
    for (int i =0;i<3;i++){
        printf("Enter the slogan:");
        scanf("%s",string[i]);
        
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<270;j++){
            if(string[i][j]== '\0'){
                break;
            }
            else{
            temp =string[i][j];
            
            freq1[i][temp]++;
            
            }
        }   
 }
  
  for (int i=0;i<3;i++){
      printf("{");
      printf("for %s  ",string[i]);
      for (int j=0;j<270;j++){
           if (freq1[i][j]>0){
          
          printf("%c : %d ,",j,freq1[i][j]);
              
          }
     
      }
      printf("}");
    printf("\n");
  }
   
     
}
