// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <limits.h>
unsigned int productoftwo_numbers(unsigned int a, unsigned int b) {
    // Проверяем на переполнение
    if (a > 0 && b > UINT_MAX / a) {
        return UINTMAX; // Если произведение превышает UINTMAX, возвращаем UINT_MAX
    }
    return a * b; // В противном случае возвращаем произведение
}
