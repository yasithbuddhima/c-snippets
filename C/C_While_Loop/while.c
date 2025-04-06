#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    printf("Set your password: ");
    scanf("%s", password);

    char input[20];
    printf("Enter your password: ");
    scanf("%s", input);

    while (strcmp(password, input) != 0) {
        printf("Incorrect password. Try again: ");
        scanf("%s", input);
    }

    printf("Access granted!\n");
    return 0;
}
