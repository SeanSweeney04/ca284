#include <stdio.h>
#include <stdlib.h>

typedef struct Country Country;
typedef struct City City;

struct City{
   char *name;
   int size;
};
struct Country{
   char *name;
   City cities[3];

};

Country add_country(char ** argv, int *num);
void print_cities(Country *c);

int main(int argc, char*argv[]){
   int index = 1;
   int numberOfCountries = (argc - 1) / 7;
   Country countries[numberOfCountries];
   for(int i = 0; i < numberOfCountries; i++){
      countries[i] = add_country(argv, &index);
   }
   for(int i = 0; i < numberOfCountries; i++){
      print_cities(&countries[i]);
   }
   return 0;
}

Country add_country(char ** argv, int *num){
   Country c;
   c.name = argv[*num];
   for(int i = 0; i < 3; i++){
      c.cities[i].name = argv[*num + 1];
      c.cities[i].size = atof(argv[*num + 2]);
      *num += 2;
   }
   *num += 1;
   return c;
}

void print_cities(Country *c){
   char *biggest_city = c-> cities[0].name;
   float biggest_size = c-> cities[0].size;
   for(int i = 1; i < 3; i++){
      if (biggest_size < c-> cities[i].size){
         biggest_city = c ->cities[i].name;
         biggest_size = c ->cities[i].size;
      }
   }
   printf("%s: %s\n", c->name, biggest_city);
}

