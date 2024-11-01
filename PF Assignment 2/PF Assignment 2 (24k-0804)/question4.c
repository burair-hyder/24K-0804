# include <stdio.h>
#include <string.h>
int main(void){
    int num;

    
    printf("How many words to Enter:");
    scanf("%d",&num);
    char arr[num][100];
    char arr2[num][100];
    int e;

    for(int i=0;i<num;i++){
        printf("Enter %d name",i+1);
        scanf("%s",arr[i]);
        
    }
    
    
    int x,j,y,i;
    for(i=0;i<num;i++){
         int count=0;
        for ( x=i+1;x<num;x++){
            count =0;
            if(strlen(arr[i])==strlen(arr[x])){
            for( int j=0;arr[i][j]!= '\0';j++){
            
                for(y=0;arr[x][y]!='\0';y++){
                    
                        if (arr[i][j]== arr[x][y]){
                            count++;
                            
                        
                    }
                }
                }
               
             if (count==strlen(arr[i])){
                     int flag =0;
                 for ( int z=0;z<num;z++){
                     if (strcmp(arr[z],arr2[x])==0){
                         flag =1;
                     }
                     if (strcmp(arr[z],arr2[i])==0){
                         flag =1;
                     }
                 }
                 if (flag ==0){
                     
                    strcpy(arr2[e++],arr[i]);
                    strcpy(arr2[e++],arr[x]);
                    
                    
                 }
                 
                    
                
            }
        
        
        }
            
        }
       
    }
    int k;
   printf("Anagrams found:\n");
    for (int k = 0; k < e; k++) {
        printf("%s\n", arr2[k]);
}
}
