#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Обязательно для функции time()

int main()
{   
    srand(time(NULL));

    // массив из 5 элементов
    int *arr = malloc(5 * sizeof(int));

    // его расширение до 10 элементов
    int *temp = realloc(arr, 10 * sizeof(int));

    arr = temp;

    for (int i = 0; i < 10; i++) *(arr + i) = 10 + rand() % 11;
    for (int i = 0; i < 10; i++) printf("%d ", *(arr + i));

    free(arr);

    return 0;
}