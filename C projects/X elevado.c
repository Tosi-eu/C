#include <stdio.h>
#include <stdlib.h>

int main()
{
int base, exponent, ancilary, result;
scanf("%d %d", &base, &exponent);

result = 1;
{
for(ancilary = 1; ancilary <= exponent; ancilary++)
    result = base*result;

 printf("%d ",result);
}

return 0;
system("Pause");
}
