#include <stdio.h>
//function prototypes

int addNumbers(int number1, int number2);


int main(){

    int result = addNumbers(8,9);
    printf("result =  %d", result);
    

    return 0;
}
int addNumbers(int number1, int number2){
     int sum = number1 + number2;
     return sum;
}