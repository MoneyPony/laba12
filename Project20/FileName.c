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
    printf("������ char: %d ����\n", (int)(&c + 1) - (int)&c);
    printf("������ short int: %d ����\n", (int)(&si + 1) - (int)&si);
    printf("������ unsigned short int: %d ����\n", (int)(&usi + 1) - (int)&usi);
    printf("������ int: %d ����\n", (int)(&i + 1) - (int)&i);
    printf("������ unsigned char: %d ����\n", (int)(&uc + 1) - (int)&uc);
    printf("������ wchar_t: %d ����\n", (int)(&wc + 1) - (int)&wc);
    printf("������ long long int: %d ����\n", (int)(&lli + 1) - (int)&lli);
    printf("������ size_t: %d ����\n", (int)(&st + 1) - (int)&st);
    printf("������ float: %d ����\n", (int)(&f + 1) - (int)&f);
    printf("������ double: %d ����\n", (int)(&d + 1) - (int)&d);
    printf("������ signed int: %d ����\n", (int)(&si2 + 1) - (int)&si2);
}