#include <stdio.h>
#include <string.h>

char *my_strstr(const char *str, const char *needle_str)
{
    if (*needle_str == '\0') return (char *)str;

    for (; *str != '\0'; str++) {
        const char *p1 = str, *p2 = needle_str;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        if (*p2 == '\0') return (char *) str; // означает что вторая строка польностью вошла 
    }

    return NULL; // иначе возвращаем ноль - вторая строка не вошла в 1
}

int main()
{
    char mystr[] = "Hello, World!";
    char myneedle_str[] = "World!";
    printf("my_strstr = %s", my_strstr(mystr, myneedle_str));

    // аналогично для встроенной!

    return 0;
}