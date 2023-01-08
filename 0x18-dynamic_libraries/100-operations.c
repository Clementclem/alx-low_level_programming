#include <stdio.h>

void perform_100_operations(void)
{
  int x = 0;
  for (int i = 0; i < 100; i++)
    {
      x += (i * i) / (i + 1);
    }
  printf("Performed 100 operations, result is %d\n", x);
}
