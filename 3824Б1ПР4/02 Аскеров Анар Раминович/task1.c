// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <limits.h>
int sumoftwo_numbers(int a, int b) {
    // Проверяем возможное переполнение при сложении
    if (b > 0 && a > INT_MAX - b) {
        return INTMAX; // Если сумма превышает INTMAX, возвращаем INT_MAX
    }
    if (b < 0 && a < INT_MIN - b) {
        return INTMIN; // Если сумма ниже INTMIN, возвращаем INT_MIN
    }
    return a + b; // Возвращаем обычную сумму
}
