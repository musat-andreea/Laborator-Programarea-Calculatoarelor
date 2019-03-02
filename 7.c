#include <stdio.h>
#include <stdlib.h>

typedef struct data_nasterii
    {
        int zi,luna,an;
    } DATA;

typedef struct persoana
    {
        char nume[30];
        char prenume[30];
        char CNP[15];
        DATA d;
    } PERS;

int main()
{
    int n, i;
    PERS p[13];
    printf("Introduceti numarul de persoane introduse:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Introduceti numele persoanei:\n");
        scanf("%s",&p[i].nume);
        printf("Introduceti prenumele persoanei:\n");
        scanf("%s",&p[i].prenume);
        printf("Introduceti CNP-ul persoanei:\n");
        scanf("%s",&p[i].CNP);

        p[i].d.an = p[i].CNP[1] - '0';
        p[i].d.an = p[i].d.an * 10 + (p[i].CNP[2] - '0');
        printf("Anul nasterii este: %d\n",p[i].d.an);

        p[i].d.luna = p[i].CNP[3] - '0';
        p[i].d.luna = p[i].d.luna * 10 + (p[i].CNP[4] - '0');
        printf("Luna nasterii este: %d\n",p[i].d.luna);

        p[i].d.zi = p[i].CNP[5] - '0';
        p[i].d.zi = p[i].d.zi *10 + (p[i].CNP[6] - '0');
        printf("Ziua nasterii este:%d\n",p[i].d.zi);
    }

    //a

    int j,aux1,aux2,aux3;
    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
     {
        if(p[i].d.an<p[j].d.an)
        {
        aux1=p[i].d.an;
        p[i].d.an=p[j].d.an;
        p[j].d.an=aux1;
        }
    }
    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
    {
        if(p[i].d.an==p[j].d.an && p[i].d.luna<p[j].d.luna)
        {
            aux2=p[i].d.luna;
            p[i].d.luna=p[j].d.luna;
            p[j].d.luna=aux2;
        }
    }
    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
    {
        if(p[i].d.luna==p[j].d.luna && p[i].d.zi<p[j].d.zi)
        {
            aux3=p[i].d.luna;
            p[i].d.luna=p[j].d.luna;
            p[j].d.luna=aux3;
        }
    }
    for(i=0;i<n;i++)
        printf("Nume: %s, Data Nasterii: %d/%d/%d\n",p[i].nume, p[i].d.zi,p[i].d.luna,p[i].d.an);

       //b

    char aux4,aux5;
    for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
    {
        if(strcmp(p[i].nume,p[j].nume)>0)
        {
            strcpy(aux4,p[i].nume);
            strcpy(p[i].nume,p[j].nume);
            strcpy(p[j].nume,aux4);
        }
    }
//printf ("Ajunge");
for(i=0; i<n-1; i++)
    for(j=i+1; j<n; j++)
    {
        if(strcmp(p[i].nume,p[j].nume)==0 && (strcmp(p[i].prenume,p[j].prenume)>0) )
        {
            strcpy(aux5,p[i].prenume);
            strcpy(p[i].prenume,p[j].prenume);
            strcpy(p[j].prenume,aux5);
        }
    }
for(i=0; i<n; i++)
    printf("nume:%s\t prenume:%s\n",p[i].nume,p[i].prenume);
return 0;
}
