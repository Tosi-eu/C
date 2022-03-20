#include <stdio.h>
#include <stdlib.h>

int main()
{
 float solution =0, denominator=1, numerator=1;
    while (denominator<=50){
        solution+= numerator/denominator;
        printf("%.0f/%.0f = %.2f\n", numerator,denominator,solution);
        denominator++;
        numerator += 2;
    }
    printf("%.2f", solution);

return 0;
system("Pause");
}
