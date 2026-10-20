#include <stdio.h>

int main()
{
    // char* gets_s(char* str, rsize_t n)
    char text[30];
    gets_s(text, 30);
    // int puts(const char* str) >= 0
    int count = puts(text); 
    printf("\n%d", count);

    return 0;
}