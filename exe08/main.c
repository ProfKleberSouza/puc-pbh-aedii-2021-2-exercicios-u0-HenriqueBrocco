#include <stdio.h>

int main() 
{
   int n1=1;
   
   while (n1 != 0)
   {
	   scanf("%i", &n1);
	   printf(n1<0? "NEGATIVO\n" : n1>0? "POSITIVO\n": "");
   }
   return 0;
}