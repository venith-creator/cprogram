#include <stdio.h>

int main(){

    int number;
    int count = 10;

    printf("Enter your number: ");
    scanf("%d", &number);

    while(count >= 1){
        int product = number * count;
        printf("%d*%d = %d\n", number, count, product);
        count = count - 1;

    }

    return 0;
}