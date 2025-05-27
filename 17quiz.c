#include <stdio.h>
//finding smallest number
int main(){

    int arr[] = {34, 12, 21, 54, 48};
    int smallest = *arr;


    for(int i = 0; i < 5; ++i){
        if(smallest > *(arr + i)){
            smallest = *(arr + i);
        }

    }
    printf("smallest number: %d\n", smallest);

    return 0;
}