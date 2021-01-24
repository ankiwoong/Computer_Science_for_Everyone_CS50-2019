#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user to Number
    int n = get_int("Do you Number?\n");

    // Judge even and odd
    if (n % 2 == 0)     // Even
    {
        printf("even\n");
    }
    else                // Odd
    {
        printf("odd\n");
    } 
}
