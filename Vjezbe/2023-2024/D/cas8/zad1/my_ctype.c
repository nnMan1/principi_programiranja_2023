
int my_isdigit(int c) {
    if(c >= '0' && c <= '9')
        return 1;

    return 0;
}

int my_isalpha(int c) {
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        return 1;

    return 0;
}

int my_isalnum(int c) {
    return my_isalpha(c) || my_isdigit(c);
}

int my_toupper(int c) {
    if(c < 'a' || c > 'z')
        return c;

    return c - 'a' + 'A';
}
