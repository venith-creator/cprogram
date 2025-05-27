#include <stdio.h>
//accessin values using pointers

int main(){

    double salary;
    double *ptr;
    printf("enter your salary: ");
    if (scanf("%lf", &salary) !=1 ){
        printf("invalid input. please enter a number.\n");
        return 1;
    }

    ptr = &salary;
    printf("original salary: %.2lf\n", *ptr);

    *ptr = *ptr * 2;
    printf("updated salary: %.2lf\n ", *ptr);


    return 0;
}