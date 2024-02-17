#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void longest_sentence(char **arr, int size){
   int max = 0;
   for(int i = 0; i < size; i++){
      int current_length = strlen(arr[i]);
      if (current_length > max){
         max = current_length;
      }
   }
   for (int i = 0; i < size; i++) {
      if (strlen(arr[i]) == max) {
         printf("%s\n", arr[i]);
      }
   }
}

int main(int argc, char*argv[]){
   char **arr = (char **)malloc((argc - 1) * sizeof(char *));
   for (int i = 0; i < argc - 1; ++i) {
      arr[i] = (char *)malloc((strlen(argv[i + 1]) + 1) * sizeof(char));
      strcpy(arr[i], argv[i + 1]);
   }
   longest_sentence(arr, argc - 1);
   for (int i = 0; i < argc - 1; ++i) {
      free(arr[i]);
   }
   free(arr);

   return 0;
}
