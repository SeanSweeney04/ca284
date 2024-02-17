#include <stdio.h>
#include <stdlib.h>

int dot_product(int n, int *arr1, int *arr2){
   int total = 0;
   for(int i = 0; i < n; i++){
      total += arr1[i] * arr2[i];
   }
   return total;
}

int main(int argc, char * argv[]){
   int n = atoi(argv[1]);
   int *arr1 = (int * )malloc(n * sizeof(int));
   int *arr2 = (int * )malloc(n * sizeof(int));

   for(int i = 0; i < n; i++){
      arr1[i] = atoi(argv[i + 2]);
      arr2[i] = atoi(argv[i + 2 + n]);

   }

   int result = dot_product(n,  arr1, arr2);
   printf("%d\n", result);
   free(arr1);
   free(arr2);
   return 0;
}
