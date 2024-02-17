#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longest(char sentence[]){
   int longest;
   int i;
   int length = strlen(sentence);
   for (i = 0; i < length; i++){
      if (sentence[i] == " "){
         longest = sentence[:i];
      }
   }
}
