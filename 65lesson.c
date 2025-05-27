#include <stdio.h>
//accessin values using pointers

int main(){

    int age = 25;

    int* ptr = &age;
    printf("address: %p\n ", ptr);
    printf("value: %d ", *ptr);

    return 0;
}