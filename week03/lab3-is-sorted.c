#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int size) {
   int i, j, minIndex, temp;

   for (i = 0; i < size - 1; i++) {
      minIndex = i;
      for (j = i + 1; j < size; j++) {
         if (arr[j] < arr[minIndex]) {
            minIndex = j;
         }
      }
      temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
   }
}
int main(int argc, char*argv[]){
   int length = argc - 1;
   int nums[length];
   int i;
   for (i = 0; i < length; i ++){
      nums[i -1] = atoi(argv[i]);
   }
   selectionSort(nums, length);
   int j;
   for (j = 0; j < length; j++){
      printf("%d\n", nums[j]);
   }
   return 0;
}
