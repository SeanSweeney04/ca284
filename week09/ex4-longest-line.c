#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void longest_sentence(char **arr, int size){ //finding the longest sentence
   char *sentences;
   int sentences_length = 0;
   int count = 0;
   int max;
   for(int i = 0; i < size; i++){
      if(arr[i] != "." || arr[i] != "?"){
         count += 1;
      }
      int current_length = count;
      else if (current_length > max){
         max = current_length;
      }
      else if (arr[i] == "." || arr[i] == "?"){ //store the sentences in an array and then iterate through it to see which one mathes the length of the max

         sentences[sentences_length] = arr[:i];
         sentences_length += 1;
      }
   }
   printf("%d\n", max);
   for(int i = 0; i < sentences_length; i++){
      if(strlen(sentences[i]) == max){
         printf("%s\n", sentences[i]);
      }
   }
}
void shortest_sentence(char **arr, int size){ //same as longest one except max is min and were trying to find the shortest one
   char sentences[];
   int sentences_length = 0;
   int count = 0;
   int min;
   for(int i = 0; i < size; i++){
      if(arr[i] != "." || arr[i] != "?"){
         count += 1;
      }
   int current_length = count;
   else if (current_length < min){
      min = current_length;
   }
   else if (arr[i] == "." || arr[i] == "?"){
      sentences[sentences_length] = a[:i];
      sentences_length += 1;
   }
   printf("%d\n", min);
   for(int i = 0; i < sentences_length; i++){
      if(strlen(sentences[i]) == min){
         printf("%s\n", sentences[i]);
      }
   }

int main(int argc, char*argv[]){
   char **arr = (char **)malloc((argc - 2) * sizeof(char *));
   if(strcmp(argv[2], "longest")){
      longest_sentence(arr, argc - 2);
   }
   else if(strcmp(argv[2], "shortest")){
      shortest_sentence(arr, argc - 2);
   }

   return 0;
}
