#include <stdio.h>
#include <stdlib.h>

int main()
{

int v[10], aux, i, x;


for(i = 0; i < 10; i++){
    scanf("%d", &v[i]);
}

for(i = 0; i < 10; i++){
    for(x = i + 1; x < 10; x++){
        if(v[i] > v[x]){
            aux = v[i];
            v[i] = v[x];
            v[x] = aux;
        }
    }
}

for(i = 0; i < 10; i++)
    printf("%d ",v[i]);

return 0;
system("pause");
}
