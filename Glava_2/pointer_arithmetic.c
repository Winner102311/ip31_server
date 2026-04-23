#include <stdio.h>

int main()
{
    char chars[] = {'A', 'B', 'C'};
    int ints[] = {1, 2, 3};

    printf("char* + 1: %p -> %p (сдвиг на 1 байт)\n", chars, chars + 1);
    printf("int*  + 1: %p -> %p (сдвиг на 4 байта)\n", ints, ints + 1);

    return 0;
}