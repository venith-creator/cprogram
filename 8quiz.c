#include <stdio.h>
//break and continue

int main(){

    while(1){
        int number;
        printf("Enter your message: ");
        scanf("%d\n", &number);

        if(number >= 0){
            break;
            printf("positive value ");
        }
        if((number % 2) == 0){
            printf("negative even \n");
            continue;
        }
        printf("%d\n", number);

    }

    return 0;
}