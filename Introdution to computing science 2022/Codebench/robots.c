#include <stdio.h>

struct robots{

    float weight, height, enginePower, resistance, power;
};

int main(){

struct robots rb;
float result = 0.0;
int howMany = 0;

scanf("%d", &howMany);

for(int i = 0; i < howMany; i++){
    scanf("%f %f %f %f", &rb.weight, &rb.height, &rb.enginePower, &rb.resistance);

    rb.power = (rb.enginePower + rb.resistance) * (rb.weight - rb.height);

    if(rb.power < 0){
        rb.power *= -1;
        result += rb.power;
    }

    printf("Power = %.2f\t Sum = %.2f\n", rb.power, result);
    rb.power = 0;
}

    return 0;
}
