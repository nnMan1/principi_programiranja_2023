#include <stdio.h>
#include <stdlib.h>

struct SNumber {
    int x;
    double y;
};

union UNumber {
    int x;
    float y;
};

void print_bits(unsigned int x) {
    for(unsigned int mask=1<<31; mask>0; mask >>= 1)
        printf("%d", (mask & x) != 0);
}

int jedinica_na_poziciji(unsigned int x, int k) {
    return x & 1 << k;
}

unsigned get_bits(unsigned int x, int p, int n) {
    unsigned mask = ~0;
    mask <<= 32 - n;
    mask >>= 32 - n - p;

    return x & mask;
}

unsigned set_bits(unsigned x, int p, int n, unsigned y) {
    //x ^= get_bits(x, p, n); //Mogu ovako da uzbacim bite od pozicije p do pozicije p + n
    unsigned mask = ~0;
    mask <<= 32 - n;
    mask >>= 32 - n - p;
    mask = ~mask;

    x = x & mask;

    //y = get_bits(y, 0, n); // Uzima posljednjih n bitova iz y
    mask = ~0;
    mask <<= 32-n;
    mask >>= 32-n;
    y = y & mask;

    return x | y << p;
}

int main()
{
    int x, y, n, p;
    scanf("%d %d %d %d", &x, &y, &n, &p);

    print_bits(x); printf("\n");
    print_bits(y); printf("\n");
    print_bits(set_bits(x, p, n, y));

/*    int x, n, p;
    scanf("%d %d %d", &x, &p, &n);
    print_bits(x);
    printf("\n");
    print_bits(get_bits(x, p, n));
/*
    printf("%d", jedinica_na_poziciji(78, 3));
/*    int x = 18;
    int y = 6;
    printf("x & y = %d\n", x & y);
    printf("x | y = %d\n", x | y);

/*
    printf("sizeof(union UNumber) = %d\n", sizeof(union UNumber));
    printf("sizeof(struct SNumber) = %d\n", sizeof(struct SNumber));
   */
   /*
    union UNumber a;
    a.x = 5;
    printf("%d %lf\n", a.x, a.y);

    a.y = 5;
    printf("%d %lf", a.x, a.y);*/
    return 0;
}
