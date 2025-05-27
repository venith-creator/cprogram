#include <stdio.h>
//return types

int multiplyNumbers(int number1, int number2){
     int multiplied = number1 * number2;
     return multiplied;

}
int main(){

    int result = multiplyNumbers(3, 6);
    printf("Result =  %d", result);
    

    return 0;
}