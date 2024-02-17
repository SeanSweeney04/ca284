#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float multiply(float num1, float num2);
float divide(float num1, float num2);


int main(int argc, char * argv[])
{
  char argument[] = "multiply";
  int compare;
  float  res;
  compare = strcmp(argument, argv[1]);
  if (compare == 0){
     res = multiply(atoi(argv[2]), atoi(argv[3]));
     printf("%f\n", res);
  }
  else if (atoi(argv[3]) > 0){
     res = divide(atoi(argv[2]), atoi(argv[3]));
     printf("%f\n", res);
  }
  else{
     printf("invalid\n");
  }
  return 0;
}

float multiply(float num1, float num2){
   return num2 * num2;
}

float divide(float num1, float num2){
   return num1 / num2;
}
