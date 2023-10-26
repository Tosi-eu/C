#include <stdio.h>

int main(){

int cat_adj, cat_op, hip;

scanf("%d %d %d", &cat_adj, &cat_op, &hip);

if(cat_adj*cat_adj + cat_op*cat_op == hip*hip){
    printf("Correct\n");
}else
    printf("Incorrect\n");

return 0;
}
