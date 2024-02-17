#include <stdio.h>
#include <stdlib.h>

typedef struct Country Country;

struct Country {
   char *name;
   char *capital;
   float population;
   int size;
};

void get_country(Country *c, char**argv, int *i);

void print_country(struct Country c);

void get_average_population(Country *countries, int num);

int main(int argc, char*argv[])
{
   Country countries[50];
   int numberOfCountries = (argc - 1) / 4;
   int index = 1;
   for (int i = 0; i < numberOfCountries; i++) {
      get_country(&countries[i], argv, &index);
   }
   printf("Country\t\t\tCapital\t\t\tSize\t\t\tPopulation\n");
   for (int i = 0; i < numberOfCountries; i++) {
      print_country(countries[i]);
   }
   get_average_population(countries, numberOfCountries);
   return 0;
}
void get_country(Country *c, char**argv, int *i) {
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

void get_average_population(Country *c, int num)
{
   float total = 0;
   for (int i = 0; i < num; i++) {
   total += c[i].population;
   }
   total /= num;
   printf("Population average: %.2f\n", total);
}
