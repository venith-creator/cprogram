#include <stdio.h>
#include <stdlib.h>
// malloc() and free function + realloc

int main(){
    int n = 4;

    int* ages;

    ages = (int*) malloc(n * sizeof(int));

    if(ages == NULL){
        printf("memory cannot be allocated.\n");
        return 0;
    }
    printf("Enter 4 ages: \n");
    for(int i = 0; i < n; ++i){
        scanf("%d", ages + i);
    }
    printf("original array: \n");
    for(int i = 0; i < n; ++i){
        printf("%d\n", *(ages + i));
    }
    printf("\n");
    n = 6;

    ages = realloc(ages, n * sizeof(int));
    if(ages == NULL){
        printf("Memory cannot be allocated.\n");
        return 0;
    }
    ages[4] = 32;
    ages[5] = 59;
    printf("Newly Allocated memory\n");
    for(int i = 0; i < n; ++i){
        printf("%d\n ",*(ages + i));
    }
    printf("\n");

    free(ages);

    return 0;
}