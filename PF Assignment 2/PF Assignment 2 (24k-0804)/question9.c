#include <stdio.h>
#include <conio.h>
char game[5][5] = {
    {'-', '-', 'X', '-', '-'},
    {'-', 'I', 'I', '-', 'I'},
    {'-', '-', 'X', '-', 'X'},
    {'X', '-', 'X', '-', '-'},
    {'-', 'I', '-', 'X', '-'}};
int x = 0, y = 0;
char player = 'P';
int score = 0;
void movement(void);
void printarray(char arr[5][5]);
int main()
{
    game[x][y] = player;

    printarray(game);
    movement();

    return 0;
}
void printarray(char arr[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %c ", arr[i][j]);
        }
        printf("\n");
    }
}
void movement(void)
{
    char arrow;

    while (1)
    {
        arrow = getch();
        printf("\n\n\n");
        game[x][y] = '-';
        if (arrow == 'd' && y < 4)
        {
            if (game[x][y + 1] != 'X')
            {
                if (game[x][y + 1] == 'I')
                {
                    score++;
                }
                y += 1;
            }
        }
        else if (arrow == 'a' && y > 0)
        {
            if (game[x][y - 1] != 'X')
            {
                if (game[x][y - 1] == 'I')
                {
                    score++;
                }
                y -= 1;
            }
        }
        else if (arrow == 'w' && x > 0)
        {
            if (game[x - 1][y] != 'X')
            {
                if (game[x - 1][y] == 'I')
                {
                    score++;
                }
                x -= 1;
            }
        }
        else if (arrow == 's' && x < 4)
        {
            if (game[x + 1][y] != 'X')
            {
                if (game[x + 1][y] == 'I')
                {
                    score++;
                }
                x += 1;
            }
        }
        else if (arrow == 'q')
        {
            printf("Score: %d", score);
            break;
        }
        game[x][y] = player;
        printarray(game);
    }
}


Q9
