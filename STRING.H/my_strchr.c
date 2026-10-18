#include <stdio.h>
#include <string.h>

char *my_strchr(const char *str, int ch) {
    while (*str != (char)ch) {
        if (*str == '\0') return 0;
        str++;
    }
    return (char *)str;
}


int main()
{
    char mystr[] = "Hello!";
    int mych = 'e';
    printf("my_strchr = %s\n", my_strchr(mystr, mych));

    // char *strchr(const char *str, int ch) 
    char str[] = "Timofey";
    int ch = 'f';
    printf("strchr = %s\n", strchr(str, ch));
    

    return 0;
}