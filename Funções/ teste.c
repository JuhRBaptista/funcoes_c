#include <stdio.h>

int main()
{
   int número, soma = 0, contador;

    printf ("Insira um número: ");
    scanf ("%d", &número);
   
   for (contador = 1; contador < número; contador ++)
   {
      if ( número % contador == 0)
      {
        soma = soma + contador;
      }
      printf ("\n%d", soma);
   }
   return (0);
}