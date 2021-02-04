#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int i = get_int("i: ");
    // int j = get_int("j: ");

    char *s = get_string("S: ");
    char *t = get_string("T: ");

    if (s == t)
    {
        printf("Same\n");
        printf("s : %p\n", s);
        printf("p : %p\n", t);
    }
    else
    {
        printf("Different\n");
        printf("s : %p\n", s);
        printf("p : %p\n", t);
    }
}