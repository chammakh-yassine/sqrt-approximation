#include <stdio.h>
#include <stdlib.h>
main()
{
  double A;   /* donn�e */
  double X;   /* approximation de la racine carr�e de A */
  int N;      /* degr�/pr�cision de l'approximation     */
  int J;      /* degr� de l'approximation courante      */
  do
     {
        printf("Entrer le r�el positif A : ");
       scanf("%lf", &A);
     }while(A<0);
  do
     {
        printf("Entrer le degr� de l'approximation : ");
       scanf("%d", &N);
    }
 while(N<=0 || N>=50);

 for(X=A, J=1 ; J<=N ; J++)
     {
      X = (X + A/X) / 2;
      printf("La %2d%s approximation de la racine carr�e"
             " de %.2f est %.2f\n", J, (J==1)?"�re":"e", A, X);
     }
  return 0;
}
