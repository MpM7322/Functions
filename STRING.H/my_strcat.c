#include <stdio.h>
#include <string.h>

char *my_strcat(char *str1, const char *str2) {
    char *p1 = str1;
    while (*p1 != '\0') p1++;
    while ((*p1++ = *str2++) != '\0');
    return str1;
}

int main()
{
    char mystr1[] = "Hello";
    char mystr2[] = " World?!";

    my_strcat(mystr1, mystr2);
    printf("my_strcat = %s\n", mystr1);;

    // char *strcat(char *str1, const char *str2) {
    char str1[] = "Hello";
    char str2[] = " World!";

    strcat(str1, str2);
    printf("strcat = %s", str1);

    return 0;
}