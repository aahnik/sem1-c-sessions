#include <math.h>
#include <stdio.h>

int check_prime(int num) {
    // return 1 if prime
    // else 0

    if (num < 2) return 0;
    if (num == 2) return 1;

    for (int i = 2; i <= ceil(sqrt(num)); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int primes = 0;
    int COUNT = 10;
    int num = 1;
    int sum = 0;

    while (primes < COUNT) {
        if (check_prime(num)) {
            printf("%d ", num);
            sum += num;
            primes++;
        }
        num++;
    }
    printf("\n");
    printf("Sum of primes %d", sum);
}