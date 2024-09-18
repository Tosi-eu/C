#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define NUM_POINTS 100000000

int main() {
    FILE *file;
    file = fopen("cpu_bound_output.txt", "w");
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    for (int i = 0; i < NUM_POINTS; ++i) {
        double x = (double)i / NUM_POINTS * 2 * M_PI;
        double y = sin(x) + cos(x) - tan(x); 
        fprintf(file, "%f %f\n", x, y);
    }

    fclose(file);

    while (1) {
        sleep(1);
    }

    return 0;
}
