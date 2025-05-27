#include <stdio.h>

int main(){

    int marks[5];
    int total = 0;
    float average;
    printf("enter 5  marks\n: ");

    for(int i = 0; i < 5; ++i){
        printf("subject %d: ", i + 1);
        scanf("%d ", &marks[i]);
        total += marks[i];//summing up the marks
    }
    average = total/5.0;// using 5.0 to ensurefloating point division 
        printf("total added score: %d\n ", total);
        printf("Average mark: %.2lf\n ", average);

    return 0;
}