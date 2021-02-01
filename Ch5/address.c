// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int n = 50;
    // printf("%p\n", &n);
    // printf("%i\n", *&n);

    // int *p = &n;
    // printf("%p\n", p);
    // printf("%i\n", *p);

    // string s = "EMMA";
    char *s = "EMMA";
    // printf("%s\n", s);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}