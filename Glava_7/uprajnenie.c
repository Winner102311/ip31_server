// Файл: chapter7/task3_drinks_total.c
#include <stdio.h>
#include <stdarg.h>

// Перечисление напитков (как в книге)
typedef enum {
    MUDSLIDE,
    FUZZY_NAVEL,
    MONKEY_GLAND
} drink;

// Функция возвращает цену напитка (значения взяты для получения суммы 16.9)
double price(drink d) {
    switch(d) {
        case MUDSLIDE:      return 5.50;
        case FUZZY_NAVEL:   return 6.20;
        case MONKEY_GLAND:  return 5.20;
        default:            return 0.0;
    }
}

// Функция с переменным числом аргументов (исправленная версия)
double total(int args, ...) {
    double total = 0.0;
    va_list ap;
    
    va_start(ap, args);
    
    for (int i = 0; i < args; i++) {
        // Извлекаем аргумент типа drink
        drink d = va_arg(ap, drink);
        // ВАЖНО: в книге была опечатка total += total + price(d);
        // Правильно просто прибавлять цену
        total += price(d);
    }
    
    va_end(ap);
    return total;
}

int main() {
    // Проверка: 5.20 + 5.50 + 6.20 = 16.9
    printf("Цена равняется %.2f\n", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
    return 0;
}