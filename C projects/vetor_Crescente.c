#include <stdio.h>

int main()
{
int vet[10];
int i, j, temp;

//* Leitura do Vetor */
for (i = 0; i<10; i++)
{
scanf("%d",&vet[i]);
}

for (i=0;i<10; i++)
for(j=i+1;j<10;j++)
{
if (vet[i]>vet[j])
{
temp=vet[i];
vet[i]=vet[j];
vet[j]=temp;
 }
}

for(i=0;i<10;i++){
    printf(" %d",vet[i]);}

return 0;
}
