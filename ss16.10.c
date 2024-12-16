#include <stdio.h>

void xoaPhanTu(int *arr, int *size, int index) {
    for (int i = index; i < *size; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

int main() {
    int array[100] = {10, 20, 30, 40, 50};
    int size = 5; 

    printf("Mang truoc khi xoa:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int index = 2;

    xoaPhanTu(array, &size, index);

    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

