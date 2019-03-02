#include <stdio.h>
#include <stdlib.h>


typedef struct informatie
{
    char firma[100];
    char produs[100];
    int cantitate;
} INFO;

void main(void)
{
    char produs[100];
    int n;
    INFO inf[6];

    printf("introduceti numarul de firme pe care vreti sa le introduceti. Maxim 6\n");
    scanf("%d",&n);

    int i,max=0,poz=0,c=0;
    printf("Introduceti datele despre firma:\n");
    for (i=0;i<n;i++)
    {
        printf("Introduceti  numele firmei\n");
        fflush(stdin);
        gets(inf[i].firma);
        fflush(stdin);
        printf("Introduceti produsul firmei:\n");
        gets(inf[i].produs);
        fflush(stdin);
        printf("Introduceti numarul de produse:\n");
        scanf("%d",&inf[i].cantitate);
        fflush(stdin);
    }
    printf("Introduceti un produs din datele firmei:");
    gets(produs);
    fflush(stdin);
    for(i=0; i<n; i++)
    {
        if(!strcmp(inf[i].produs,produs))
            c=c+inf[i].cantitate;
    }
    for(i=0;i<n;i++)
    {
        if(!strcmp(inf[i].produs,produs))
            if(inf[i].cantitate > max){
                max=inf[i].cantitate;
                poz = i;
            }
    }
    puts(inf[poz].firma);
    printf("numarul total de produse egal cu %d", c);
return 0;
}
