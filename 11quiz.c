#include <stdio.h>
//factorial
long long factorial(int n);

int main(){

    int number; 
    long long result;
    printf("Enter the integer: ");
    scanf("%d", &number);

    result = factorial(number);
    printf(" result: %d", result);
    return 0;
}
long long factorial(int n){
    if(n > 0){
        //factorial() function calls itself
        return n * factorial(n-1);  
    }
    else{
        return 1;
    }
}