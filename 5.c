#include <stdio.h>
#include <stdlib.h>

typedef struct fig_geom
    {
        char nume;
        int raza;
        int lungime;
        int latime;
    } FIG_GEOM;

void main(void)
{
    FIG_GEOM f;
    //a
    printf("Introduceti caracterul pentru numele figurii:\n");
    scanf("%c",&f.nume);
    switch(f.nume)
    {
        case 'c': printf("cerc\n"); break;
        case 'p': printf("patrat\n"); break;
        case 'd': printf("dreptunghi\n"); break;
        default : printf("caracterul introdus nu este recunoscut\n");

    }
    //b si c
    float aria,perimetrul,lungimea;
    if(f.nume=='c')
    {
        printf("introduceti raza:\n");
        scanf("%d",&f.raza);
        printf("Raza cercului este egala cu %d\n",f.raza);
        aria=(3.14)*f.raza*f.raza;
        lungimea=2*(3.14)*f.raza;
        printf("Lungimea si aria cercului sunt:%f si %f\n",lungimea,aria);

    }
    if(f.nume=='p')
    {
        printf("introduceti lungimea laturii patratului:\n");
        scanf("%d",&f.lungime);
        printf("Lungimea si latimea patratului sunt %d si %d\n",f.lungime,f.lungime);
        aria=f.lungime*f.lungime;
        perimetrul=f.lungime*4;
        printf("Aria si perimetrul patratului sunt: %f si %f",aria,perimetrul);

    }
    if(f.nume=='d')
    {
        printf("Introduceti dimensiunile dreptunghiului:\n");
        scanf("%d",&f.lungime);
        scanf("%d",&f.latime);
        printf("Lungimea si latimea dreptunghiului sunt:%d si %d\n",f.lungime, f.latime);
        aria=f.lungime*f.latime;
        perimetrul=2*f.lungime+2*f.latime;
        printf("Aria si perimetrul dreptunghiului sunt:%f si %f",aria,perimetrul);

    }
}
