#include <stdio.h>
#include <stdlib.h>

int leapYear(int firstYear, int lastYear){
   int i;
   for (i = firstYear; i <= lastYear; i++){
      if (i % 400 == 0 || i % 4 == 0){
         if (i % 100 != 0){
            printf("%d\n", i);
      }
         }
   }
}

int main(int argc, char*argv[]){
   leapYear(atoi(argv[1]), atoi(argv[2]));
   return 0;
}
