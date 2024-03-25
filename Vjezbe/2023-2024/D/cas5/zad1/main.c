#include <stdio.h>
#include <stdlib.h>

void hanojske_kule(char f, char t, int n) {

    if(n == 1) {
        printf("%c -> %c\n", f, t);
        return;
    }

    char tmp = 'A';

    if(f != 'B' && t != 'B')
        tmp = 'B';

    if(f != 'C' && t != 'C')
        tmp = 'C';

    hanojske_kule(f, tmp, n-1);
    hanojske_kule(f, t, 1);
    hanojske_kule(tmp, t, n-1);

}

int main()
{
    hanojske_kule('A', 'B', 4);
    return 0;
}
