#include <stdio.h>

int main()
{
    char food[5];
    printf("Введите любимую еду: ");
    scanf("%4s", food);
    printf("Любимая еда: %s\n", food);
    return 0;
}