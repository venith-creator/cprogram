#include <stdio.h>
//switch statement with simple calculator

int main (){

    char operator;

    printf("choose an operator ['+','*','-','/']: ");
    scanf(" %c", &operator);

    double num1 , num2;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    double result;

    switch(operator){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2 ;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if(num2 != 0)
        result = num1 / num2 ;
        else{
            printf("Error! division by zero is not allowed");
            return 1;
        }
        break;
        default:
        printf("Invalid operator, please pick one of the four operators");
        return 1;  
    }
    printf("result: %.2lf\n", result);

    return 0;
}   