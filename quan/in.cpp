#include <stdio.h>
main() {
   int i, j;
   
   printf("In bang so: \n");
   for(i = 1; i <= 10; i++) {
      for(j = i; j <=100; j += 10 )
         printf(" %3d", j);

      printf("\n");
   }
}
