#include <stdio.h>
#include <string.h>
//strcat function

int main(){
    char text1[] = "hey, ";
    char text2[] = "how are you";

    strcat(text1,text2);
    printf("%s", text1);

    return 0;
}