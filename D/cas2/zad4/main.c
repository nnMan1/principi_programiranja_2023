#include <stdio.h>
#include <stdlib.h>
///napisati program koji stampa sve proste djelioce broja n
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=2;i<=n;i++) {
        if(n % i == 0) {
            int p = 1;

            for(int j=2;j<=sqrt(i);j++)
                if(i % j == 0) {
                    p = 0;
                    break;
                }

            if(p) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
