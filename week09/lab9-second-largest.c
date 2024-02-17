#include <stdio.h>
#include <stdlib.h>

void second_largest(float *arr, int size){
   int i, firstIndex, secondIndex;
   if (arr[0] > arr[1]) {
      firstIndex = 0;
      secondIndex = 1;
   } else {
      firstIndex = 1;
      secondIndex = 0;
   }
   for (i = 2; i < size; ++i) {
      if (arr[i] > arr[firstIndex]) {
         secondIndex = firstIndex;
         firstIndex = i;
      } else if (arr[i] > arr[secondIndex] && arr[i] != arr[firstIndex]) {
         secondIndex = i;
        }
   }
   printf("%.1f\n", arr[secondIndex]);
}

int main(int argc, char*argv[]){
   int size = argc - 1;
   float *arr = (float * )malloc(size * sizeof(float));
   for(int i = 0; i < size; i++){
      arr[i] = atof(argv[i + 1]);
   }
   second_largest(arr, size);
   free(arr);
   return 0;
}
