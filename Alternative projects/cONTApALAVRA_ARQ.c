#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

int Comparacao(char*,char*);

int main()
{
    FILE *fp;
    char nome[10],*str,palavra[20],ch;
    int contar=0;

    do
     {
      if((fp=fopen("arquivo.txt","r"))==NULL)
        printf("\nImpossivel aceder ficheiro\n");
     }while(fp==NULL);

    while((ch=fgetc(fp))!=EOF)
     {str=(char*)realloc(str,++contar*sizeof(char));
      str[contar-1]=ch;
     }
     str[contar]='\0';

    gets(str);

    printf("\n%d\n",Comparacao(str,palavra));
    free(str);
    return 0;
}


int Comparacao(char *str,char *palavra_cp)
{
    int contar=0,i,comparador=0,j;
    char *palavra=NULL, ch;

  for(j=0;j<strlen(palavra_cp);j++)//colocar a palavra que queremos que seja comparada em maiusculas
      {ch=toupper(palavra_cp[j]);
       palavra_cp[j]=ch;
      }

    for(i=0;i<30;i++)
     {if(str[i]==' ')
       {palavra=(char*)realloc(palavra,contar++*sizeof(char));
        palavra[contar-1]='\0';

        if(strstr(palavra,palavra_cp) == 0)////não diferencia na mesma
          ++comparador;
        contar=0;
       }
        else
      {palavra=(char*)realloc(palavra,(++contar)*sizeof(char));
       palavra[contar-1]=str[i];
      }
     }

     free(palavra);

     return comparador;
}
