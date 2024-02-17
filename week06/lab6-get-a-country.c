#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Country
{
   char *name;
   char *capital;
   float population;
   int size;
};



int main(int argc, char*argv[]){
   struct Country country1 = {argv[1], argv[2], atof(argv[3]), atoi(argv[4])};
   printf("%s\n", country1.name);
   printf("%s\n", country1.capital);
   printf("%.2f million people\n", country1.population);
   printf("%d km2\n", country1.size);

   return 0;
}
