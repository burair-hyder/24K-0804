#include <stdio.h>
#include <string.h>

void reverse_string(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    char input_str[100];

    printf("Enter a string: ");
    gets(input_str);

    reverse_string(input_str);

    printf("Reversed string: %s\n", input_str);

    return 0;
}
