#include<stdio.h>
// arrays

int main(){
    int age[5] ;

    printf("enter 5 input values: ");
    scanf("%d", &age[0]);
    scanf("%d", &age[1]);
    scanf("%d", &age[2]);
    scanf("%d", &age[3]);
    scanf("%d", &age[4]);

    printf("%d",age[0]);
    printf("%d",age[1]);
    printf("%d",age[2]);
    printf("%d",age[3]);
    printf("%d",age[4]);

    return 0;
}