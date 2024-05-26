#include <stdio.h>

int main(void) {
    int a, b, c, res;
    printf("Eter three numbers separated by a space:\n");
    scanf("%d %d %d", &a, &b, &c);
    res = a + b + c;
    printf("%d + %d + %d = %d", a, b, c, res);

    return 0;
}