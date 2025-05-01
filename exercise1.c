#include <stdio.h>

int main() {
    short signed_var1 = 1;
    short signed_var2 = 32767; 
    short signed_var3 = 32768;     

    unsigned short unsigned_var1 = 1;
    unsigned short unsigned_var2 = 32767;
    unsigned short unsigned_var3 = 32768;

    printf("Signed short variables:\n");
    printf("signed_var1: %d\n", signed_var1);
    printf("signed_var2: %d\n", signed_var2);
    printf("signed_var3: %d\n", signed_var3);
    printf("Unsigned short variables:\n");
    printf("unsigned_var1: %u\n", unsigned_var1);
    printf("unsigned_var2: %u\n", unsigned_var2);
    printf("unsigned_var3: %u\n", unsigned_var3);

    return 0;
}
