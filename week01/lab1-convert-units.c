#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])

{
   int centimetres;
   float conversion;
   centimetres = atoi(argv[1]);
   conversion = centimetres / 2.54;
   printf("%.2f\n", conversion);


   return 0;
}
