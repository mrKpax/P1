#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct punto{
    double x, y;
} punto;

void *xmalloc(size_t nbytes)
{
    void *p;
    p = malloc(nbytes);
    if (p == NULL)
    {
        printf("errore!");
        exit(-1);
    }
    return p;
}

punto *creapunto(double xx, double yy)
{
    punto *p = xmalloc(sizeof(punto));
    p->x = xx;
    p->y = yy;
    return p;
}

double distanza(punto *p1, punto *p2)
{
    double dist, xdiff, ydiff;
    xdiff = p1->x - p2->x;
    ydiff = p1->y - p2->y;
    dist = sqrt(xdiff*xdiff + ydiff*ydiff);
    return dist;
}

int main(void)
{
    punto *origine, *centro;
    origine = creapunto(0, 0);
    centro = creapunto (3.1, 4.7);
    
    double dist = distanza(origine, centro);
    
    printf("La distanza è %lf\n", dist);
    
    return 0;
}
