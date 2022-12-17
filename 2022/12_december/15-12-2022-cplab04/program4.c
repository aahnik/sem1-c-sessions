#include <stdio.h>

int main() {
    int num = 123;

    int digit, sum = 0;
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        // sum = sum + digit;
        num /= 10;
    }
    printf("%d", sum);
}