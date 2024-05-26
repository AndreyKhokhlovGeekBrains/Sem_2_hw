#include <stdio.h>

int main(void) {
    int a, b, diff;
    printf("Eter two numbers separated by a space:\n");
    scanf("%d %d", &a, &b);
    diff = a - b;
    printf("%d - %d = %d\n", a, b, diff);

    return 0;
}