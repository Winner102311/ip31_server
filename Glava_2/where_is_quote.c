#include <stdio.h>

int main()
{
    char quote[] = "Печенье вас полнит";
    printf("Строка quote хранится по адресу: %p\n", quote);
    printf("Размер quote: %lu байтов\n", sizeof(quote));
    return 0;
}