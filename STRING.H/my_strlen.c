#include <stdio.h>
#include <string.h>

size_t my_strlen(const char *str) {
    const char *s = str;
    while (*s != '\0') {
        s++; // сдвиг указателя на 1 байт
    }
    return (size_t)(s - str);
}

int main()
{
    printf("my_strlen = %d\n", my_strlen("privet"));

    // size_t strlen(const char* s)
    printf("strlen = %d", strlen("privet"));

    return 0;
}