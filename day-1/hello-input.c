#include <stdio.h>

int main() {
    char message[] = "Hello, World!";
    char userChar;

    printf("%s\n", message);

    printf("Press any key to continue: ");
    userChar = getchar();

    printf("You pressed: ");
    putchar(userChar);
    printf("\n");

    return 0;
}