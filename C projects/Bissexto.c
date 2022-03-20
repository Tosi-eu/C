#include <stdio.h>
int main()
{
    int year1, year2;
    scanf("%d %d", &year1, &year2);

    for (int i = year1; i <= year2; i++)
        if((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
            printf("%d ",i);

    printf("\n");
    return 0;
}
