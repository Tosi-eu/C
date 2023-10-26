#include <stdio.h>
#include <string.h>

int main(){

  int n, m, xAxis = 0, yAxis = 0, coins = 0, life = 100, count = 0;
  int mat[20][20];
  char mov[20];

  scanf("%d %d", &n, &m);

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
       scanf("%d,", &mat[i][j]);
    }
  }

  setbuf(stdin, NULL);
  fgets(mov, 19, stdin);

 while(count < strlen(mov)){

   if(mov[count] == 'D'){
     xAxis++;
   }else if(mov[count] == 'A'){
     xAxis--;
   }else if(mov[count] == 'W'){
     yAxis--;
   }else if(mov[count] == 'S'){
     yAxis++;
   }

   if(mat[yAxis][xAxis] == 11){
      coins++;
      mat[yAxis][xAxis] = 0;
   }else if(mat[yAxis][xAxis] == 22){
      life -= 5;
   }

   count++;

 }

printf("%d\n", xAxis);
printf("%d\n", yAxis);
printf("%d\n", coins);
printf("%d\n", life);

return 0;

}