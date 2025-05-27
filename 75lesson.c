#include <stdio.h>
//struct function
struct person{
    int age;
    double salary;
};

int main(){

    int age;
    double salary;

    struct person person1;
    person1.age = 20;
    person1.salary = 993083.87;

    printf("age of person1 is %d\n", person1.age);
    printf("salary of person1 is %.2lf", person1.salary);

    return 0;
}