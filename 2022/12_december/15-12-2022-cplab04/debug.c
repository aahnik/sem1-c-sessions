// sundar's code
// i debugged

#include <math.h>
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int primesum = 0;
    int i;
    int k = 0; // 1 when not prime
    for (n = 0; n <= 30; n++) {
        k = 0; // refresh state of k
        if ((n == 0) || (n == 1)) {
            k = 1;
        }
        for (i = 2; i <= ceil(n / 2.0f); ++i) {
            // printf("%d has entered loop with counter=%d", n, i);
            if (n % i == 0) {
                // printf("%d is divisible by %d", n, i);
                k = 1;
                sum += n;
                break;
            }
        }
        if (k == 0) {
            printf("The number %d is prime\n", n);
        } else {
            printf("The number %d is not prime\n", n);
        }
    }
    primesum = (30 * 31) / 2 - sum - 1;
    printf("The sum of first ten primes is: %d\n", primesum);
    return 0;
}