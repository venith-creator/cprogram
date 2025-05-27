#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //for sleep() fuction used to simulate time delay

#define MAX_FLOOR 10
#define MIN_FLOOR 1

int main(){
    int currentFloor = 1;
    int destinationFloor;
    char input[10];

    printf("welcome!!\n");

    while(1){
        printf("\n you are currently on floor %d\n", currentFloor);
        printf("Enter the floor you want to go to(1 - 10 or 0 to exit): ");

        if(fgets(input, sizeof(input), stdin) == NULL){
            printf("Invalid input! Please enter a number.\n");
            continue;
        }
        if(sscanf(input, "%d", &destinationFloor) != 1){
            printf("Invalid input! Please enter a number.\n");
            continue;
        }
        if(destinationFloor == 0){
            printf("Exiting lift. \n");
            break;//exits the loop if user enters 0
        }
        if(destinationFloor < MIN_FLOOR || destinationFloor > MAX_FLOOR ){
            printf(" Invalid floor. please enter a number between 1 and 10.\n");
            continue;
        }
        printf("closing lift doors..\n");
        printf("lift doors closed.\n");

        if (destinationFloor > currentFloor){
            for(int i = currentFloor + 1; i <= destinationFloor; i++){
                sleep(1);
                printf("passing floor %d...\n", i);
            }
        }else if (destinationFloor < currentFloor){
            for (int i = currentFloor - 1; i >= destinationFloor; i-- ){
                sleep(1);
                printf("passing floor %d...\n", i );
            }
        }
        // update on current floor
        currentFloor = destinationFloor;
        //  opening lift doors
        printf("Arrived at floor %d. Lift doors opening....", currentFloor);
        printf("Lift doors opened. \n");

    }

    return 0;
    
}