#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])

{
   int i;
   float conversion;
   int j;
 //  for (i = 30; i < 50; i ++){
   for (j = 30; j <= 50; j ++){
      conversion = j / 2.54;

      printf( "%.2f", conversion);
   }
   printf("\n");

   return 0;
}
