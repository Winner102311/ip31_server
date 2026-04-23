#include <stdio.h>

void fortune_cookie(char msg[]) {
    printf("Сообщение гласит: %s\n", msg);
    printf("msg занимает %lu байтов\n", sizeof(msg));
}

int main() {
    char quote[] = "Черепахи!";
    printf("quote занимает %lu байтов\n", sizeof(quote));
    fortune_cookie(quote);
    return 0;
}