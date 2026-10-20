#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Обязательно для функции time()

int main()
{   
    srand(time(NULL));

    int n = 10;

    // Создание динамического массива с нулями внутри
    // void* calloc(size_t num, size_t size)
    int *arr = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));
    printf("\n");

    for (int i = 0; i < n; i++) *(arr + i) = rand() % 1001;
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));

    free(arr);

    return 0;
}