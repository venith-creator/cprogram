#include <stdio.h>
// for loops for sum of even numbers

int main (){

    int sum = 0;

    for(int i = 2; i <= 100; i = i+2){
    sum = sum + i;
    }
    printf("sum of the even numbers: %d ", sum);

    return 0;
}   