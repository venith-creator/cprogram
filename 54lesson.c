#include <stdio.h>
//multidimensional array and for loop

int main(){

    int arr[2][3]= {{1, 3, 5},{2, 4, 6} };
    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}