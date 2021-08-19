#include <stdio.h>

int main() 
{
	int n1, n2, n3;
	scanf("%i %i %i", &n1, &n2, &n3);
	if ((n1 < n2 + n3) && (n2 < n1 + n3) && (n3 < n1 + n2))
	{
		printf(n1 == n2 ? n2 == n3 ? "TRIANGULO EQUILATERO" : "TRIANGULO ISOSCELES" : n2 == n3 ? "TRIANGULO ISOSCELES" : "TRIANGULO ESCALENO");
	}
	else
		printf("\nOS LADOS NAO FORMAM UM TRIANGULO");
	return 0;
}
