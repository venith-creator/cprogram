#include <stdio.h>

typedef struct complex{
    float real;
    float imagine;
} complex;
complex subtractComplex(complex c1, complex c2, complex c3){
    complex result;
    result.real = c1.real - c2.real - c3.real;
    result.imagine = c1.imagine - c2.imagine - c3.imagine;
    return result;
}



int main(){
    complex num1, num2, num3, difference;

    printf("Enter complex number (real and imaginay number): ");
    scanf("%f %f",&num1.real, &num1.imagine );
    printf("Enter complex number (real and imaginay number): ");
    scanf("%f %f",&num2.real, &num2.imagine );
    printf("Enter complex number (real and imaginay number): ");
    scanf("%f %f",&num3.real, &num3.imagine );

    difference = subtractComplex(num1, num2, num3);
    printf("difference is %.2lf + %.2lfi\n", difference.real, difference.imagine);

    return 0;
}