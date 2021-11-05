#include <stdio.h>
#include <stdlib.h>
#include "math.h"

void count(int amount)
{
  for (int i = 0; i < amount; i = add(i, 1))
    printf("%d", i);
}

int main(int args, char** argv)
{
  if (args > 1)
    count(atoi(argv[1]));

  puts("Hello world!");
  return 0;
}
