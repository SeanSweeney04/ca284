#include <stdio.h>
#include <string.h>

char most_freq_char(char *str);

int main(int argc, char *argv[])
{
   char *str = argv[1];

   printf("%c\n", most_freq_char(str));

   return 0;
}

char most_freq_char(char *str)
{
   char c;
   int count;
   int max = 1;
   for (int i = 0; i < strlen(str); ++i){
   count = 0;
      for (int j = 0; j < strlen(str); ++j){
         if (str[i] == ' '){
            break;
         }
         else if (str[j] == str[i]){
            ++count;
         }
   }

      if (max < count){
         max = count;
         c = str[i];
      }
   }

   return c;
}
