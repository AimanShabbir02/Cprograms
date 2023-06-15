#include <stdio.h>
int main() {
  int a=0,b=0;
  while (a<10) {
    while (b<a) {
      printf(" ");
      ++b;
    }
    a++,printf("%d\n",a);
    b=0;
  }
  return 0;
}
