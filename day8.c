#include <stdio.h>

int power(int n, int b) {
    if (b == 0)
        return 1;
    return n * power(n, b - 1);
}

int main() {
    int a, b;]
    scanf("%d %d", &a, &b);

    int c = power(a, b);
    printf("%d^%d = %d\n", a, b, c);

    return 0;
}
