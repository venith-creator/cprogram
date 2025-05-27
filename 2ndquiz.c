#include <stdio.h>

int main (){

    int number ;
    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 2 == 0)? printf("the number is even") : printf("the number is odd");

    return 0;
}   