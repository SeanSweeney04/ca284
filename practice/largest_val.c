#include <stdio.h>
#include <stdlib.h>

void initArray(int arr[], int length, char ** arguments);
void largest(int arr[], int length);

int main(int argc, char*argv[]){
   int length = argc - 1;
   int numbers [length];
   initArray(numbers, length, argv);
   largest(numbers, length);
   return 0;
}

void initArray(int arr[], int length, char ** arguments){
   for(int i = 0; i < length; i++){
      arr[i] = atoi(arguments[i + 1]);
   }
}

void largest(int arr[], int length){
   int largest = arr[0];
   for(int i = 1; i < length; i++){
      if (arr[i] > largest){
         largest = arr[i];
      }
   }
   printf("%d\n", largest);
}
