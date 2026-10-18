#include <stdio.h>
#include <string.h>

char *my_strrchr(const char *str, int ch) {
    const char *last = NULL;
    
    while (*str != '\0') {
        if (*str == (char)ch) last = str;
        str++;
    }

    if ((char)ch == '\0') return (char *)str;
    return (char *)last;
}


int main()
{
    char mystr[] = "Hello!";
    int mych = 'l';
    printf("my_strrchr = %s\n", my_strrchr(mystr, mych));

    // char *strchr(const char *str, int ch) 
    char str[] = "Timoffey";
    int ch = 'f';
    printf("strrchr = %s\n", strrchr(str, ch));
    

    return 0;
}