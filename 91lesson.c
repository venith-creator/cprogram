//preprocessor
#include <stdio.h>
#define PI 3.142

int main(){

    double radius = 12.4;
    double area = PI * radius * radius;

    printf("%.2lf", area);

    return 0;
}