#include <stdio.h>

int main()
{
    int n, start;
    printf("Enter the number of pairs: ");
    scanf("%d", &n);
    printf("Enter the starting number: ");
    scanf("%d", &start);

    int arr[2][n][2];
    int countOdd = 0, countEven = 0;

    for (int i = start; countOdd < n || countEven < n; i--)
    {
        if (i % 2 == 0 && countEven < n)
        {
            arr[0][countEven][0] = i;
            arr[0][countEven][1] = i - 2;
            countEven++;
        }
        else if (i % 2 != 0 && countOdd < n)
        {
            arr[1][countOdd][0] = i;
            arr[1][countOdd][1] = i - 2;
            countOdd++;
        }
    }

    printf("Even numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[0][i][0], arr[0][i][1]);
    }

    printf("Odd numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[1][i][0], arr[1][i][1]);
    }

    return 0;
}
