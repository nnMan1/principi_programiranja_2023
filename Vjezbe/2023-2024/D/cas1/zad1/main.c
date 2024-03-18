#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    scanf("%d%d", &a, &b);

    if(a < b) {
        printf("%d", a);
    } else {
        printf("%d", b);
    }

   /* int c = a + b;


    printf("Zbir brojeva %d i %d je %d\n", a, b, c);
    printf("Proizvod brojeva %d i %d je %d\n", a, b, a * b);
    printf("Kolicnik brojeva %d i %d je %d\n", a, b, a / b);
    printf("Ostatak pri dijeljenju brojeva %d i %d je %d\n", a, b, a % b);
    printf("Razlika brojeva %d i %d je %d\n", a, b, a - b);*/
    return 0;
}
