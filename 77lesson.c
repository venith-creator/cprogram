#include <stdio.h>
//struct function
struct person{
    int age;
    double salary;
};

int main(){

    struct person person1 = {.age = 20, .salary = 993083.87};
    struct person person2 = {.age = 22, .salary = 1943437.64};

    printf("age of person1 is %d\n", person1.age);
    printf("salary of person1 is %.2lf\n", person1.salary);

    printf("age of person2 is %d\n", person2.age);
    printf("salary of person2 is %.2lf\n", person2.salary);


    return 0;
}