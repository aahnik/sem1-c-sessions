#include <stdio.h>

int main() {
    char arr[10];
    char ch;
    int n = 0;
    while (ch != EOF) {
        scanf("%c", &ch);
        arr[n] = ch;
        n++;
        if (n == 10) break;
    }

    for (int i = 9; i >= 0; i--) {
        printf("%c", arr[i]);
    }
}