#include <stdio.h>

#define max 10

int main() 
{
   int n, vetor[max], maior, menor;
   scanf("%i", &n);
   for(int i=0; i<n; i++)
   {
	   scanf("%i", &vetor[i]);
	   if (i > 0)
	   {
		   maior = maior > vetor[i] ? maior : vetor[i];
		   menor = menor < vetor[i] ? menor : vetor[i];
	   }
	   else
	   {
		   maior = vetor[i];
		   menor = vetor[i];
	   }
   }
   printf("\nMaior = %i\nMenor: = %i\n", maior, menor);
   return 0;
}