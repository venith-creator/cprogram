#include <stdio.h>

int main(){ 

    int numbers[5] = {1, 3, 5, 7, 9};

    *numbers = 2;
    *(numbers + 4) = 11;

    printf("first element: %d\n", *numbers );
    printf("last element: %d", *(numbers + 4));

    return 0;
}