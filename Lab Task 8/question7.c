#include <stdio.h>

int main() {
    char grid[5][105] = {};
    int i = 4, j = 0, up = 1, spaces = 1, count = 0;

    while (count < 3) {
        grid[i][j] = '*';
        up ? (i--, j += spaces++) : (i++, j += spaces--);

        if (i == 0 && up) {
            up = 0;
            spaces--;
        } else if (i == 4 && !up) {
            up = 1;
            spaces = 1;
            count++;
            grid[i][j] = '*';
            j += 2;
            if (count < 3) grid[i][j] = '*';
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 105; j++) {
            printf("%c", grid[i][j] ? '*' : ' ');
        }
        printf("\n");
    }
}
