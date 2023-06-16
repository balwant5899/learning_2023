#include <stdio.h>

void swap(void* a, void* b, int size) {
    char temp;
    char* p1 = (char*)a;
    char* p2 = (char*)b;
    
    for (int i = 0; i < size; i++) {
        temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
}

int main() {
    int a = 5, b = 10;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);

    double x = 3.14, y = 2.71;
    printf("Before swapping: x = %.2f, y = %.2f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swapping: x = %.2f, y = %.2f\n", x, y);

    char c1 = 'A', c2 = 'B';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
