#include <stdio.h>
#include <stdlib.h>


void multiplos(int *vet, int n){

vet = (int *) malloc(n*sizeof(int));

int i, mult;

for(i = 1; i <= n; i++){
    if(n % i == 0){
        i = mult;
     }
   }
}


int main(){

int n, *v;

 v = (int *) malloc(n*sizeof(int));

 scanf("%d", &n);

 for(int i = 1; i <= n; i++){
          multiplos(v, n);
 }


for(int i = 1; i <= n; i++){
          printf("%d ", v[i]);
 }


 free(v);

 return 0;

}
