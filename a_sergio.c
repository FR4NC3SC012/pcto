#include <stdio.h>
#include <unistd.h>

void clearScreen() {
    printf("\033[H\033[J");
}

void spinParrot(int iterations, int delay) {
    char parrot[] = "v  \\/\n >^)\n   ^\\";
    int i;

    for (i = 0; i < iterations; i++) {
        clearScreen();
        printf("%s\n", parrot);
        fflush(stdout);
        usleep(delay * 1000);  // sleep in microseconds
        // Rotate the parrot by shifting characters
        char temp = parrot[0];
        int j;
        for (j = 0; j < sizeof(parrot) - 1; j++) {
            parrot[j] = parrot[j + 1];
        }
        parrot[sizeof(parrot) - 2] = temp;
    }
}

int main() {
    int iterations = 50;
    int delay = 100;

    spinParrot(iterations, delay);

    return 0;
}

