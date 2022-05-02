#include <stdio.h>

int main(){

char A[100];
char B[100];

int i,j;

gets(A);
gets(B);

for(i = 0; A[i]!='\0';i++){
    if(B[0]==A[i]){
        for(j = 1;B[j]!='\0';j++){
            if(B[j]!=A[i+j])
                break;
        }
        if(B[j]=='\0'){
            printf("Found");
        }
    }
}

return 0;
}