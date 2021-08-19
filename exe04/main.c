#include <stdio.h>

int main() 
{
   int n1, n2, n3;
   scanf("%i %i %i", &n1, &n2, &n3);
   printf("MENOR = %i\nMAIOR = %i\n", n1 < n2 ? n1 < n3 ? n1 : n3 < n2 ? n3 : n2 : n2 < n3 ? n2 : n3, n1>n2 ? n1 > n3 ? n1 : n3 > n2 ? n3 : n2 : n2>n3 ? n2 : n3);
   return 0;
}