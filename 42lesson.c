#include <stdio.h>
//global variable scope
int result;
void addNumbers(int number1,int number2){
    result = number1 + number2;
    printf("result: %d",result);
}
int main(){
    addNumbers(8,9);

    
    return 0;
}