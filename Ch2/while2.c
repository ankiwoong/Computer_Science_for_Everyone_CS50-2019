#include <stdio.h>
#define TRUE 1
#define FALSE 0

int i = 0;

int main(void)
{
    while (i < 50)
    {
        printf("hello, world\n");
        i = i + 1;      // i++ , i += 1
    }
}
