#include <stdio.h>

void inMang(int *arr, int size) {
	printf("Cac phan tu trong mang la:\n");
	for(int i=0; i< size; i++){
		printf("arr[%d] = %d\n", i, *(arr+i));
	}
}

int main() {
	int arr[]={5,10,15,20,25};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	inMang(arr, size);
	
	return 0;
}
