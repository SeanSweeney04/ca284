#include <stdio.h>
#include <stdlib.h>

int searchNumber(int target, int array[], int length) {
   for (int i = 0; i < length; i++) {
      if (array[i] == target) {
         return i;
      }
   return -1;
}
int main(int argc, char *argv[]) {
   int target = atoi(argv[1]);
   int array[50];
   for (int i = 0; i < 50; i++) {
      array[i] = atoi(argv[i + 2]);
   }
   int index = searchNumber(target, array, 50);
   if (index != -1) {
      printf("Found %d at index %d\n", target, index);
   } else {
         printf("%d not found\n", target);
     }
   return 0;
}
