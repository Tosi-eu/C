#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int stud[10][3], worst_test_1 = 0, worst_test_2 = 0, worst_test_3 = 0;
    int minor, indexMinor;
    
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 3; j++){
            stud[i][j] = rand() % 10;
        }
    }

    for(int i = 0; i < 10; i++){
        minor = stud[i][0];
        indexMinor = 0;
        for(int j = 1; j < 3; j++){
            if(stud[i][j] < minor){
                minor = stud[i][j];
                indexMinor = j;
            }
        }
        if(indexMinor == 0)
            worst_test_1++;
        else if(indexMinor == 1)
                worst_test_2++;
        else
            worst_test_3++;
    }

       for(int i = 0; i < 10; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", stud[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    
    printf("Students with bad grades at test 1: %d \n", worst_test_1);
    printf("Students with bad grades at test 2: %d \n", worst_test_2);
    printf("Students with bad grades at test 3: %d \n", worst_test_3);
    return 0;
}