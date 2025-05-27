#include <stdio.h>
//read file content
int main(){
    FILE* fptr;

    fptr = fopen("81lesson.c", "r");

    char content[9000];

    if(fptr != NULL){
        while(fgets(content, 9000, fptr)){
            printf("%s ", content);
        }
    }else{
        printf("File open unsuccessful");
    }
    fclose(fptr);
        return 0;
}