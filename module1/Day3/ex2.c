#include <stdio.h>

void printBits(int num) {
    for(int i=31;i>0;i--)
    {
        printf("%d",(num>>i & 1));
    }
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);
    printBits(num);
    return 0;
}

