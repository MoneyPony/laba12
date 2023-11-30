#include <stdio.h>
#include <locale.h>
int main() {
    char c;
    short int si;
    unsigned short int usi;
    int i;
    unsigned char uc;
    wchar_t wc;
    long long int lli;
    size_t st;
    float f;
    double d;
    signed int si2;
    setlocale(LC_ALL, "RUS");
    printf("Размер char: %d байт\n", (int)(&c + 1) - (int)&c);
    printf("Размер short int: %d байт\n", (int)(&si + 1) - (int)&si);
    printf("Размер unsigned short int: %d байт\n", (int)(&usi + 1) - (int)&usi);
    printf("Размер int: %d байт\n", (int)(&i + 1) - (int)&i);
    printf("Размер unsigned char: %d байт\n", (int)(&uc + 1) - (int)&uc);
    printf("Размер wchar_t: %d байт\n", (int)(&wc + 1) - (int)&wc);
    printf("Размер long long int: %d байт\n", (int)(&lli + 1) - (int)&lli);
    printf("Размер size_t: %d байт\n", (int)(&st + 1) - (int)&st);
    printf("Размер float: %d байт\n", (int)(&f + 1) - (int)&f);
    printf("Размер double: %d байт\n", (int)(&d + 1) - (int)&d);
    printf("Размер signed int: %d байт\n", (int)(&si2 + 1) - (int)&si2);
}