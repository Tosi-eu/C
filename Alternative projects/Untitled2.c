#include <stdio.h>
#include <string.h>

struct func{

char nome[4];
int numero[4];

};

int buscaN(struct func *v, int n, int elem){
    for(int i = 0; i < n; i++){
        if(elem == v[i].numero)
            return i;
    }
    return 0;
}

int buscaM(struct func *v, int n, char* elem){
    for(int i = 0; i < n; i++){
        if(strcmp(elem, v[i].nome == 0))
            return i;
    }
    return -1;
}



int main(){

    struct func f;
    int i;

    printf("Funcionario: ");
    gets(f.funcionarios);

return 0;

}
