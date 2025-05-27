#include <stdio.h>
#include <unistd.h> //for sleep() fuction used to simulate time delay

int main(){
    int currentFloor = 1;
    int destinationFloor;
    int timePerFloor = 2;

    printf("welcome!!\n");

    while(1){
        printf("\n you are currently on floor %d\n", currentFloor);
        printf("Enter the floor you want to go to(1 - 10 or 0 to exit): ");
        scanf(" %d\n", &destinationFloor);

        if(destinationFloor == 0){
            printf("Exiting lift. \n");
            break;//exits the loop if user enters 0
        }
        if(destinationFloor < 1 || destinationFloor > 10 ){
            printf(" Invalid floor. please enter a number between 1 and 10.\n");
            continue;
        }
        printf("closing lift doors..\n");
        printf("lift doors closed.\n");

        if (destinationFloor > currentFloor){
            for(int i = currentFloor + 1; i <= destinationFloor; i++){
                sleep(timePerFloor);
                printf("passing floor %d...\n", i);
            }
        }else if (destinationFloor < currentFloor){
            for (int i = currentFloor - 1; i>= destinationFloor; --i ){
                sleep(timePerFloor);
                printf("passing floor %d...\n", i);
            }
        }
        // updateon current floor
        currentFloor = destinationFloor;
        //  opening lift doors
        printf("Arrived at floor %d. Lift doors opening....", currentFloor);
        printf("Lift doors opened. \n");

    }

    return 0;
}