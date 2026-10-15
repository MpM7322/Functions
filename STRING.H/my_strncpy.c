#include <stdio.h>
#include <string.h>

char *my_strncpy(char* str1, const char* str2, int n) {
    char* temp_str1 = str1;
    while (n > 0 && (*str1++ = *str2++) != '\0') n--;
    // если str2 закончилась раньше, чем n, заполняем оставшееся место нулями
    while (n > 0) {
        *str1++ = '\0';
        n--;
    }
    return temp_str1;
}

int main()
{
    char mystr1[20];
    char mystr2[] = "Hello!!!";

    my_strncpy(mystr1, mystr2, 4);
    mystr1[4] = '\0';
    printf("my_strncpy = %s\n", mystr1);


    // char* strncpy(char* str1, const char* str2, int n)
    char str1[20];
    char str2[] = "Hello!";

    strncpy(str1, str2, 4);
    str1[4] = '\0';

    printf("strncpy = %s", str1);
    
    return 0;
}