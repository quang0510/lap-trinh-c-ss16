#include <stdio.h>

int timPhanTu(int *arr, int size, int value) {
	for(int i=0; i < size; i++){
		if(arr[i] == value){
			return i;
		}
	}
	return -1;
}

int main() {
	int arr[] = {5,10,15,20,25};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int tim = 15;
	
	int index = timPhanTu(arr, size, tim);
	
	if (index != -1){
		printf("Gia tri %d duoc tim thay tai vi tri: %d\n", tim, index);
    } else {
        printf("Gia tri %d khong ton tai trong mang\n", tim);
    }
	
	return 0;
}
