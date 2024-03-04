#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);

    int j = a % 10;
    int d = a / 10 % 10;
    int s = a / 100;

    printf("%d", j + d +s);
    return 0;
}
