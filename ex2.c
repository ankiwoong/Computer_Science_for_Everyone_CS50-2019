#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("좋아하는 동물을 입력해주세요.: \n");
    printf("내가 좋아하는 동물은 %s\n", answer);
}
