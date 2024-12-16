#include <stdio.h>

void tinhTong(int a, int b, int *tong) {
	*tong = a + b;
}

int main() {
	int x = 5;
	int y = 10;
	int sum = 0;
	
	tinhTong(x, y, &sum);
	
	printf("Tong cua 2 gia tri la: %d\n", sum);
	
	return 0;
}
