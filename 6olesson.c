#include <stdio.h>
#include <string.h>
//strcpy

int main(){


char food[] = "pizza";

char bestfood[strlen(food)];
strcpy(bestfood,food);
printf("%s", bestfood);
return 0;
}