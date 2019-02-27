#include <stdio.h>
#include <stdlib.h>

    typedef struct nr_complex
            {
                int re;
                int im;
            } NR;

    void main (void)
    {
        NR z1, z2, rezad, rezsc;
        printf("Introduceti primul numar:\n");
        scanf("%d %d",&z1.re,&z1.im);
        printf("introduceti al doilea numar:\n");
        scanf("%d %d",&z2.re,&z2.im);
        rezad.re=z1.re+z2.re;
        rezad.im=z1.im+z2.im;
        rezsc.re=z1.re-z2.re;
        rezsc.im=z1.im-z2.im;
        printf("suma este %d+%d *i\n",rezad.re,rezad.im);
        printf("diferenta este %d %d *i",rezsc.re,rezsc.im);

    }
