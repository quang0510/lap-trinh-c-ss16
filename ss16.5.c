#include <stdio.h>

void capNhatMang(int *arr, int newValue, int index) {
	arr[index] = newValue;
}

int main() {
	int arr[] = {10,15,20,25,30};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	printf("Mang ban dau: \n");
	for(int i = 0; i < size ; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	int newValue =100;
	int index=0;
	
	capNhatMang(arr, newValue, index);
	
	printf("Mang sau khi cap nhat: \n");
	for(int i = 0; i < size ; i++) {
		printf("arr[%d] = %d \n", i, arr[i]);
	}
	
	return 0;
}
