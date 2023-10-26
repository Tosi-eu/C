#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *numbers;
  int i = 0, sum = 0;
  FILE *file;
  char arq_option[10];

  //file name
  scanf("%s", arq_option);

  numbers = (int *)malloc(1300 * sizeof(int));

  file = fopen(arq_option, "r");

  if(file == NULL){
    printf("Erro na leitura do arquivo");
    exit(1);
    }
  
    while (fscanf(file, "%d", &numbers[i]) != EOF)
    {
      sum += numbers[i];
      i++;
    } 

  printf("%d", sum);

  fclose(file);
  free(numbers);
  return 0;
}
