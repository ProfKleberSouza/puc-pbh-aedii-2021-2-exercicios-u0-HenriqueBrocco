#include <stdio.h>

int main() 
{
	int n1, n2, n3, n4;
	scanf("%i %i %i %i", &n1, &n2, &n3, &n4);
	float media;
	media = (n1 + n2 + n3 + n4) / 4.0;
	printf("NOTA = %.1f ", media);
	printf(media >= 6 ? "APROVADO" : "REPROVADO");
	return 0;
}
