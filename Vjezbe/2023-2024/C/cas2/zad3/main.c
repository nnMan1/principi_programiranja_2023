#include <stdio.h>
#include <stdlib.h>

int tmp;

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    if(a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    if (b > c) {
        int tmp = b;
        b = c;
        c = tmp;
    }

    printf("%d %d %d", a, b, c);

    return 0;
}
