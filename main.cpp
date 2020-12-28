#include "mbed.h"

DigitalOut myled(LED1);

int main() {
    while(1) {
        myled = 0; // LED is OFF
        wait(1.0); // 1 sec
        myled = 1; // LED is OFF
        wait(1.0); // 1 sec
        myled = 0; // LED is OFF
        wait(1.0); // 1 sec
        myled = 1; // LED is OFF
        wait(1.0); // 1 sec
    }
}
