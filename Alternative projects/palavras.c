#include <stdio.h>
#include <string.h>

int P_F (char p[], char f[]);
int count(char p[]);

int main(){

    FILE *arq;
    char palavra[100], frase[100];

    if((arq=fopen("arquivo2.txt","r+"))== NULL)
        return 0;

    char Espaco[300] = " ";

    char Linha[300];

    while (!feof(arq)){

        fgets(Linha, 299, arq);

        Linha[strcspn(Linha, "\n")] = 0;

        strcat(Espaco, Linha);

        strcpy(frase,Espaco);

        strcat(frase, " ");

        strcat(Espaco, " ");

    }

    setbuf(stdin, 0);

    fgets(palavra,99,stdin);

    palavra[strcspn(palavra, "\n")] = 0;

    printf("%d\n",(P_F(frase,palavra)));

    fclose(arq);

    return 0;
}

int contador1(char p[]){
    int count = 0;

    while(1){
        if(p[count] == '\0')
            return count;
        count++;
    }
}

int P_F (char p[], char f[]){
    int count2 = 0;
    for(int i = 0; i <= contador1(p)- contador1(f);i++){
        for(int j = 0; j <= contador1(f); j++){
            if(f[j] == '\0'){
                count2++;
            }
            if(f[j] != p[i+j])
                break;
        }
    }
    return count2;
}
