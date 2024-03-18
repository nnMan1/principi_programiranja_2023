#include <stdio.h>
#include <stdlib.h>
///stampati sve djelioce broja n
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
        if(n % i == 0)
            printf("%d ", i);

    return 0;
}
