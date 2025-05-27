#include <stdio.h>
#include <ctype.h>
//changing from lower case to upper case
int main(){

    char alpha = 'f';
    char upper = toupper(alpha);
    printf("%c", upper);

    char lower = tolower(upper);
    printf("\n%c", lower);
 
    return 0;
}