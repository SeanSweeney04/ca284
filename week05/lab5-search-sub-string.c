#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sub_string(char *long_string, char *subString){
   if (strstr(long_string, subString)){
      int i = 0;
      while(long_string[i] != subString[0]){
         i++;
      }
      printf("%d ", i);
      int j = i;
      int k = 0;
      while(long_string[j] == subString[k] && long_string[j] != '\0'){
         j++;
         k++;
      }
      printf("%d\n", j - 1);

   }
}

int main(int argc, char*argv[]){
   char *str1 = argv[1];
   char *str2 = argv[2];
   sub_string(str1, str2);
   return 0;
}
