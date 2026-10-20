#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    // int scanf(const char* fmt, ...)
    int count = scanf("%d %d %d", &num1, &num2, &num3);
    printf("\n%d", count);

    return 0;
}