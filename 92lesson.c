//preprocessor
#include <stdio.h>
#define PI 3.142
#define circleArea(r) (PI * r * r)

int main(){
    double radius = 12.44;

    double area = circleArea(radius);

    printf("%.2lf", area);

    return 0;
}