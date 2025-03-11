#include <stdio.h>

void stackFunction() {
    int arr[10]; // Stack allocation
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    printf("INFO: Stack memory allocated and used successfully\n");
    fprintf(stderr, "WARNING: Stack operation completed\n");
}

int main() {
    stackFunction();
    return 0;
}
