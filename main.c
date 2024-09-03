#include <stdio.h>
main()
{
    void fusion(int tableau[],int deb1,int fin1,int fin2)
        {
        int *table1;
        int deb2=fin1+1;
        int compt1=deb1;
        int compt2=deb2;
        int i;

        table1=malloc((fin1-deb1+1)*sizeof(int));

        //on recopie les �l�ments du d�but du tableau
        for(i=deb1;i<=fin1;i++)
            {
            table1[i-deb1]=tableau[i];
            }

        for(i=deb1;i<=fin2;i++)
            {
            if (compt1==deb2) //c'est que tous les �l�ments du premier tableau ont �t� utilis�s
                {
                break; //tous les �l�ments ont donc �t� class�s
                }
            else if (compt2==(fin2+1)) //c'est que tous les �l�ments du second tableau ont �t� utilis�s
                {
                tableau[i]=table1[compt1-deb1]; //on ajoute les �l�ments restants du premier tableau
                compt1++;
                }
            else if (table1[compt1-deb1]<tableau[compt2])
                {
                tableau[i]=table1[compt1-deb1]; //on ajoute un �l�ment du premier tableau
                compt1++;
                }
            else
                {
                tableau[i]=tableau[compt2]; //on ajoute un �l�ment du second tableau
                compt2++;
                }
            }
        free(table1);
        }


void tri_fusion_bis(int tableau[],int deb,int fin)
        {
        if (deb!=fin)
            {
            int milieu=(fin+deb)/2;
            tri_fusion_bis(tableau,deb,milieu);
            tri_fusion_bis(tableau,milieu+1,fin);
            fusion(tableau,deb,milieu,fin);
            }
        }

void tri_fusion(int tableau[],int longueur)
     {
     if (longueur>0)
            {
            tri_fusion_bis(tableau,0,longueur-1);
            }
     }
}

