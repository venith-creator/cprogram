#include <stdio.h>
#include <stdbool.h>

int main (){

    int age = 16;

    double height = 6.3;

    bool result = (age >= 18) && (height > 6.0);

    printf("%d", result);


    return 0;
}