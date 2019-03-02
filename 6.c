#include <stdio.h>
#include <stdlib.h>

typedef struct student
    {
        char nume[100];
        int nota1;
        int nota2;
        int nota3;

    } STUDENT;

int main()
{
    STUDENT studenti[6];
    int i, n,poz=-1;
    //a
    printf("Introduceti numarul de studenti\n");
    scanf("%d",&n);
    printf("Introduceti informatii despre fiecare student:\n");
    for(i=0;i<n;i++)
    {
        printf("Introduceti numele studentului:\n");
        scanf("%s",&studenti[i].nume);
        printf("Introduceti prima nota:\n");
        scanf("%d",&studenti[i].nota1);
        printf("Introduceti a doua nota:\n");
        scanf("%d",&studenti[i].nota2);
        printf("Introduceti a treia nota:\n");
        scanf("%d",&studenti[i].nota3);
    }
    //b
    char nume[20];
    printf("Introduceti un nume:\n");
    scanf("%s",&nume);
    for(i=0;i<n;i++)
    {
        if(!strcmp(studenti[i].nume,nume))
                poz=i;/*break;*/
    }
    if(poz!=-1)
    printf("numele si notele studentului sunt: %s %d %d %d\n",studenti[poz].nume,studenti[poz].nota1,studenti[poz].nota2,studenti[poz].nota3);
    else printf("studentul %s nu se afla in structura\n",nume);
    //c
    int materie,max1=0,max2=0,max3=0,p1=0,p2=0,p3=0;
    printf("Introduceti materia 1 2 sau 3\n");
    scanf("%d",&materie);
    if(materie==1)
    {
        for(i=0;i<n;i++)
        {
            if(studenti[i].nota1>max1)
            {
                max1=studenti[i].nota1;
                p1=i;
            }
        }
        printf("cel mai bun student este %s\n",studenti[p1].nume);
    }




    if(materie==2)
    {
        for(i=0;i<n;i++)
        {
            if(studenti[i].nota2>max2)
            {
                max2=studenti[i].nota2;
                p2=i;
            }
        }
        printf("cel mai bun student este %s\n",studenti[p2].nume);
    }


    if(materie==3)
    {
        for(i=0;i<n;i++)
        {
            if(studenti[i].nota3>max3)
            {
                max3=studenti[i].nota3;
                p3=i;
            }
        }

        int nr=0,j;
        char aux;
        for (i=0;i<n;i++)
            if (studenti[i].nota3 == max3)
                nr++;

        if(nr==1)
            printf("cel mai bun student este %s\n",studenti[p3].nume);
        if (nr > 1)
        {
            for (i=0;i<n-1;i++)
                for (j=i+1;j<n;j++)
                    if (strcmp(studenti[i].nume, studenti[j].nume) > 0)
                    {
                        strcpy(aux,studenti[i].nume);
                        strcpy(studenti[i].nume,studenti[j].nume);
                        strcpy(studenti[j].nume,aux);

                    }
        }
    }
        for(i=0;i<n;i++)
            printf("%s\n",studenti[i].nume);


return 0;
}
