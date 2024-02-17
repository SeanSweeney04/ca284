/*
Program: lab1-hello_again.c
Author: Your Name
Input: A full name
Output: Print out the given name
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */

int main(int argc, char * argv[])
{
   char first_name[30];
   scanf("%s", &first_name);
   printf("Hello\n");
   printf("%s\n", first_name);
}
