//Usar dos ciclos for anidados para imprimir un patr ́on en forma de tabla con asteriscos que indique si i divide a j o j divide a i. Usar un argumento entero n para el tama ̃no de la tabla.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 int n = atoi(argv[1]);

 for (int j = 0; j < n+1; j++) {
   for (int i = 1; i < n+2; i++) {
     if (j==0 && i<=n) {
       printf("%d\t", i);
     }
     if (j>0 && i<=n) {
       if (j%i == 0 || i%j ==0) {
         printf("+\t");
       }
       else printf("\t");
     }

     if (i>n && j>0)   {
       printf("%d\t", j);
     }
   }
   printf("\n");
 }


  return 0;
}
