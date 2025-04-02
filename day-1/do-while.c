#include <stdio.h>

int main() {
    char choice;

    do {
        printf("Press Y (or y) to continue: ");
        choice = getchar();

        // Clear the input buffer to avoid any extra characters causing issues
        while (getchar() != '\n');  // Clear the buffer of any extra input
    } while (choice != 'y' && choice != 'Y');  // Check for both 'y' and 'Y'

    printf("You pressed a valid key: %c\n", choice);
    return 0;
}
