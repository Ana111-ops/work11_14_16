#ifndef FUNC_H
#define FUNC_H

int sum_abs_after_max(int* arr, int n);
/**
 * Сумма модулей элементов после элемента с максимальным модулем
 * @param arr указатель на массив целых чисел
 * @param n размер массива
 * @return сумма модулей элементов после максимального по модулю
 */

int find_max_less_A(int* arr, int n, int A);
/**
 * Поиск индекса максимального элемента, меньшего A (вариант 8)
 * @param arr указатель на массив
 * @param n размер массива
 * @param A граничное значение
 * @return индекс максимального элемента < A или -1
 */

int* create_array_d(int* a, int na, int* b, int nb, int* c, int nc, int* size_d);
/**
 * Создание динамического массива D без минимумов из массивов A, B, C
 * @param a массив A
 * @param na размер A
 * @param b массив B
 * @param nb размер B
 * @param c массив C
 * @param nc размер C
 * @param size_d указатель на размер результирующего массива
 * @return указатель на массив D
 */



