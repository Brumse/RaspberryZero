#include <stdio.h>
#include <pigpio.h>

#define LED_PIN 17  // GPIO 17

int main() {
    if (gpioInitialise() < 0) {
        fprintf(stderr, "ERROR: pigpio initialization failed!\n");
        return 1;
    }

    gpioSetMode(LED_PIN, PI_OUTPUT);
    printf("INFO: Blinking LED on GPIO 17\n");

    for (int i = 0; i < 10; i++) {
        gpioWrite(LED_PIN, 1);
        printf("INFO: LED ON\n");
        gpioDelay(500000);  // 500ms

        gpioWrite(LED_PIN, 0);
        printf("INFO: LED OFF\n");
        gpioDelay(500000);  // 500ms
    }

    gpioTerminate();
    printf("INFO: Blink test complete\n");
    return 0;
}
