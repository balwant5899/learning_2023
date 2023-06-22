#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

void readComplex(struct Complex* num1, struct Complex* num2) {
    scanf("%d%d", &(num1->real),&(num1->imag));
    printf("Reading the 2nd complex number:\n");
    scanf("%d%d",&(num2->real),&(num2->imag));
}

void writeComplex(struct Complex num1, struct Complex num2) {
    printf("Complex number is: %d + %di\n", num1.real, num1.imag);
    printf("Complex number is: %d + %di\n", num2.real, num2.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;
    product.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    product.imag = (num1.real * num2.imag) + (num1.imag * num2.real);
    return product;
}

int main() {
    struct Complex num1, num2, sum,product;
    printf("Reading the first complex number:\n");
    readComplex(&num1, &num2);

    writeComplex(num1, num2);
    sum = addComplex(num1, num2);
    printf("Sum of two complex numbers: %d + %di\n", sum.real, sum.imag);
    product = multiplyComplex(num1, num2);
    printf("multiplication of two complex numbers: %d + %di\n", product.real, product.imag);

    return 0;
}
