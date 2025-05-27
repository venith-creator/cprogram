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
    struct person person2;

    person1.age = 20;
    person1.salary = 993083.87;
    printf("age of person1 is %d\n", person1.age);
    printf("salary of person1 is %.2lf\n", person1.salary);

    person2.age = 22;
    person2.salary = 1967683.87;
    printf("age of person2 is %d\n", person2.age);
    printf("salary of person2 is %.2lf\n", person2.salary);


    return 0;
}