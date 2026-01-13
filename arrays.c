#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

 // Сумма модулей элементов после элемента с максимальным модулем

int sum_abs_after_max(int* arr, int n) {
    if (n <= 0) return 0;

    // Находим индекс максимального по модулю
    int max_mod_idx = 0;
    for (int i = 1; i < n; i++) {
        if (abs(arr[i]) > abs(arr[max_mod_idx])) {
            max_mod_idx = i;
        }
    }

    // Сумма модулей после него
    int sum = 0;
    for (int i = max_mod_idx + 1; i < n; i++) {
        sum += abs(arr[i]);
    }
    return sum;
}


// Поиск индекса максимального элемента < A 

int find_max_less_A(int* arr, int n, int A) {
    if (n <= 0) return -1;

    int max_idx = -1;
    int max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] < A && arr[i] > max_val) {
            max_val = arr[i];
            max_idx = i;
        }
    }
    return max_idx;
}


 // Создание массива D без минимальных значений из A, B, C

int* create_array_d(int* a, int na, int* b, int nb, int* c, int nc, int* size_d) {
    // Находим минимумы
    int min_a = a[0], min_b = b[0], min_c = c[0];
    for (int i = 1; i < na; i++) if (a[i] < min_a) min_a = a[i];
    for (int i = 1; i < nb; i++) if (b[i] < min_b) min_b = b[i];
    for (int i = 1; i < nc; i++) if (c[i] < min_c) min_c = c[i];

    // Вычисляем размер D
    *size_d = 0;
    for (int i = 0; i < na; i++) if (a[i] != min_a) (*size_d)++;
    for (int i = 0; i < nb; i++) if (b[i] != min_b) (*size_d)++;
    for (int i = 0; i < nc; i++) if (c[i] != min_c) (*size_d)++;

    int* d = (int*)malloc(*size_d * sizeof(int));
    if (!d) return NULL;

    int k = 0;
    // Копируем без минимумов
    for (int i = 0; i < na; i++) if (a[i] != min_a) d[k++] = a[i];
    for (int i = 0; i < nb; i++) if (b[i] != min_b) d[k++] = b[i];
    for (int i = 0; i < nc; i++) if (c[i] != min_c) d[k++] = c[i];

    return d;
}
