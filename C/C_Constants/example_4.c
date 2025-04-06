#include <stdio.h>
#define GRAVITY 9.8
int main() {
    float mass = 5.0;
    float weight = mass * GRAVITY;
    printf("Weight: %.1f\n", weight);
    return 0;
}