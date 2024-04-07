#include "mbed.h"


InterruptIn buttn(PC_13);

void buttn_fall(){
    printf("button pressed!!\r\n");
}

// main() runs in its own thread in the OS
int main()
{
    printf("This is mbed os v%d \r\n",MBED_VERSION);

    buttn.fall(&buttn_fall);
    while (true) {

    }
}

