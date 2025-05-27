#include <stdio.h>

int main(){

    FILE* fptr;
    fptr = fopen("newfile1.txt", "r");
    char content[1000];

    if(fptr != NULL){
        while(fgets(content, 1000, fptr)){
            printf(" %s ", content);
        }
    }else{
        printf("File open unsuccessful");
    }
    
    fclose(fptr);
    return 0;
}