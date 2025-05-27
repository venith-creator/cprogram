#include <stdio.h>
//switch statement

int main (){

    int number;

    printf("Enter a number from 1 to 7: ");
    scanf("%d", &number);

    switch(number){
        case 6:
        case 2:
        case 3:
        case 4:
        case 5:
        printf("weekday");
        break;
        case 1:
        case 7:
        printf("weeknd");
        break;
        default:
        printf("invalid number");
        

    }

 return 0;
}   