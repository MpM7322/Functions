#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Обязательно для функции time()

int main()
{   
    srand(time(NULL));

    int n = 10;

    // Создание динамического массива с мусором внутри

    // void* malloc(size_t size);
    int *arr = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i)); // мусорный вывод
    printf("\n\n\n");
    
    // Заполнение массива случайными числами
    for (int i = 0; i < n; i++) *(arr + i) = rand() % 101;
    for (int i = 0; i < n; i++) printf("%d ", *(arr + i));

    free(arr);

    return 0;
}