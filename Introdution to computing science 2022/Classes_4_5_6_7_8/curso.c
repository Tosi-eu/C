#include <stdio.h>

int main(){
	
  int cod_curso, alunos_curso_1 = 0, alunos_curso_2 = 0, alunos_curso_3 = 0; // contadores de alunos
  int soma_idade_curso1 = 0, soma_idade_curso2 = 0, soma_idade_curso3 = 0; // somatórios de idade dos cursos
  int idade_curso1, idade_curso2, idade_curso3, curso_velho, velho, novo; //idades e armazeadores dos mais velho e novo;
  int idade_20_25_1 = 0, idade_20_25_2 = 0, idade_20_25_3 = 0, media_curso1 = 0, media_curso2 = 0, media_curso3 = 0, curso_jovem; // armazenadores de idade

  velho = 0;
  curso_velho = 0;
  curso_jovem = 0;
  idade_curso1 = 0;
  idade_curso2 = 0;
  idade_curso3 = 0;
  
do{
		
	scanf("%d", &cod_curso);
		
    if(cod_curso == 1){
      
      alunos_curso_1++;
      scanf("%d", &idade_curso1);
      
      if(idade_curso1 <= 0){
        alunos_curso_1--;
        break;
      }

      if(idade_curso1 > velho){
        velho = idade_curso1;
        curso_velho = cod_curso;
      }

      soma_idade_curso1 += idade_curso1;
      media_curso1 = soma_idade_curso1 / alunos_curso_1; //como garantimos que idade > 0, não precisa do if

      if(idade_curso1 >= 20 && idade_curso1 <= 25){
        idade_20_25_1++;
      }

     if(media_curso2 == 0){
      if(media_curso1 < media_curso3){
        curso_jovem = cod_curso;
      }
    }else if(media_curso3 == 0){
      if(media_curso1 < media_curso2){
        curso_jovem = cod_curso;
      }
    }else 
        if(media_curso1 < media_curso2 && media_curso1 < media_curso3){
          curso_jovem = cod_curso;
        }

    }else if(cod_curso == 2){
      
      alunos_curso_2++;
      scanf("%d", &idade_curso2);

     if(idade_curso2 <= 0){
        alunos_curso_2--;
        break;
      }

     if(idade_curso2 > velho){
        velho = idade_curso2;
        curso_velho = cod_curso;
      }
      
      media_curso2 = soma_idade_curso2 / alunos_curso_2;
      soma_idade_curso2 += idade_curso2;

      if(idade_curso2 >= 20 && idade_curso2 <= 25){
        idade_20_25_2++;
      }

     if(media_curso1 == 0){
      if(media_curso2 < media_curso3){
        curso_jovem = cod_curso;
      }
    }else if(media_curso3 == 0){
      if(media_curso2 < media_curso1){
        curso_jovem = cod_curso;
      }
    }else 
        if(media_curso2 < media_curso3 && media_curso2 < media_curso1){
          curso_jovem = cod_curso;
        }

    }else if(cod_curso == 3){

      alunos_curso_3++;
      scanf("%d", &idade_curso3);
      
     if(idade_curso3 <= 0){
        alunos_curso_3--;
        break;
      }

     if(idade_curso3 > velho){
        velho = idade_curso3;
        curso_velho = cod_curso;
      }

      soma_idade_curso3 += idade_curso3;
      media_curso3 = soma_idade_curso3 / alunos_curso_3;
      
    if(idade_curso3 >= 20 && idade_curso3 <= 25){
        idade_20_25_3++;
      }

    if(media_curso1 == 0){
      if(media_curso3 < media_curso2){
        curso_jovem = cod_curso;
      }
    }else if(media_curso2 == 0){
      if(media_curso3 < media_curso1){
        curso_jovem = cod_curso;
      }
    }else 
        if(media_curso3 < media_curso2 && media_curso3 < media_curso1){
          curso_jovem = cod_curso;
        }
   }else
        break;

 }while(idade_curso1 >= 0 && idade_curso2 >= 0 && idade_curso3 >= 0);

  printf("\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", alunos_curso_1, alunos_curso_2, alunos_curso_3, idade_20_25_1, idade_20_25_2, idade_20_25_3, curso_velho, velho, curso_jovem);
  
	return 0;
}