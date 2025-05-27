#include <stdio.h>
// return pointers from a function

int* findSquare(int* number){
    int square = *number * *number;
    *number = square;
    return number;

}

int main(){
    int number = 21;

    int* result = findSquare(&number);
    printf("result is %d", *result);

    return 0;
}