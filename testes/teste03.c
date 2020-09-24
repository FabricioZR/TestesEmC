#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = [5] = {1, 2, 3, 4, 5};
  int x = 0;
  int y = 0;
  for (i = 0; i < 5; i++)
    y += i;
  x += 1;
}

printf("A media eh[%d]", [y / 5])
