#include <stdio.h>
int main(void)
{
  int sum7 = 0;
  int i;
  for (i = 0; i <= 100; i++) {
    if (i % 7 == 0) {
      sum7 += i;
    }
  }
  printf("%d\n", sum7 );
  return 0;
}
