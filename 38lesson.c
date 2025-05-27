#include <stdio.h>
//return types

int addNumbers(int number1, int number2){
     int sum = number1 + number2;
     return sum;

}
int main(){

    int result = addNumbers(8,9);
    printf("result =  %d", result);
    

    return 0;
}