#include <stdio.h>
void histogram(int count,int values[]);
int main(void){
    int count;
    printf("Enter count of values:");
    scanf("%d",&count);
    int values[count];
    for (int i = 0; i < count; i++) {
        printf("Enter value for value %d: ", i + 1);
        scanf("%d",&values[i]);
      
        
    }
    histogram(count,values);

}
void histogram(int count,int values[]){
    
    int max = 0; 
    int temp;

    

    

    for (int i = 0; i < count; i++) {
        if (values[i] > max) {
            max = values[i];
        }
    }

    printf("HORIZONTAL HISTOGRAM:\n");
    for (int i = 0; i < count; i++) {
        printf("Value %d: ", i + 1);
        for (int j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\nVERTICAL HISTOGRAM:\n");
    
    
    for (int c = max; c > 0; c--) {
        for (int r = 0; r < count; r++) {
            if (values[r] >= c) {
                printf("* "); 
            } 
        }
        printf("\n");
    }
    //  sorting for printing number since the vertical histogram
    //  is also sorted in desc order
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (values[j] < values[j + 1]) {
                temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }

   

    for (int i = 0; i < count; i++) {
        printf("%d ", values[i]);
    }
    


}
