#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numbers[10][1];
  int i = 0, sum = 0;
  FILE *file;

  file = fopen("ex1.txt", "r");


  if(file == NULL){
    printf("Erro na leitura do arquivo");
    exit(1);
  }

    while (fscanf(file, "%d", &numbers[i][0]) != EOF)
    {
       sum += numbers[i][0];
       i++;
    }
    numbers[i][0] = '\0';

  printf("%d ", sum);

  fclose(file);
  return 0;
}
