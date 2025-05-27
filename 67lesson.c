#include <stdio.h>

int main(){

    int numbers[5] ={1, 3,5,7,9};
    for(int i = 0;  i < 5; ++i){
        printf("%d = %p\n", numbers[i], &numbers[i]);
    }
    printf("array address of 1: %p\n", numbers);
    printf("array address of 3: %p\n", numbers + 1);
    printf("array address of 5: %p\n", numbers + 2);



    return 0;
}