#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
   int radius = atoi(argv[1]);
   int height = atoi(argv[2]);


   if (argc < 2) {
      printf("No input given!\n");
      return 1;
   }
   else if (argc < 3){
      printf("Two arguments needed!\n");
      return 1;
   }


   else if (radius < 0 || height < 0){
      printf("The radious or height cannot be negative\n!");
      return 1;
   }
   else{
      float  area = 2 * 3.1415 * radius * (radius + height);
      printf("%.2f\n", area);
   }
   return 0;

}
