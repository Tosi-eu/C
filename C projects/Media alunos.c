#include <stdio.h>
#include <stdlib.h>

//--Média = 70% das duas maiores notas de prova mais 30% das notas de trab--//

int main()
{
    float p1, p2, p3, t1, t2;

//------------------digite a nota das provas e trabalhos--------------------//

    scanf("%f %f %f %f %f", &p1, &p2, &p3, &t1, &t2);

//--------------------------------------------------------------------------//

    if(p1 <= p2 && p1 <= p3)
        printf("%.2f", (((p2+p3)/2)*0.7)+(((t1+t2)/2)*0.3));

    else if(p2 <= p1 && p2 <= p3)
        printf("%.2f", (((p1+p3)/2)*0.7)+(((t1+t2)/2)*0.3));

    else if(p3 <= p1 && p3 <= p2)
        printf("%.2f", ((p2+p1)/2*0.7)+(((t1+t2)/2)*0.3));

//--------------------------------------------------------------------------//


printf("\n");
return 0;
system("pause)");
}
