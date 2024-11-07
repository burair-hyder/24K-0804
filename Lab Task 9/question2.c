#include <stdio.h>

void swap_integers(int *a, int *b)
{
    *b = *a + *b; 
    *a = *b - *a; 
    *b = *b - *a; 
}

int main()
{
    int a, b;
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);

    printf("\nBEFORE:\na: %d, b: %d", a, b);
    swap_integers(&a, &b);
    printf("\nAFTER:\na: %d, b: %d", a, b);

    return 0;
}
