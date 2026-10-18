#include <stdio.h>
#include <string.h>

char *my_strncat(char *str1, const char *str2, size_t n) {
    char *p1 = str1;
    while (*p1 != '\0') p1++;
    while (n-- != 0 && (*p1++ = *str2++) != '\0');
    *p1 = '\0';
    return str1;
}

int main()
{
    char mystr1[20] = "Hello";
    char mystr2[] = " World!";

    my_strncat(mystr1, mystr2, 3);
    printf("my_strncat = %s\n", mystr1);;

    // char *strncat(char *str1, const char *str2, size_t n) {
    char str1[20] = "Hello";
    char str2[] = " World!";

    strncat(str1, str2, 3);
    printf("strncat = %s", str1);

    return 0;
}