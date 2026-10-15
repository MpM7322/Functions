#include <stdio.h>
#include <string.h>

// str1 указатель на память, куда будем копировать указатель str2
char *my_strcpy (char *str1, const char *str2) {
    char *temp_str1 = str1; // первонач адрес str1, т.к будем его двигать
    // берутся текущие символы, символ из str2 копируется в str1
    // постфиксный инкремент работает в последний момент, оба сдвигаются на 1 байт
    while ((*str1++ = *str2++) != '\0'); // пустое тело, всё действие в условии
    // возвращаем адрес начало нашей скопированной строки
    return temp_str1;
}

int main()
{
    char mystr1[20];
    char mystr2[] = "Hello!"; 
    
    my_strcpy(mystr1, mystr2);
    printf("my_strcpy = %s\n", mystr1);

    char str1[20];
    char str2[] = "Hello!!!";

    // char* strcpy(char* dest, const char* src)
    strcpy(str1, str2);
    printf("strcpy = %s", str1);

    return 0;
}