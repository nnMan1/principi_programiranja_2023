#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* str_toupper(char *str) {
    int i = 0;

    while(str[i] != '\0') {
        str[i] = toupper(str[i]);
        i++;
    }

    return str;
}

char* my_strcpy(char* dest, char* src) {

    int i = 0;
    for(i=0;src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = '\0';
    return dest;
}

char* my_strchr(char* str, char c) {
    if(*str == '\0')
        return NULL;

    if(*str == c)
        return str;

    return my_strchr(str+1, c);
}

char* my_strstr(char* str2, char* str1) {
    if(strlen(str1) > strlen(str2))
        return NULL;

    if(strncmp(str1, str2, strlen(str1)) == 0)
        return str2;

    return my_strstr(str2+1, str1);

}
