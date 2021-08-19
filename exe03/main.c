#include <stdio.h>

int main() 
{
   int n1;
   scanf("%i", &n1);
   printf(n1%2==0 && n1!=0 ? "NUMERO PAR" : n1==0? "" : "NUMERO IMPAR");
   printf(n1 > 0 ? " POSITIVO" : n1==0 ? " NUMERO NEUTRO" : " NEGATIVO");
   return 0;
}