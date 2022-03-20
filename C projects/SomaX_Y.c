#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, total = 0;
    scanf("%d %d", &x, &y);
    if(x > y){
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = x; i <= y; i++)
        total += i;

    printf("%d\n", total);

    return 0;
    system("pause");
}
