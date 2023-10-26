#include <stdio.h>
#include <stdlib.h>

int main(){

 int op;

  FILE *file = fopen("gincana.txt", "r"), *file1 = fopen("1.txt", "w"), *file2 = fopen("2.txt", "w"), *file3 = fopen("3.txt", "w"), *file4 = fopen("4.txt", "w"), *file5 = fopen("5.txt", "w");
  char name[40];
  int team;

  if(file == NULL || file1 == NULL || file2 == NULL || file3 == NULL || file4 == NULL || file5 == NULL){
  printf("Erro na leitura do arquivo");
  exit(1);
}

while (fscanf (file, "%s %d\n", name, &team) != EOF)
  {
        if(team == 1){
          fprintf(file1, "%s %d\n", name, team);
        }else if(team == 2){
          fprintf(file2, "%s %d\n", name, team);
        }else if(team == 3){
          fprintf(file3, "%s %d\n", name, team);
        }else if(team == 4){
          fprintf(file4, "%s %d\n", name, team);
        } else if(team == 5){
          fprintf(file5, "%s %d\n", name, team);
        }
        printf ("%s\n%d\n", name, team);
  }



  fclose(file);
  fclose(file1);
  fclose(file2);
  fclose(file3);
  fclose(file4);
  fclose(file5);
  
  return 0;
}
