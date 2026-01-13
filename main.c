#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "func.h"
#define N 100

int task11(int size);
int task14(int size);
int task16(int size);

int main() {
    setlocale(LC_ALL, "RUS");
    int size;
    printf("Введите размер массива > ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > N) {
        puts("Некорректный размер");
        return 1;
    }

    task11(size);
    task14(size);
    task16(size);

    return 0;
}

int task11(int size) {
    printf("\n=== ЗАДАНИЕ 11 ===\n");
    int arr[N];

    // Ввод массива
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Вычисление
    int result = sum_abs_after_max(arr, size);
    printf("Сумма модулей после элемента с max модулем = %d\n", result);
    return 0;
}

int task14(int size) {
    printf("\n=== ЗАДАНИЕ 14  ===\n");
    int arr[N];

    // Ввод массива
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }

    int A;
    printf("Введите A > ");
    scanf("%d", &A);

    // Поиск
    int idx = find_max_less_A(arr, size, A);
    if (idx != -1) {
        printf("Максимальный элемент < %d: %d (индекс %d)\n",
            A, arr[idx], idx);
    }
    else {
        printf("Нет элементов < %d\n", A);
    }
    return 0;
}

int task16(int size) {
    printf("\n=== ЗАДАНИЕ 16 ===\n");

    // Ввод размеров массивов A, B, C
    int na, nb, nc;
    printf("Размеры массивов A B C > ");
    scanf("%d%d%d", &na, &nb, &nc);

    if (na + nb + nc > N) {
        puts("Слишком большие массивы");
        return 1;
    }

    int a[N], b[N], c[N];

    // Ввод массивов
    printf("Массив A: ");
    for (int i = 0; i < na; i++) scanf("%d", &a[i]);
    printf("Массив B: ");
    for (int i = 0; i < nb; i++) scanf("%d", &b[i]);
    printf("Массив C: ");
    for (int i = 0; i < nc; i++) scanf("%d", &c[i]);

    // Создание массива D
    int d_size;
    int* d = create_array_d(a, na, b, nb, c, nc, &d_size);

    if (d && d_size > 0) {
        printf("Массив D (размер %d): ", d_size);
        for (int i = 0; i < d_size; i++) {
            printf("%d ", d[i]);
        }
        printf("\n");
        free(d);
    }
    else {
        printf("Ошибка создания массива D\n");
    }

    return 0;
}
