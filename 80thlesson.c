#include <stdio.h>
//integral constant

enum Size{
    small,
    medium,
    large,
    extralarge,
};

int main(){

    enum Size shoeSize;

    shoeSize = extralarge;
    printf("%d ", shoeSize);

    return 0;
}