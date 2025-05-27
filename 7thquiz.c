#include <stdio.h>
// for loops for sum of odd numbers

int main (){

    int sum = 0;

    for(int i = 1; i <= 100; i = i+2){
    sum = sum + i;
    }
    printf("sum of the odd numbers: %d ", sum);

    return 0;
}   