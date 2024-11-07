#include <stdio.h>
#include <string.h>

int is_palindrome(char word[])
{
    int last_index = strlen(word) - 1;

    for (int i = 0; i <= last_index; i++)
    {
        if (word[i] != word[last_index - i])
            return 0;
    }

    return 1;
}

int main()
{
    char words[5][20];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter word: ");
        scanf(" %s", &words[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (is_palindrome(words[i]))
            printf("\n%s: Palindrome", words[i]);
        else
            printf("\n%s: Not palindrome", words[i]);
    }
}
