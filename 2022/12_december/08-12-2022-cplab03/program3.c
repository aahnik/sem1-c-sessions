#include <stdio.h>
#include <math.h>

// pow
// &&
int main(){
    double a, b, c;
    printf("enter numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double r1 = (pow(a, b * c) + pow(b, a * c) + pow(c, a * b));
    double final_result = pow(r1, 2.0);

    printf("The result: %lf", final_result);
    
}