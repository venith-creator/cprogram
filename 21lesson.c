#include <stdio.h>
//switch statement

int main (){

    int number;

    printf("Enter a number from 1 to 7: ");
    scanf("%d", &number);

    switch(number){
        case 1:
        printf("sunday");
        break;
        case 2:
        printf("monday");
        break;
        case 3:
        printf("tuesday");
        break;
        case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saturday");
        break;
        default:
        printf("invalid number");
        
    }

    return 0;
}   