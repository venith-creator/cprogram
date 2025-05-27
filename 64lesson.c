#include <stdio.h>
//addresses and pointers

int main(){

    int age = 25;
    printf("%p", &age);

    int* ptr = &age;
    printf("\n%p", *ptr);

    return 0;
}