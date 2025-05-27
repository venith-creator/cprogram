#include <stdio.h>
// multiplying numbers using pointers and functions

int* addNumber(int* num1, int* num2, int* product){
    *product = *num1 * *num2;
    return product;

}

int main(){
    int number1 = 21;
    int number2 = 20;
    int product; 

    int* result = addNumber(&number1, &number2, &product);

    printf("product is %d", *result);

    return 0;
}