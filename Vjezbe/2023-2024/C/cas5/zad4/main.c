#include <stdio.h>
#include <stdlib.h>

int prestupna(int g) {
    return g % 400 == 0 || g % 4 == 0 && g % 100 != 0;
}

int main()
{
    int d, m, g;
    scanf("%d %d %d", &d, &m, &g);

    int mjesec[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int s = d;
    if(prestupna(g))
        mjesec[1]++;

    for(int i=0;i<m-1;i++)
        s += mjesec[i];

    printf("%d", s);

    return 0;
}
