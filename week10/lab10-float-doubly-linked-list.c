#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
   float val;
   Node *next, *prev;
};

Node * get_numbers();

void print_numbers(Node * start, int *length);

int main(int argc, char*argv[]){
   int length = argc - 2;
   Node * start = get_numbers(&length, argv);
   print_numbers(start, &length);
   return 0;
}

Node * get_numbers(int *length, char*argv[]){
   Node * current, *first, *prev;
   first = (Node *)calloc(1, sizeof(Node));
   current = first;
   current->prev = NULL;
   for (int i = 0; i < *length; ++i){
      prev = current;
      current->next = (Node *)calloc(1, sizeof(Node *));
      current->val = atof(argv[i + 2]);
      current = current->next;
      current->prev = prev;
   }
   current->next = NULL;
   return first;
}

void print_numbers(Node *start, int *length){
   Node *current ;
   current = start;
   while(current->next){
      current = current->next;
   }
   while(current->prev){
      current = current -> prev;
      printf("%.2f\n", current->val);
   }
}
