#include <stdio.h>
#include <stdlib.h>

int NZD(int a, int b) {
    if(b == 0)
        return a;

    return NZD(b, a % b);
}

int fib(int n) {
    if(n == 0 || n == 1)
        return n;

    return fib(n-1) + fib(n-2);
}

void HanojskeKule(char f, char t, int n) {
    if(n == 1) {
        printf("%c->%c\n", f, t);
        return;
    }

    char s = 'A';

    if(f != 'C' && t != 'C')
        s = 'C';

    if(f != 'B' && t != 'B')
        s = 'B';

    HanojskeKule(f, s, n-1);
    HanojskeKule(f, t, 1);
    HanojskeKule(s, t, n-1);
}

int main()
{
    HanojskeKule('A', 'B', 4);
    return 0;
}
