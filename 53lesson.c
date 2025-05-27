#include <stdio.h>
//changing multidimensional array

int main(){

    int arr[2][3]= {{1, 3, 5},{2, 4, 6} };
    arr[0][1]= 8;
    arr[1][2]= 7;

    printf("%d\n", arr[0][1]);
    printf("%d",arr[1][2]);

    return 0;
}