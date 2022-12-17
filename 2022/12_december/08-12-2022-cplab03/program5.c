#include <stdio.h>

int main()
{
    float d;
    // printf
    scanf("%f", &d);

    float base = 120.0;

    if ((d > 0) && (d <= 10))
    {
        base = base;
    }
    else if ((d > 10) && (d <= 15))
    {
        base = base + (d - 10) * 10;
    }
    else if ((d > 15) && (d <= 20))
    {
        base = base + 5.0 * 10.0 + (d - 15) * 8.0;
    }
    else if (d > 20)
    {
        base = base + (5.0 * 10.0) + (5.0 * 8.0) + (d - 20.0) * 6.0;
    }
    else
    {
        printf("invalid input");
    }
    float t = base + 0.1 * base;
    printf("%.2f", t);
}

// 12 = 10 + 2
// 120 rs
// 2 * 10rs/km

// 18

// 10 120rs
// 5 5*10 rs
// 3 *8