#include <stdlib.h>
#include <stdio.h>

void binary_to_decimal(int binary[10], int length){
   int multiplier = 1;
   int total = 0;
   for(int i = length - 1; i >=0; i--){
      total += *(binary + i) * multiplier;

      multiplier = multiplier * 2;
   }
   printf("%d\n", total);
}

int main(int argc, char*argv[]){
   int length = argc - 1;
   int binary[50];
   for (int i = 1; i <= length; i++){
      binary[i - 1] = atoi(argv[i]);
   }
   binary_to_decimal(binary, length);
   return 0;
}
