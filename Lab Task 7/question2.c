# include <stdio.h>
int main(void){
    char string[100];
    int counta=0,countb=0,countc=0,counte=0,countf=0;
    printf("Enter a  name:");
    scanf("%s",string);
    
    for(int i =0;i<sizeof(string);i++){ 
        switch(string[i]){
            case 'a':
                counta++;
                break;
            case 'e':
                countb++;
                break;
            case 'i':
                countc++;
                break;
            case 'o':
                counte++;
                break;
            case 'u':
                countf++;
                break;
   
        } 
        
        }
    printf("a = %d ",counta);
    printf("e = %d ",countb);
    printf("i = %d ",countc);
    printf("o = %d ",counte);
    printf("u = %d ",countf);
}
