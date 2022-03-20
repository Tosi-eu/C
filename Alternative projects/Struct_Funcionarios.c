#include <stdio.h>
#include <string.h>
#define tam 2

struct func{

char cargo[100];
char nome[100];
int Nfunc[100];
int idade;
int telefone;
float salario;
};

void exibir(struct func dados){
       printf("\n%s", dados.cargo);
       printf("\n%s", dados.nome);
       printf("\n%d", dados.Nfunc);
       printf("\n%d", dados.idade);
       printf("\n%d", dados.telefone);
       printf("\n%.2f", dados.salario);
}

int buscaNfunc(struct func *v, int n, int elem){
    for(int i = 0; i < n; i++){
        if(elem == v[i].Nfunc)
            return i;
    }
    return 0;
}

int buscaNome(struct func *v, int n, char* elem){
    for(int i = 0; i < n; i++){
        if(strcmp(elem, v[i].nome == 0))
            return i;
    }
    return -1;
}

int main()
{
    struct func v[tam];

    for(int i = 0; i < tam; i++){

    fflush(stdin);
    gets(v[i].cargo);

    fflush(stdin);
    gets(v[i].nome);

    fflush(stdin);
    scanf("%d", &v[i].Nfunc);

    fflush(stdin);
    scanf("%d", &v[i].idade);

    fflush(stdin);
    scanf("%d", &v[i].telefone);

    fflush(stdin);
    scanf("%.2f", &v[i].salario);

    fflush(stdin);
    printf("\n");
}

for(int i = 0; i < tam; i++){
        exibir(v[i]);
}

return 0;
}
