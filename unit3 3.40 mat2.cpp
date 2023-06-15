#include <stdio.h>
int main() {
  int counter = 1, multiple;
  while ( counter > 0 ) {
    multiple = counter + counter + counter;
    printf("%d\n", multiple );
    counter = multiple;
  }
  return 0;
}
