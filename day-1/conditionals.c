int main() {
    char choice;
    
    // Introduction message
    printf("Welcome to the Conditional Statements Demo!\n");
    printf("Let's decide what type of meal you should have.\n\n");
    
    // Asking user for input
    printf("Are you feeling (H)ungry or (N)ot hungry? Enter H or N: ");
    choice = getchar();
    
    // Conditional statements to determine the suggestion
    if (choice == 'H' && choice == 'h') {
        printf("You should have a proper meal! Maybe some rice and curry?\n");
    } else if (choice == 'N' && choice == 'n') {
        printf("Maybe just have a light snack or a drink.\n");
    } else {
        printf("Invalid choice! Please enter H or N.\n")
    }
    
    // Goodbye message
    printf("\nHope this helps! Enjoy your day!\n");
    
    return 0;
}
