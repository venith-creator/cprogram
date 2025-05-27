#include <stdio.h>
//shortened arrays


int main(){
    int age[5];

    for(int i = 0; i < 5; ++i){
        scanf("%d ", &age[i]);
    }

    for(int i = 0; i < 5; ++i){
        printf("%d " ,age[i]);
    }

    return 0;
}