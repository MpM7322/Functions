#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Обязательно для функции time()

int main()
{   
    srand(time(NULL));

    int rows = 5, cols = 8;
    int **arr = malloc(rows * sizeof(int*)); // создание массива указателей на массивы
    for (int i = 0; i < rows; i++) *(arr + i) = malloc(cols * sizeof(int));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(*(arr + i) + j) = 10 + rand() % 11;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) free(*(arr + i)); // сначала удаляем каждую строку
    free(arr); //  затем удаляем сам массив указателей

    return 0;
}