#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
   int val;
   Node * next;
};

Node * get_numbers();

void print_numbers(Node * start, int *length);

int main(int argc, char*argv[]){
   int length = argc - 2;
   Node * start = NULL;
   start = get_numbers(&length, argv);
   print_numbers(start, &length);
   return 0;
}

Node * get_numbers(int *length, char*argv[]){
   Node * current, *first;
   first = (Node *)calloc(1, sizeof(Node));
   current = first;
   for (int i = 0; i < *length; ++i){
      current->next = (Node *)calloc(1, sizeof(Node *));
      current->val = atoi(argv[i + 2]);
      current = current->next;
   }
   current->next = NULL;
   return first;
}

void print_numbers(Node *start, int *length){
   Node *current ;
   current = start;
   while(current->next){
      printf("%d\n", current->val);
      current = current -> next;
   }
}
