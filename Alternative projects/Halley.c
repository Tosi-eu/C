#include <stdio.h>

int main()
{
	int ano, vezes;
	scanf("%d", &ano);

	vezes = (int) (ano - 10) / 76;
	vezes++;
	printf("%d", vezes * 76 + 10);

	return 0;
}
