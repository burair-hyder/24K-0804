#include <stdio.h>
#include <string.h>

void compressWord(char word[], char compressed[], int *removed_count) {
    int j = 0;
    *removed_count = 0;
    
    for (int i = 0; word[i] != '\0'; i++) {
        if (i == 0 || word[i] != word[i - 1]) {
            compressed[j++] = word[i];
        } else {
            (*removed_count)++;
        }
    }
    compressed[j] = '\0';
}

void compressWordsList(char words[][100], int num_words) {
    int total_removed_count = 0;

    printf("[ ");
    for (int i = 0; i < num_words; i++) {
        char compressed[100];
        int removed_count = 0;

        compressWord(words[i], compressed, &removed_count);
        total_removed_count += removed_count;

        printf("\"%s\"", compressed);
        if (i < num_words - 1) {
            printf(", ");
        }
    }
    printf(" ]\n");
    printf("Total characters removed: %d\n", total_removed_count);
}

int main(void) {
    int num;

    printf("How many words to enter: ");
    scanf("%d", &num);

    char words[num][100];
    for (int i = 0; i < num; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    compressWordsList(words, num);

    return 0;
}
