#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //Initialisation du générateur de nombre aléatoire
    /*srand(time(NULL));
    int random, i;
    for(i=0;i<100;i++)
    {
        random = (rand() % (10-1+1)) + 1; //nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
        printf("random = %d\n", random);
    }
    */
    int secondes, j, h, m,s;
    secondes = 7243;
    j=secondes/86400; //1 jour = 24*60*60 = 86400 secondes
    h=(secondes%86400)/3600; //1h=3600s
    m=((secondes%86400)%3600)/60;
    s=((secondes%86400)%3600)%60;
    printf("%d secondes = %d jours %d heures %d minutes %d secondes", secondes, j,h,m,s);

    return 0;
}
