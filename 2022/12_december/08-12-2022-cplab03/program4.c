#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int total = a + b + c;
    int avg = total / 3;

    switch (avg)
    {
    case 91 ... 100:
        printf("O");
        break;

    case 75 ... 90:
        printf("E");
        break;
    // last case 41 ... 44
    default:
        printf("F");
}

}

