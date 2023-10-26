#include <stdio.h>
#include <string.h>

/* Exerise: how many years lead to him get higher than me, 
   I grow 2 centimeters per year, he grows 4 centimeters */

int main(){


    double my_height = 1.95, height_him = 1.62;
    int years = 0;
    char my_name[40], name_him[40];

    gets(my_name);
    gets(name_him);

    while(height_him <= my_height){

        my_height += 0.02;
        height_him += 0.04;
        years++;

    }

    printf("%d years for %s gets higher than %s...\n", years, name_him, my_name);


    return 0;
}
