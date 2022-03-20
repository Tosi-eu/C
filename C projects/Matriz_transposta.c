#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 2

int main() {
	int matriz[L][C];
	int i, j;

	for(i = 0; i < L; i++) {
		for(j = 0; j < C; j++) {
			scanf("%d",&matriz[i][j]);
		}
	}

	printf("\n");

	// matriz //
	for(i = 0; i < L; i++) {
		for(j = 0; j < C; j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	// matriz transposta //
	for(i = 0; i < L; i++) {
		for(j = 0; j < C; j++) {
			printf("%d ", matriz[j][i]);
		}
		printf("\n");
	}

	printf("\n");

	return 0;
	system("Pause");
}
