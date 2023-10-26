#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_rand(int vet[], int size);

void fill_idRand(int vet[], int size);

int main(){

  int id_ox[90], weightOx[90], heaviest, lightest, lightestId, heaviestId;

  srand(time(NULL));

  fill_idRand(id_ox, 90);
  fill_rand(weightOx, 90);

  heaviest = weightOx[0];
  lightest = weightOx[0];

  for(int i = 0; i < 90; i++){
    if(weightOx[i] > heaviest){
      heaviest = weightOx[i];
      heaviestId = id_ox[i];
    }else 
        if(weightOx[i] < lightest){
            lightest = weightOx[i];
            lightestId = id_ox[i];
        }
  }

  for(int i = 0; i < 90; i++){
    printf("%d %d\n", weightOx[i], id_ox[i]);
  }

  printf("\n%d %d\n\n%d %d\n", heaviest, heaviestId, lightest, lightestId);
  return 0;
}

void fill_rand(int vet[], int size){

  srand(time(NULL));

  for(int i = 0; i < size; i++){
    vet[i] = 100 + rand() % 500;
  }

}

void fill_idRand(int vet[], int size){

  srand(time(NULL));

  for(int i = 0; i < size; i++){
    vet[i] = rand() % 90;
  }

}
