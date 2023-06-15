#include <stdio.h>
int main() {
   int i = 0;
   printf("Character \t ASCII Value \n");
   for (i = 0; i <=127; i++) {
      printf("%c \t\t %d", i, i);
   }
   return 0;
}
