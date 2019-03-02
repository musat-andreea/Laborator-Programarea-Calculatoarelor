#include <stdio.h>
#include <stdlib.h>

typedef struct moment
    {
        int ora;
        int minut;
        int secunda;
    }MOMENT;


void main(void)
{
    MOMENT z1, z2,sum;
    printf("Introduceti primul moment al zilei\n");
    printf("ora1:\n");
    scanf("%d",&z1.ora);
    printf("minut1:\n");
    scanf("%d",&z1.minut);
    printf("secunda1:\n");
    scanf("%d",&z1.secunda);

    printf("Introduceti al doilea  moment al zilei\n");
    printf("ora2:\n");
    scanf("%d",&z2.ora);
    printf("minut2:\n");
    scanf("%d",&z2.minut);
    printf("secunda2:\n");
    scanf("%d",&z2.secunda);

    sum.secunda=z1.secunda+z2.secunda;
    sum.minut=z1.minut+z2.minut;
    sum.ora=z1.ora+z2.ora;
    if(sum.secunda>60)
    {
        sum.minut++;
        sum.secunda=sum.secunda-60;
    }
    if(sum.minut>60)
    {
        sum.ora++;
        sum.minut=sum.minut-60;
    }

    printf("suma celor doua momente de timp este:");
    printf("%d %d %d",sum.ora,sum.minut,sum.secunda);
}
