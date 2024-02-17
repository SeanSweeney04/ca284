#include <stdio.h>
#include <stdlib.h>

int maximum(int nums[], int length) {
   int i;
   int max = nums[0];
   for (i = 0; i < length; i ++) {
      if (nums[i] > max) {
         max = nums[i];
      }
   }
   return max;
}
int main(int argc, char*argv[]) {
   int length = argc - 1;
   int i;
   int numbers[length];
   for (i = 0; i < length; i++) {
      numbers[i] = atoi(argv[i + 1]);
   }
   int max = maximum(numbers, length);
   }

   return 0;
}
