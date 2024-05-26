#include <stdio.h>

int main(void) {
    int a, b, c, d, value;
    float res;
    int numerator;
    printf("Enter a four digit number:\n");
    scanf("%d", &value);
    a = value / 1000;
    b = value / 100 % 10;
    c = value / 10 % 10;
    d = value % 10;
    numerator = (a > 0) + (b > 0) + (c > 0) + (d > 0);
    res = (a + b + c + d) / (float)numerator;
    printf("%.2f", res);

    return 0;
}