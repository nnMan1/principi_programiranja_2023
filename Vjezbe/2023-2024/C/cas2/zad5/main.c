#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i=2;

    while(i<sqrt(n)) {
        if(n % i == 0) {
            printf("Broj je slozen");
            return 0;
        }
        i++;
    }

    printf("Broj je prost");
    return 0;
}
