#include <stdio.h>
// adding numbers using pointers

int* addNumber(int* num1, int* num2, int* sum){
    *sum = *num1 + *num2;
    return sum;

}

int main(){
    int number1 = 21;
    int number2 = 20;
    int sum; 

    int* result = addNumber(&number1, &number2, &sum);

    printf("sum is %d", *result);

    return 0;
}