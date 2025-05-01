#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Original value: %d\n", num);
    printf("After left shift: %d\n", num << 1);
    printf("After right shift: %d\n", num >> 1);

    return 0;
}
