#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    setlocale(LC_ALL, "RUS");
    task_14();
}

int task_11(){
    //определить количество элементов массива, значения которых больше заданного числа A
    int array[] = { 10, 15, 3, 7, 20, 5, 2, 4, 0, 1 };
    int count = 0; 
    int size = sizeof(array) / sizeof(array[0]); 

    int A;
    printf("Введите число A: ");
    scanf("%d", &A); 

    for (int i = 0; i < size; i++) {
        if (array[i] > A) { 
            count++; 
        }
    }

    printf("Количество элементов, больших %d, равно %d\n", A, count);

    return 0;
}

int task_14() {
    //Поиск порядкового номера максимального значения элементов, меньше заданного значения А
    int array[] = { 10, 15, 3, 7, 20, 5, 2, 4, 0, 1 };
    int size = sizeof(array) / sizeof(array[0]); 
    int max = 0;

    int A;
    printf("Введите число A: ");
    scanf("%d", &A);
  
    for (int i = 0; i < size; i++) {
        if (array[i] < A) {
            max = i;
            break;
        }
    }

    for (int i = max + 1; i < size; i++) {
        if (array[i] < A && array[i] > array[max]) {
            max = i;
        }
    }
    printf("Максимальный элемент, меньший %d: %d\n", A, array[max]);
    printf("Его порядковый номер : %d\n", max);

}
int task_16() {
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int b[] = { 10, 20, 30, 40, 50, 60 };
    int c[] = { 100, 200, 300, 400, 500 };
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int l = sizeof(c) / sizeof(c[0]);

    int d[100];
    int h = 0; // фактический размер d


    for (int i = 0; i < n; i++) {
        if ((i + 1) % 4 == 0) 
            continue;
        d[h++] = a[i];
    }

    
    for (int i = 0; i < m; i++) {
        if ((i + 1) % 4 == 0)
            continue;
        d[h++] = b[i];
    }

    for (int i = 0; i < l; i++) {
        if ((i + 1) % 4 == 0)
            continue;
        d[h++] = c[i];
    }

    printf("Массив d:\n");
    for (int i = 0; i < h; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}
   
  