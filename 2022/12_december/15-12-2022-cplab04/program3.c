#include <stdio.h>

int main() {
    int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    int cmp = 0, swap = 0;
    int temp;
    for (int i = 0; i < SIZE - 1; i++) {
        int min = i;
        for (int j = i+1; j < SIZE; j++) {
            if (arr[j] < arr[min]) min = j;
            cmp++;
        } // end of inner for
        if (min != i) {
            // swap arr[i] and arr[min]
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
            swap++;
        }

    } // end of outer for

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}