#include <stdio.h>
// break statements with while loops

int main (){

    while(1){
        int number;
        printf("Enter your number: ");
        scanf("%d",&number);

        if(number <0){
            break;
        }
        printf("%d\n", number);

    }

    return 0;
}   