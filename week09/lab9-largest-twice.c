#include <stdio.h>
#include <stdlib.h>

void largest_twice(int *arr, int size){
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
   int largest = arr[size - 1];
   int k = 0;
   while(arr[k] * 2 > largest){
      k++;
   }
   if (k < size - 2){
      printf("%d\n", largest);
   }
   else{
      int zero = 0;
      printf("%d\n", zero);
   }
}

int main(int argc, char*argv[]){
   int size = argc - 1;
   int *arr = (int * )malloc(size * sizeof(int));
   for(int i = 0; i < size; i++){
      arr[i] = atoi(argv[i + 1]);
   }
   largest_twice(arr, size);
   free(arr);
   return 0;
}
