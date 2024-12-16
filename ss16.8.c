#include <stdio.h>
#include <string.h>

void daoNguoc(char *input, char *reverse) {
	int length = strlen(input);
	char *start = input;
	char *end = input + length -1;
	
	while(end >= start) {
		*reverse = *end;
        reverse++;
        end--;
	}
	*reverse = '\0';
}

int main() {
	char inputString[100];
    char reverseString[100];
    
    printf("Nhap mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    daoNguoc(inputString, reverseString);
    
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);
    
    return 0;
}
