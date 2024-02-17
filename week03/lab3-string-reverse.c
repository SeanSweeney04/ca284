#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char string[]);

int main(int argc, char * argv[]){
   char string[50];
   strcpy(string, argv[1]);
   reverse(string);
   printf("%s\n", string);
   return 0;

}

void reverse(char string[]){
   int i, j, length;
   length = strlen(string);
   char tmp;
      for (i = 0, j = length - 1; i < j; i++, j--) {
         tmp = string[i];
         string[i] = string[j];
         string[j] = tmp;

      }

}
