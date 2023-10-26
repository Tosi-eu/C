#include <stdio.h>
#include <string.h>

  void start(int secret){

    printf("\nJogo da Advinhação\n\n");

    printf("\nEntre com um número e vou  tentar advinhar!:\n\n");

    printf("\nEU sei que %d é a resposta, mas o pc quer descobrí-lo, digite um número para começar: ", secret);

  }

  int discover(int num, int num2){

      char reply[10];

      printf("\nÉ %d?\n", num);
      scanf("%s", reply);

      if(strcmp(reply, "correto") == 0){
        printf("\nAcertei...\n");
      }else
         if(strcmp(reply, "maior") == 0){
            return num + num2;
      }else 
          if(strcmp(reply, "menor") == 0){
            return num - num2;
          } 
  }

  int main(){

    int num, x = 8, secret;

    start(x);

    // número que quero que ele comece a busca
    scanf("%d", &num);

    //armazena o retorno da função
    secret = discover(num, 4);

    secret = discover(secret, 2);
    
    secret = discover(secret, 1);

    return 0;
  }
