#include <stdio.h>

void PrintArray(int *vet);
void PrintString(char *msg);

int main(){

	int vet[10], msg[50];

	PrintArray(vet);

  setbuf(stdin, NULL);
  fgets(msg, 50, stdin);

  PrintString(msg);

	return 0;

}

void PrintArray(int *vet){

	for(int i = 0; i < 10; i++){
    scanf("%d", &vet[i]);
  }

	for(int i = 0; i < 10; i++){
  		printf("%d ", *(vet + i));
  }

	printf("\n");
  
}

void PrintString(char *msg){

  	for(int i = 0; *(msg + i) != '\0'; i++){
        printf("%c", *(msg + i));
  }
}