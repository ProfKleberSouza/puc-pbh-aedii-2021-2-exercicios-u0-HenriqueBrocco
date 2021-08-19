#include <stdio.h>

int main() 
{
   int T, Vm, R;
   printf("Insira o Tempo, Velocidade Media durante a viagem e o rendimento do veiculo \n");
   scanf("%i %i %i", &T, &Vm, &R);
   printf("\n R = %i\n V = %i\n T = %i\n D = %i\n L = %i\n", R, Vm, T, T*Vm, (T*Vm)/R);
   return 0;
}