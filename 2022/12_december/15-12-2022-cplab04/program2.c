#include <stdio.h>

int main() {
    // do sum of last 2 elements

    int a = 0, b = 1;

    int n = 10;

    if (n < 2) {
        printf("%d", n);
    }
    int i = 2;
    int fib;
    while (i <= n) {
        fib = a + b;

        a = b;
        b = fib;

        i++;
    }
    printf("%d", fib);
}

// 0 1 1 2 3 5 8
// 0 1 2 3 4 5 6