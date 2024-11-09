#include <stdio.h>
#include <string.h>

void sort_strings(char arr[][20], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][0] > arr[j][0])
            {
                char temp[20];
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main()
{
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char arr[n][100];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter str %d", i + 1);
        scanf("%s", arr[i]);
    }

    printf("Original strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    sort_strings(arr, n);
    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}
