#include <stdio.h>

int main()
{
    // void rewind(FILE *stream);
    char ch1, ch2;
    scanf("%c", &ch1);
    rewind(stdin);
    scanf("%c", &ch2);

    printf("%c %c", ch1, ch2);

    return 0;
}