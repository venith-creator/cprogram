#include <stdio.h>
#include <math.h>

int main(){

    double input, sqrtvalue, powervalue;
    printf("Enter a number: ");
    scanf("%lf", &input);

    sqrtvalue = sqrt(input);
    printf("square root is %.2lf\n",sqrtvalue);

    powervalue = pow(input, sqrtvalue);
    printf("result: %.3lf\n", powervalue);

    return 0;
}