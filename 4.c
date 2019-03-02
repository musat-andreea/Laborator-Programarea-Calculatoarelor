#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ora, minut, secunda;
} TIMP;

typedef struct {
    int zi, luna, an;
    TIMP moment;
} DATA;

int main()
{
    DATA d;
    //d.zi;
    //d.moment.ora;
    printf("Introduceti informatii pt o variabila de tip structura data:\n");
    printf("Introduceti ziua:\n");
    scanf("%d",&d.zi);
    printf("Introduceti luna:\n");
    scanf("%d",&d.luna);

    printf("Introduceti anul:\n");
    scanf("%d",&d.an);

    printf("Introduceti momentul de timp:\n");
    printf("Introduceti ora:");
    scanf("%d",&d.moment.ora);

    printf("Introduceti minutul:");
    scanf("%d",&d.moment.minut);

    printf("Introduceti secunda:\n");
    scanf("%d",&d.moment.secunda);

    printf("ziua: %d.%d.%d la momentul de timp %d.%d.%d",d.zi,d.luna,d.an,d.moment.ora,d.moment.minut,d.moment.secunda);

}
