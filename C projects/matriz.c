#include <stdio.h>

int main()
{
    int m[5][5],i,j,menor,maior;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
           scanf("%d",&m[i][j]);}

               menor=m[0][0];
               maior=m[0][0];

   for(i=0;i<5;i++){
        for(j = 0; j < 5; j++){
                if(m[i][j]<menor){
            menor=m[i][j];
                }
           if(m[i][j]>maior){
            maior=m[i][j];
           }
        }
   }
    printf("%d %d", menor, maior);

return 0;
}
