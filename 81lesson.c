#include <stdio.h>
//changing integral constant

enum Size{
    small = 27,
    medium = 31,
    large = 35,
    extralarge = 40
};

int main(){

    enum Size shoeSize1 = small;
    enum Size shoeSize2 = medium;
    enum Size shoeSize3 = large;
    enum Size shoeSize4 = extralarge;

    printf("%d\n ", shoeSize1);
    printf("%d\n ", shoeSize2);
    printf("%d\n ", shoeSize3);
    printf("%d\n ", shoeSize4);

    return 0;
}