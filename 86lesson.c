#include <stdio.h>
//file handling

int main(){
    FILE* fptr;

    fptr = fopen("90lesson.c", "r");

    if(fptr != NULL){
        printf("File Open succesful");
    }else{
        printf("File open unsuccessful");
    }

    return 0;
}