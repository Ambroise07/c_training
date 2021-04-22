#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**typedef struct gaming
{

   int life;
   int puissance;
   char nom[255];

} gamer;

void modified_gamer(gamer *g)
{
    strcpy(g->nom, "Yourareki");
}
*/

int main()
{   
    /* int tableau[5][3][2] = {};
    for(int i = 0; i < 5; i++)
        for(int j=0;j<3; j++)
            for(int q = 0;q < 2;q++)  
                {   
                    printf("[%d]  [%d]  [%d]  [%d] \n", i, j , q, tableau[i][j][q]);
                }
               
     int tab[4][3][2] = 
     {
         {
             {45,78},    {78,96},     {79,36}
         }, 

         {
             {78,69},    {69,98},     {98,36}
         },
              
         {
             {55,79},    {79,56},     {80,36}
         }, 

         {
             {36,59},    {60,86},     {61,36}
         }
     };

         for(int i = 0; i < 4; i++)
            for(int j=0;j<3; j++)
                for(int q = 0;q < 2;q++)
                    printf("Element d'indice : [%d] [%d] [%d] Tableau de donné --> [%d] \n ",i, j, q , tab[i][j][q]);
                     */

        /* char nom[9] = "Ambroise";
        char prenom[256];
        printf("Ton nom de base est : %s \n", nom);

        printf("voulez vous changer de nom ? ");
        scanf("%s", prenom);

        strcpy(nom, prenom);
        strcat(nom, prenom);
        int p = strlen(nom);

        printf("Ton nouveau nom est : %s\n",nom);

        gamer gamer1 = {45,669,"Pitolopiur"};

        printf("%s\n", gamer1.nom);

        modified_gamer(&gamer1);

        printf("%s\n", gamer1.nom);*/


    int boul = 0;
    int *boult = NULL;

    printf("combien il y a til ?? dans le paniere : ?");
    scanf("%d",&boul);

    boult =  malloc(sizeof(int)*boul);
    if(boult == NULL)
        exit(1);
    
    free(boult);

    return 0;
}