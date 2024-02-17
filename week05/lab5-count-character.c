#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char*argv[]){
   char ch = argv[1][0];
   char *str = argv[2];    // The string to be searched
   char *pGot_char = str;                     // Pointer initialized to string start
   int count = 0;                             // Number of times found
   while(pGot_char = strchr(pGot_char, ch))   // As long as NULL is not returned...
   {                                          // ...continue the loop.
     ++count;                                 // Increment the count
     ++pGot_char;                             // Move to next character address
   }

   printf("%d\n", count);
   return 0;
}

