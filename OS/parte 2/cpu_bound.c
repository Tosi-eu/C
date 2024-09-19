#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define NUM_POINTS 100000000

int main() {
    while (1) {
        for (int i = 0; i < NUM_POINTS; ++i) {
            double x = (double)i / NUM_POINTS * 2 * M_PI;
            double y = sin(x) + cos(x) - tan(x); 
            double z = -sin(x) * cos(x) + tan(x); 
        }
        usleep(1000); 
    }

    return 0;
}
