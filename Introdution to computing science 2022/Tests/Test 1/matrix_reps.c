#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 

  programa that counts how many times one value repeats
  in a matrix MxN

  functions:

  -> function fill_mat = fill all matrix.

  -> function showMat = print the matrix.

  -> function countReps = walks each value in matrix and see if he is repeated, if yes, increment count. After all, return 
  the index of the number that repeats more times, and return himself.

  How countReps works: Basically, we need 3 for loops, onde representing the lines, other representing the rows, and
  other representing the elements of each index. After this, we need a stop condition (represented by 'flag'), where if
  flag = 1 (or true), the search stops, else, increment the counter.

*/

void fill_mat(int *mat, int m, int n);
void showMat(int *mat, int m, int n);
void countReps(int *mat, int m, int n);

int main(){

  int *mat;
  int m, n;

    scanf("%d %d", &m, &n);

    mat = malloc(m * n  * sizeof(int));

    fill_mat(mat, m, n);
    showMat(mat, m, n);
    countReps(mat, m, n);

  free(mat);
  return 0;
}

void fill_mat(int *mat, int m, int n){

    srand(time(NULL));

    for(int i = 0; i < m*n; i++)
        *(mat + i) = rand() % 20;
}

void showMat(int *mat, int m, int n){

    printf("\n");

    for(int i = 0; i < m*n; i++){
        printf("%d ", *(mat + i));
          
  if(((i + 1) % m) == 0)
            printf("\n");
    }
}

void countReps(int *mat, int m, int n){

    int i, j = 0, k, l, flag = 0, vet[m*n], count, greater, value;

    for(k = 0; k < m*n; k++){
        count = 0;
        for(i = 0; i < m*n; i++){
            if(*(mat + k) == *(mat + i)){
                for(l = 0; l < j; l++)
                    if(*(mat + k) == vet[l]){
                        flag = 1; // stop condition
                    }
                if(flag == 0){
                    count++;
                    if(i == 0){
                      greater = count;
                    }
                }
            }
        }
        if(count >= 1){
            vet[j++] = *(mat + k);
        }
        if(count > greater){
              greater = count;
              value = *(mat + k); 
            }
        flag = 0; // restart after each step of the loop
    }
    printf("\n\nValue: %d <--> reps: %d\n", value, greater);
}