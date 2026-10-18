#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "red;blue;green";

    // char *strtok(char *str, const char *delim);
    char *token = strtok(text, ";"); // Получаем первое слово

    while (token != NULL) {        // Пока слова не кончились, печатаем их и просим следующее
        printf("%s\n", token); 
        token = strtok(NULL, ";"); // Передаем NULL, чтобы продолжить пилить ТУ ЖЕ строку
    }

    return 0;
}