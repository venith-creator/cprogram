#include <stdio.h>
//switch statement

int main (){

    int number;

    printf("Enter a number from 1 to 12: ");
    scanf("%d", &number);

    switch(number){
        case 1:
        printf("january");
        break;
        case 2:
        printf("febraury");
        break;
        case 3:
        printf("march");
        break;
        case 4:
        printf("april");
        break;
        case 6:
        printf("june");
        break;
        case 7:
        printf("july");
        break;
        case 8:
        printf("August");
        break;
        case 9:
        printf("September");
        break;
        case 10:
        printf("october");
        break;
        case 11:
        printf("November");
        break;
        case 12:
        printf("December");
        break;
        case 5:
        printf("May");
        break;
        default:
        printf("invalid number");
        
    }

    return 0;
}   