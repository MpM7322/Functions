#include <stdio.h>
#include <string.h>

int my_strncmp(const char* str1, const char* str2, size_t n) {
    while (n > 0 && *str1 != '\0' && (*str1 == *str2)) {
        str1++;
        str2++;
        n--;
    }
    if (n == 0) return 0;
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

int main() {
    char mystr1[] = "AB";
    char mystr2[] = "AD";
    printf("mystrncmp = %d\n", my_strncmp(mystr1, mystr2, 1)); 

    char str1[] = "AB";
    char str2[] = "AD";

    // 0 - СТРОКИ РАВНЫ, >0 - STR1 > STR2, <0 - STR1 < STR2
    // int strcmp(const char* str1, const char* str2, size_t n)
    printf("strncmp = %d", strncmp(str1, str2, 1)); 

    return 0;
}