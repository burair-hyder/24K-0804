#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <time.h>

char RandomAlphabet(void)
{
    char alphabet = 'A';
    char list[26];

    for (int i = 0; i < 26; i++)
    {
        list[i] = alphabet;
        alphabet++;
    }

    return (list[rand() % 26]);
}

void checkingStr(char guess[5], char toBeChecked[6][5])
{
    int found = 0;
    int score = 0;
    int length = strlen(guess);
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= 5 -length; j++)
        {
            int match = 1;
            for (int k = 0; k < length; k++)
            {
                if (toBeChecked[i][j + k] != guess[k])
                {
                    match = 0;
                    break;
                }
            }
            if (match)
            {
                found = 1;
                break;
            }
        }
    }
    if (found == 1)
    {
        printf("Found Horizontally\n");
        score++;
        found = 1;
    }
    else
    {

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 5 - length; j++)
            {
                int match = 1;
                for (int k = 0; k < length; k++)
                {
                    if (toBeChecked[i + k][j] != guess[k])
                    {
                        match = 0;
                        break;
                    }
                }
                if (match)
                {
                    found = 1;
                    break;
                }
            }
        }
        if (found)
        {
            printf("Found Vertically \n");
            score++;
        }
        // else if (!found)
        // {

        // }
        else
        {
            printf("Not Found....\n");
            score--;
        }
    }
    printf("Your current score : %d\n", score);
}
void end(char guess[4])
{

    char end[3] = {'E', 'N', 'D'};
    int Ending = 1;
    for (int i = 0; i < 3; i++)
    {
        if (guess[i] != end[i])
        {
            Ending = 0;
        }
    }
    if (Ending)
    {
        exit(0);
    }
}

//======================----------MAIN()-----------===================================
int main()
{

    char alpha[6][5];

    srand(time(0));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            alpha[i][j] = RandomAlphabet();
        }
    }

    alpha[5][0] = '0';
    alpha[5][1] = '6';
    alpha[5][2] = '7';
    alpha[5][3] = '8';

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c ", alpha[i][j]);
        }
        printf("\n");
    }

    char guess[4];
    while (1)
    {

        printf("Enter a string\n");
        scanf("%4s", guess);
        end(guess);
        checkingStr(guess, alpha);
    }

    return 0;
}
