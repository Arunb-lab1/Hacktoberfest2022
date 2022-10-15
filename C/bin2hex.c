// Convert a binary number to hexadecimal number
#include <stdio.h>

int main()
{
    int binaryNumber = 0;
    int hexNumber = 0;
    int i = 1;
    int rem = 0;

    printf("Enter binary number: ");
    scanf("%d", &binaryNumber);

    while (binaryNumber != 0) {
        rem = binaryNumber % 10;
        hexNumber = hexNumber + rem * i;

        i = i * 2;
        binaryNumber = binaryNumber / 10;
    }

    printf("Hexadecimal Number: %X", hexNumber);
    return 0;
}