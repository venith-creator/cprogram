#include <stdio.h>
//integral constant

enum Size{
    small,
    medium,
    large,
    extralarge,
}shoeSize;

int main(){

    shoeSize = medium;
    printf("%d ", shoeSize);

    return 0;
}