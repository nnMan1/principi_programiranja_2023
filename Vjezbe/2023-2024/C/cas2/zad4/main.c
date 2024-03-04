#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
        printf("Trougao postoji");
    else
        printf("Trougao ne postoji");

    return 0;
}
