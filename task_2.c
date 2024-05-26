#include <stdio.h>

int main(void) {
    int a, b, c, sum, prod;
    printf("Eter three numbers separated by a space:\n");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    prod = a * b * c;
    printf("%d + %d + %d = %d\n", a, b, c, sum);
    printf("%d * %d * %d = %d", a, b, c, prod);

    return 0;
}