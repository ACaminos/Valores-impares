#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

int V[5];
int N,C;

printf("A continuación le solicitaremos que ingrese 5 valores impares");

for ( c=0;c<5;c++)
{
  do
    {
      printf("Ingrese un valor impar");
      scanf("%d",&N);
      if(n%2 == 1)
        {
          V[C] = N;
        }
      else
        {
          printf("Usted ha ingresado un número par");
        }
     }
   while (N%2 != 1);
}

printf("Los valores ingresados son:\t%d,\t%d,\t%d,\t%d,\t%d",V[0],V[1],V[2],V[3],V[4]);

return 0;

}
