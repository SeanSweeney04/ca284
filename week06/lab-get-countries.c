#include <stdio.h>
#include <stdlib.h>

typedef struct Country Country;

struct Country {
   char *name;
   char *capital;
   float population;
   int size;
};
void fill_country(Country *c, char**argv, int *i);

void print_country(struct Country c);


int main(int argc, char*argv[])
{
   Country countries[50];
   int numberOfCountries = (argc - 1) / 4;
   int argIndex = 1;
   for (int i = 0; i < numberOfCountries; i++) {
      ill_country(&countries[i], argv, &argIndex);
   }
   printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
   for (int i = 0; i < numberOfCountries; i++) {
      print_country(countries[i]);
   }
   return 0;
}
void fill_country(Country *c, char**argv, int *i) {
   c->name = argv[*i];
   c->capital = argv[*i+1];
   c->population = atof(argv[*i+2]);
   c->size = atoi(argv[*i+3]);
   *i += 4;
}
void print_country(struct Country c)
{
   printf("%s\t\t\t", c.name);
   printf("%s\t\t\t", c.capital);
   printf("%d\t\t\t", c.size);
   printf("%.2f\n", c.population);
}
