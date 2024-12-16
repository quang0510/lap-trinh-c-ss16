#include <stdio.h>

void sapXep(int *arr, int size){
	for(int i =0;i < size; i++){
		for(int j= i + 1; j<size; j++){
			if( arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {
	int arr[] = {50, 70, 100, 80, 90, 60};
	int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mang truoc khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    sapXep(arr, size);

    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
