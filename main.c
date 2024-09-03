#include <stdio.h>
#include <stdlib.h>
main()
{
  double A;   /* donnée */
  double X;   /* approximation de la racine carrée de A */
  int N;      /* degré/précision de l'approximation     */
  int J;      /* degré de l'approximation courante      */
  do
     {
        printf("Entrer le réel positif A : ");
       scanf("%lf", &A);
     }while(A<0);
  do
     {
        printf("Entrer le degré de l'approximation : ");
       scanf("%d", &N);
    }
 while(N<=0 || N>=50);

 for(X=A, J=1 ; J<=N ; J++)
     {
      X = (X + A/X) / 2;
      printf("La %2d%s approximation de la racine carrée"
             " de %.2f est %.2f\n", J, (J==1)?"ère":"e", A, X);
     }
  return 0;
}
