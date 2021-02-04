#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main (void)
{
  char *str1 = get_string("A: ");
  char *str2 = get_string("B: ");
  int ret;

  ret = strncmp(str1, str2, 6);

  if(ret > 0)
  {
    printf("str1 is longer\n");
  }
  else if(ret < 0)
  {
    printf("str2 is longer\n");
  }
  else
  {
    printf("The two strings are equal\n");
  }

  return(0);
}