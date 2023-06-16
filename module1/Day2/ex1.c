#include <stdio.h>

int main() {
    double x = 0.7;
    unsigned long long* ptr = (unsigned long long*) &x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%llx\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--)
     {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");

    return 0;
}
