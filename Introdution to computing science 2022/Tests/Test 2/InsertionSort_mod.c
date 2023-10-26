#include <stdio.h>

void insertionSort(int vet[], int n);
void printArray(int vet[], int n);

int main(){

  int n; // array size
  scanf("%d", &n);
  int vet[n];

   insertionSort(vet, n);
   printArray(vet, n);

 return 0;
}

void insertionSort(int vet[], int n)
{
	int last, a, b;

	for (int i = 0; i < n; i++){

	scanf("%d %d", &a, &b);

	if(a > b){ //conditional
	     vet[i] = a;
	}else
	     vet[i] = b;

	last = vet[i];
	int j = i - 1;
	while (j >= 0 && vet[j] > last){
	      vet[j + 1] = vet[j];
	      j--;
	}
	vet[j + 1] = last;

	}
}

void printArray(int vet[], int n)
{

    for (int i = 0; i < n; i++){
         printf("%d ", vet[i]);
  }
   printf("\n");
}
