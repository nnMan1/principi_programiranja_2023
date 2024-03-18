#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = {'M', 'a', 'r', 'k', 'o', '\0'};
    char str2[] = "Marko";

    char str3[50];

    if(str == str2)
        printf("Jednaki\n");
    else
        printf("Razliciti\n");

    printf("str = %s\n", str2);
    printf("str1 = %s\n", str2);

    scanf("%s", str3);
    printf("%s", str3);
    return 0;
}
