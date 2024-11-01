#include <stdio.h>
#include <math.h>
#include <string.h>

int Binary_denary(char arr[]);
void Denary_Binary(int num);
void Denary_hexa(int num);
void Hexa_denary(char hex[]);
void BinaryToHexadecimal(char binary[]);
void HexadecimalToBinary(char hex[]);

int main() {
    int choice, decimal;
    char binary[100], hex[100];

    while (1) {
        printf("\nConversion Menu:\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter binary number: ");
                scanf("%s", binary);
                printf("Decimal: %d\n", Binary_denary(binary));
                break;
            case 2:
                printf("Enter decimal number: ");
                scanf("%d", &decimal);
                printf("Binary: ");
                Denary_Binary(decimal);
                printf("\n");
                break;
            case 3:
                printf("Enter decimal number: ");
                scanf("%d", &decimal);
                printf("Hexadecimal: ");
                Denary_hexa(decimal);
                printf("\n");
                break;
            case 4:
                printf("Enter hexadecimal number: ");
                scanf("%s", hex);
                printf("Decimal: ");
                Hexa_denary(hex);
                printf("\n");
                break;
            case 5:
                printf("Enter binary number: ");
                scanf("%s", binary);
                BinaryToHexadecimal(binary);
                break;
            case 6:
                printf("Enter hexadecimal number: ");
                scanf("%s", hex);
                HexadecimalToBinary(hex);
                break;
            case 0:
                printf("Exited\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

int Binary_denary(char arr[]) {
    int y = 0;
    int digit, res = 0, i, x;
    for (i = 0; arr[i] != '\0'; i++) {
        x = i;
    }
    for (int i = x; i >= 0; i--) {
        digit = arr[i] - '0';
        res = res + (digit * pow(2, y));
        y++;
    }
    return res;
}

void Denary_Binary(int num) {
    int digit;
    int i = 0;
    int arr[100];
    do {
        digit = num % 2;
        arr[i] = digit;
        i++;
        num = num / 2;
    } while (num > 0);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
}

void Denary_hexa(int num) {
    int digit;
    int i = 0;
    char arr[100];
    do {
        digit = num % 16;
        if (digit >= 0 && digit <= 9) {
            arr[i] = digit + '0';
        } else {
            arr[i] = 'A' + (digit - 10);
        }
        i++;
        num = num / 16;
    } while (num > 0);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", arr[j]);
    }
}

void Hexa_denary(char hex[]) {
    int y = 0;
    int digit, res = 0, i, x;
    for (i = 0; hex[i] != '\0'; i++) {
        x = i;
    }
    for (int i = x; i >= 0; i--) {
        if (hex[i] >= 'A' && hex[i] <= 'F') {
            digit = hex[i] - 'A' + 10;
        } else {
            digit = hex[i] - '0';
        }
        res = res + (digit * pow(16, y));
        y++;
    }
    printf("%d", res);
}

void BinaryToHexadecimal(char binary[]) {
    int decimal = Binary_denary(binary);
    printf("Hexadecimal: ");
    Denary_hexa(decimal);
    printf("\n");
}

void HexadecimalToBinary(char hex[]) {
    int decimal = 0;
    printf("Binary: ");
    decimal = 0;
    for (int i = 0; hex[i] != '\0'; i++) {
        if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal = decimal * 16 + (hex[i] - 'A' + 10);
        } else if (hex[i] >= '0' && hex[i] <= '9') {
            decimal = decimal * 16 + (hex[i] - '0');
        }
    }
    Denary_Binary(decimal);
    printf("\n");
}
