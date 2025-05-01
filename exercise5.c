#include <stdio.h>

int main() {
    int myint = 5;
    char mychar = 'a';
    int *p = &myint;
    char *q = &mychar;

    printf("Size of myint: %lu bytes\n", sizeof(myint));
    printf("Size of mychar: %lu bytes\n", sizeof(mychar));
    printf("Size of pointer p: %lu bytes\n", sizeof(p));
    printf("Size of pointer q: %lu bytes\n", sizeof(q));

    return 0;
}
