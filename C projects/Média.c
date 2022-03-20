#include<stdio.h>
#include<stdlib.h>
int main()
{
  float nota1, nota2, nota3, media;
  char frase[10] = "aprovado!";

  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);

  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);

    printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("Media do aluno = %.1f\n",media);
{
  if(media>=5)
     printf("%s\n", "aprovado!");

     else if(media<5)
        printf("%s\n", "reprovado!");
}

  system("pause");
  return 0;
}
