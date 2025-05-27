#include <stdio.h>
//changing values using pointers

int main(){

    int age = 25;

    int* ptr = &age;

    *ptr = 31;

    printf(" new age: %d ", age);

    return 0;
}