#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    do {
        printf("%d ", i);
    } while(++i < n);
    return 0;
}
