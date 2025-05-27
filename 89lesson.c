#include<stdio.h>
//creating a neew file

int main(){
    FILE* fptr;

    fptr = fopen("newfile.txt", "w");

    fputs("i love c progamming\n", fptr);
    fputs("i am willing to learn more", fptr);


    fclose(fptr);
    return 0;
}