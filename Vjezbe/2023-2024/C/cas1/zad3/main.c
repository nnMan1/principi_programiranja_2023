#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);

    int b = a;
    int c = 0;

    while(b != 0) {
        c = a % 10;
        a = a / 10;
        b = b / 100;
    }

    printf("%d", c);
    return 0;
}
