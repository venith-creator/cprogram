#include <stdio.h>
// break and continue

int main (){

    while(1){
        int number;
        printf("Enter your number: ");
        scanf("%d",&number);

        if(number <= 0){
            break;
        }
        if((number % 2) != 0 ){
            continue;
        }
        printf("%d\n", number);

    }

    return 0;
}   