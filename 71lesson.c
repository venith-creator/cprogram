#include <stdio.h>

void findValue(int* num){
    *num = 39;
}

int main(){
    int number = 21;

    findValue(&number);
    printf("Number:  %d", number);

    return 0;
}