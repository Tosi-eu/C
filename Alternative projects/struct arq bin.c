#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX_ALUNOS 10

typedef struct
{
    char nome[50];
    int nUSP;
    float media;

} Aluno;

Aluno alunos[MAX_ALUNOS];

void cadastra(){

    char nome[50];
    int nUSP, op;
    float media, p1,p2;

    do{
    printf("* Digite o nome do aluno: \n");
    setbuf(stdin, NULL);
    fgets(nome, 50, stdin);

    printf("\n");

    printf("* Digite a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("\n");

    printf("* Digite a nota da segunda prova: ");
    scanf("%f", &p2);

    printf("* Digite o número usp do aluno: \n");
    scanf("%d", &nUSP);

    printf("\n");

    media = ((p1 + p2)/2);

    for(int i = 0; i < MAX_ALUNOS; i++){
        if(alunos[i].nUSP == 0){

            alunos[i].media = media;
            alunos[i].nUSP = nUSP;
            strcpy(alunos[i].nome, nome);
            break;
        }
    }
    printf("\n Deseja continuar?\n");
    printf("\n");
    printf("* 1 - Cadastrar novo aluno ou 0 - encerrar cadastros! *\n\n");
    scanf("%d", &op);
    getchar();
    }while(op != 0);

    }

void reprovados()
{
    system("cls");

    printf("* LISTA DE ALUNOS REPROVADOS *\n\n");
     for(int i = 0; i < MAX_ALUNOS; i++){
            if(alunos[i].nUSP != 0){
                    if(alunos[i]. media < 5.0){
        printf("\n+------------------------+\n\n");
        printf("- Matrícula número: %d\n", i + 1);
        printf("- Nome do aluno: %s", alunos[i].nome);
        printf("- Nota do aluno: %.2f\n", alunos[i].media);
        printf("- Número USP do aluno: %d\n", alunos[i].nUSP);
        printf("\n+------------------------+\n\n");
            }
        }
    }
}

void aprovados()
{
    system("cls");

    printf("* LISTA DE ALUNOS APROVADOS *\n\n");
     for(int i = 0; i < MAX_ALUNOS; i++){
            if(alunos[i].nUSP != 0){
                    if(alunos[i]. media >= 5.0){
        printf("\n+------------------------+\n\n");
        printf("- Matrícula número: %d\n", i + 1);
        printf("- Nome do aluno: %s", alunos[i].nome);
        printf("- Média do aluno: %.2f\n", alunos[i].media);
        printf("- Número USP do aluno: %d\n", alunos[i].nUSP);
        printf("\n+------------------------+\n\n");
            }
        }
    }

}

void pesquisar()
{
    char nome[50];
    int op;

    system("cls");

    printf("\n* Digite o nome do aluno: \n");
    setbuf(stdin, NULL);
    fgets(nome, 50, stdin);
    do{
    for(int i = 0; i < MAX_ALUNOS; i++){
        if(strstr(alunos[i].nome, nome) != NULL){

        printf("\n+------------------------+\n\n");
        printf("- Matrícula número: %d\n", i + 1);
        printf("- Nome do aluno: %s", alunos[i].nome);
        printf("- Média do aluno: %.2f\n", alunos[i].media);
        printf("- Número USP do aluno: %d\n", alunos[i].nUSP);
        printf("\n+------------------------+\n\n");
        }
    }
    printf("* Deseja fazer uma nova pesquisa? \n");
    printf("* 1 - Sim // 0 - Não");
    scanf("%d", &op);

}while(op != 0);
}

void listar()
{

    system("cls");
    printf("\n* LISTA DE ALUNOS \n");

    for(int i = 0; i < MAX_ALUNOS; i++){
            if(alunos[i].nUSP != 0){
        printf("\n+------------------------+\n\n");
        printf("- Matrícula número: %d\n", i + 1);
        printf("- Nome do aluno: %s", alunos[i].nome);
        printf("- Média do aluno: %.2f\n", alunos[i].media);
        printf("- Número USP do aluno: %d\n", alunos[i].nUSP);
        printf("\n+------------------------+\n\n");
        }
    }
}

void salva(){

    Aluno *todosA;

    FILE *fp = fopen("alunos.bin", "wb+");

    if (fp == NULL){
        printf("* Erro ao salvar...");
        return;
    }else
        fwrite(todosA, sizeof(Aluno), 10, fp);
        fseek(fp, 0, SEEK_SET);
        printf("\n* Arquivado com sucesso!\n\n");

    fclose(fp);
}

void menu()
{
    system("cls");
    int op;
    do
    {
        printf("\n1 - Cadastrar aluno\n2 - Remover aluno");
        printf("\n3 - Alunos reprovados\n4 - Alunos aprovados");
        printf("\n5 - Pesquisar aluno\n6 - Listar alunos");
        printf("\n7 - Salvar e sair\n\n");
        scanf("%d", &op);
        switch(op){

    case 1:
        cadastra();
        break;

    case 2:
        remover();
        break;

    case 3:
        reprovados();
        break;

    case 4:
        aprovados();
        break;

    case 5:
        pesquisar();
        break;

    case 6:
        listar();
        break;

    default:
        salva();
        exit(1);


        }
    }while (op != 0);
}

void remover()
{
    int matricula;
    listar();
    printf("* Digite o número de matrícula do aluno desejado: \n");
    scanf("%d", &matricula);
    --matricula;
    alunos[matricula].nUSP = 0;
    printf("\n* O aluno foi excluído com sucesso! *\n");
    system("cls");
}

int main()
{
    setlocale(LC_ALL,"");
    menu();
    return 0;
}

