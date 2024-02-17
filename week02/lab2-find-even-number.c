#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
   int length = argc - 1;
   int nums[10];
   int i;
   int total = 0;
   for (i = 0; i <= length; i++){
      nums[i - 1] = atoi(argv[i]);
   }
   for (i = 0; i <= length - 1; i++){
      if (nums[i] % 2 == 0){
         printf("%d - %d\n" , i , nums[i]);
         total ++;
      }
   }
   if (total == 0){
      printf("Not found!\n");
   }
   return 0;
}
