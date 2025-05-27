#include <stdio.h>
//typedef struct function
typedef struct person{
    int age;
    double salary;
} person;

int main(){

    person person1;

    person1.age = 20;
    person1.salary = 993083.87;
    printf("age of person1 is %d\n", person1.age);
    printf("salary of person1 is %.2lf\n", person1.salary);


    return 0;
}