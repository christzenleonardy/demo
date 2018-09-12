#include "mbed.h"

DigitalOut myled(LED1);

int main() {
    while(1) {
        myled = 1; // LED is ON
        wait(0.2); // 200 ms
        myled = 0; // LED is OFF
        wait(1.5); // 1 sec
        myled = 1; // LED is OFF
        wait(0.5); // 1 sec
    }
}
