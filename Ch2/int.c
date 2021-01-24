#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // case1
    // int age = get_int("What's your age?\n");
    // printf("You are at least %i days old.\n", age * 365);
    
    // case 2
    // int age = get_int("What's your age?\n");
    // int days = age * 365;
    // printf("You are at least %i days old.\n", days);

    // case 3
    printf("You are at least %i days old.\n", get_int("What's your age?\n") * 365);    
}
