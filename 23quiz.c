#include <stdio.h>
#include <math.h>
#define squareRoot(n) sqrt(n)

int main(){

    double num;

    printf("eNter a number: ");
    scanf("%lf", &num);

    printf("square root of %.2lf is %.2lf", num, squareRoot(num));

    return 0;
}