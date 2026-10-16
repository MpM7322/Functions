#include <stdio.h>
#include <string.h>

int my_strcmp(const char* str1, const char* str2) {
    while (*str1 != '\0' && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(const unsigned char*)str1 - *(const unsigned char*)str2;
}

int main() {
    char mystr1[] = "AB";
    char mystr2[] = "AD";
    printf("mystrcmp = %d\n", my_strcmp(mystr1, mystr2)); 

    char str1[] = "AB";
    char str2[] = "AD";

    // 0 - СТРОКИ РАВНЫ, >0 - STR1 > STR2, <0 - STR1 < STR2
    // int strcmp(const char* str1, const char* str2)
    printf("strcmp = %d", strcmp(str1, str2)); 

    return 0;
}