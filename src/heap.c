#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int) * 10);
    if (!ptr) {
        fprintf(stderr, "ERROR: Heap allocation failed\n");
        return 1;
    }

    printf("INFO: Heap memory allocated successfully\n");

    free(ptr);
    printf("INFO: Heap memory freed\n");

    fprintf(stderr, "WARNING: Heap allocation test complete\n");

    return 0;
}
