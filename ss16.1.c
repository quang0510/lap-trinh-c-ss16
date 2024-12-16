#include <stdio.h>

int main() {
    int num = 10;

    int *ptr = &num;

    printf("Gia tri cua num: %d\n", num);
    printf("Dia chi cua num: %d\n", &num);

    printf("Gia tri cua num thong qua con tro: %d\n", *ptr);
    printf("Dia chi cua num thong qua con tro: %d\n", ptr);

    return 0;
}
