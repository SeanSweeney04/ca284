#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 200
void print_longest_line(int *length, char *longest_line);
void get_text();

int main(){
   get_text();
   return 0;
}

void get_text(){
   FILE *pfile = NULL;
   char *filename = "paragraph.txt";
   pfile = fopen("paragraph.txt", "r");
   if(!pfile){
      printf("Failed to open %s.\n", filename);
      exit(1);
   }
   int longest_length = 0;
   char *current_line = (char*)calloc(1, MAX_LENGTH);
   char *longest_line = (char*)calloc(1, MAX_LENGTH);
   while (fgets(current_line, MAX_LENGTH, pfile)){
      if (strlen(current_line) > longest_length){
         strcpy(longest_line, current_line);
         longest_length = strlen(longest_line);
      }
   }
   print_longest_line(&longest_length, longest_line);
   fclose(pfile);
}

void print_longest_line(int *length, char *longest_line){
   printf("%d\n%s\n", *length, longest_line);
}
