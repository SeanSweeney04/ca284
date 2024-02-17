#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

   int length = argc - 1;
   int nums[10];
   int total = 0;
   int i;
   for (i = 1; i <= length; i++){
      nums[i - 1] = atoi(argv[i]);
      }
   for (i = 0; i <= length - 1; i++){
     if (nums[i] % 2 == 1) {
       ++ total;
       }
     }
   printf("%d\n", total);
   return 0;
}
