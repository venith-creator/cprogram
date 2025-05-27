#include <stdio.h>
//integral constant
enum week{
    sunday ,
    monday ,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};

int main(){

    enum week weekday1 = monday;
    enum week weekday2 = tuesday;
    enum week weekday3 = wednesday;
    enum week weekday4 = thursday;
    enum week weekday5 = friday;
    enum week weekend1 = saturday;
    enum week weekend2 = sunday;

    char *weekend1_str = "saturday";
    char *weekend2_str = "sunday";

    printf("value of weekend1: %s\n ", weekend1_str);
    printf("value of weekend2: %s ", weekend2_str);


    return 0;
}