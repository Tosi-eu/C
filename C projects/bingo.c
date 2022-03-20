#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int i, num;
    int mat[5][5];
    srand(time(NULL));
    int j = 0;
    while (j < 5)
    {
        for (int i = 0; i < 5; i++){
            num = rand();
            num = (20*j) + num%20;
            mat[j][i] = num;
        }
        for (int a = 0; a < 5; a++){
            if(mat[j][a] == 0){
                j--;
                break;
            }
            int cont = 0;
            for(int b = 0; b < 5; b++)
                if(mat[j][a] == mat[j][b])
                    cont++;
            if(cont > 1){
                j--;
            }
        }
        j++;
    }

    for(int a = 0; a < 5; a++){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                if(mat[a][i] < mat[a][j]){
                    int temp = mat[a][i];
                    mat[a][i] = mat[a][j];
                    mat[a][j] = temp;
                }
            }
        }
    }

    for(int a = 0; a < 5; a++){
        for (int b = 0; b < 5; b++){
            //if(a == 2 && b == 2)
            //    printf("GO");
            //else {
                if(mat[b][a]<10)
                    printf("0%d ", mat[b][a]);
                else
                    printf("%d ", mat[b][a]);
            //}
        }
        printf("\n");
    }

    return 0;
    system("Pause");
}
