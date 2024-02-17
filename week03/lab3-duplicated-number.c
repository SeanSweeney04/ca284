#include <stdio.h>
#include <stdlib.h>

int findDuplicate(int nums[], int length) {
   int i;
   int j;
   for (i = 0; i < length; i++) {
      for (j = i + 1; j < length; j++) {
          if (nums[j] == nums[i]) {
             return nums[j];
          }
      }
   }
   return -1;
}

int main(int argc, char* argv[]) {
   int length = argc - 1;
   int arr[length];
   int i;
   for (i = 0; i < length; i++) {
      arr[i] = atoi(argv[i + 1]);
   }
   int duplicate = findDuplicate(arr, length);
      if (duplicate == -1) {
         printf("no duplicated number\n");
      } else {
         printf("%d\n", duplicate);
        }

   return 0;
}
