// Include your header files at the very top of the file
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

/*Here as you can see i have declared the function prototype before the main,
to tell the compiler that ther is a function*/
int my_face();

// Below is the main function
int main(void) //Here i have specified that no argument will be taken in by the main
{   
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    my_face();
}


// This is my face
int my_face(void)
{
    printf("\U0001F60F\n");
    return 0;
}