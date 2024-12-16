#include <stdio.h>

void themPhanTu(int *arr, int *size, int newValue, int index) {
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = newValue;

    (*size)++;
}

int main() {
    int array[100] = {10, 20, 30, 40, 50};
    int size = 5;

    printf("Mang truoc khi them:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int newValue = 999;
    int index = 3;


    themPhanTu(array, &size, newValue, index);

    printf("Mang sau khi them:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

