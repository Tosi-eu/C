#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *prog;
	char ch;
	int conta=0,i=0,dig=0;

	prog=fopen("arquivo2.txt","r");
	while(ch!=EOF)
	 while((ch=getc(prog))!=EOF)
		 printf("%c",ch);
	printf("\n\n");
	 fclose(prog);
	  printf("\n\n");

	  	prog=fopen("arquivo2.txt","r");
	do{
       ch=getc(prog);
       if(ch!=' ')
       {
       conta++;
       i++;}
       else
       i++;
    }while(ch!=EOF);
    printf("Conta :%d\n",conta-1);
	printf("\n\n");
	 fclose(prog);
}
