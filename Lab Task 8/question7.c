#include <stdio.h>

int main() {
    char grid[100][100] = {};
    int i = 4;
    int j = 0;
    int up = 1;
    int spaces = 1;
    int count = 0;
    while (count != 3) {
        grid[i][j] = '*';

        if (up) {
            i--;
            j += spaces;
            spaces++;
        } else {
            i++;
            j += spaces;
            spaces--;
        }

        if (i == 0 && up == 1) {
            up = 0;
            spaces--;
        } else if (i == 4 && up == 0) {
            spaces = 1;
            up = 1;
            count++;
            if (count != 0) {
                grid[i][j] = '*';
                j += 2;
                if (count != 3)
                    grid[i][j] = '*';
            }
        }
    }

    printf("There You GO:\n");
    for (int i2 = 0; i2 <= 4; i2++) {
        for (int j2 = 0; j2 < 100; j2++) {
            if (grid[i2][j2] == '*') {
                printf("%c", grid[i2][j2]);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
