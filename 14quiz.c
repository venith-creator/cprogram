#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 > len2){
        printf("larger value: %s\n", str1);
    }else if(len2 > len1){
        printf("larger value: %s\n", str2);
    }else{
        printf("both vlaues are of equal length.\n");
    }

    return 0;
}