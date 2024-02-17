#include <stdio.h>
#include <stdlib.h>

typedef struct Country Country;

struct Country {
   char *name;
   char *capital;
   float population;
   int size;
};

Country addCountry(char **argv, int * index);
void print_country(Country * c);
void sort_countries(Country * countries, int length);

int main(int argc, char *argv[])
{
   int index = 1;
   int numberOfCountries = (argc - 1) / 4;
   Country countries[numberOfCountries];
   for (int i = 0; i < numberOfCountries; i++) {
      countries[i] = addCountry(argv, &index);
   }
   printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");

   sort_countries(countries, numberOfCountries);

   for (int i = 0; i < numberOfCountries; i++){
      print_country(&countries[i]);
   }
return 0;
}

Country addCountry(char **argv, int * i)
{
   Country c;
   c.name = argv[*i];
   c.capital = argv[*i + 1];
   c.population = atof(argv[*i + 2]);
   c.size = atoi(argv[*i + 3]);
   *i += 4;
   return c;
}
void print_country(Country * c)
{
   printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n", c->name, c->capital, c->size, c->population);
}
void sort_countries(Country * countries, int length)
{
   Country tmp;
   int sorted;
   do{
      sorted = 0;
      for (int i = 0; i < length - 1; i++) {
         if (countries[i].population < countries[i + 1].population) {
            sorted = 1;
            tmp = countries[i];
            countries[i] = countries[i + 1];
            countries[i + 1] = tmp;
         }
      }
   }
   while(sorted == 1);
}
