#include <stdio.h>

int main(){

    int numbers[5] = {1, 3, 5, 7, 9};

    for (int i = 0; i < 5; ++i){
        printf("%d = %p\n", *(numbers + i), numbers + i);
    }

    return 0;
}