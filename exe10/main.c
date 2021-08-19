#include <stdio.h>

int main()
{
	int vetor[10];
	for (int i = 0; i < 10; i++)
		scanf("%i", &vetor[i]);
	for (int i = 9; i >= 0; i--)
		printf("%i\n", vetor[i]);
	return 0;
}
