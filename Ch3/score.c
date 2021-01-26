#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;

    int score[3];
    score[0] = 72;
    score[1] = 73;
    score[2] = 33;

    // printf("Average: %i\n", (score1 + score2 + score3) / 3);
    printf("Average: %i\n", (score[0] + score[1] + score[2]) / 3);
}