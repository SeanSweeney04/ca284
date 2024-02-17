#include <stdio.h>
#include <stdlib.h>

int max(int nums[], int length);

int main(int argc, char * argv[]){
   int length = argc - 1;
   int nums[length];
   int i;
   for (i = 1; i < length - 1; i ++){
      nums[i - 1] = atoi(argv[i]);
   }
   int maximum = max(nums, length);
   printf("%d\n", maximum);
   return 0;
}

int max(int nums[], int length){
   int largest = nums[0];
   int i;
   for (i = 1; i < length; i ++){
      if (nums[i] > largest){
         largest = nums[i];
      }
   }
   return largest;
}
