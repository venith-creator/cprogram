#include <stdio.h>
// multiplication table with do  while loops

int main (){

    int number;
    printf("Enter the number: ");
    scanf("%d", &number);

    int count = 1;

    do{
        int product =  number * count;
        printf("%d*%d =%d\n", number, count, product);
        count = count + 1;
    } while (count <= 12 );


    return 0;
}   