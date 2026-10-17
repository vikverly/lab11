/*
Студент: Черных Виктория Александровна
Группа: ПИ-1-1
Лабораторная работа 11
*/



#include <stdio.h>

int count_above(const int a[], int n, int limit) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > limit) {
            count++;
        }
    }
    return count;
}

void print_array(const int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    putchar('\n');
}

int main(void) {
    int a[] = {4, -2, 7, 0};
    int n = 4;

    printf("Array: ");
    print_array(a, n);

    // Обязательные тесты
    printf("Test 1 (n=4, limit=0): count = %d (Expected: 2)\n", count_above(a, n, 0));
    printf("Test 2 (n=4, limit=7): count = %d (Expected: 0)\n", count_above(a, n, 7));
    printf("Test 3 (n=2, limit=-3): count = %d (Expected: 2)\n", count_above(a, 2, -3));
    printf("Test 4 (n=0, limit=0): count = %d (Expected: 0)\n", count_above(a, 0, 0));

    // Собственный тест на границу условия
    printf("Test 5 (Boundary, n=4, limit=4): count = %d (Expected: 1)\n", count_above(a, n, 4));

    return 0;
}