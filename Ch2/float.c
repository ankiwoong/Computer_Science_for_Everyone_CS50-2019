#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // case1
    // float price = get_float("What's the price?\n");
    // printf("Your total is %f\n", price * 1.0625);

    // case2
    float price = get_float("What's the price?\n");
    printf("Your total is %.2f.\n", price * 1.0625);
} 
