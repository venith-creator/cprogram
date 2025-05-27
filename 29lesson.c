#include <stdio.h>
// for loops

int main (){

    int sum = 0;

    for(int i = 1; i <= 100; i++){
    sum = sum + i;
    }
    printf("sum of the between numbers: %d ", sum);

    return 0;
}   