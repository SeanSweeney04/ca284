#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
   int  val;
   Node *next, *prev;
};

Node * get_numbers();

void print_numbers(Node * start, int *length);
void pop(Node *first);
void push(Node *first, int *val);

int main(int argc, char*argv[]){
   int length = argc - 4;
   int first_arg = atoi(argv[length + 2]);
   int second_arg = atoi(argv[length + 3]);
   Node * start = get_numbers(&length, argv);
   pop(start);
   pop(start);
   push(start, &first_arg);
   push(start, &second_arg);
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

void pop(Node * first){
   Node *current ;
   current = first;
   while(current->next){
      current = current -> next;
    }
   current->prev->next = NULL;
   free(current);
}

void push(Node * first, int *val){
   Node * current, *prev;
   current = first;
   while(current->next){
      current = current->next;
   }
   prev = current;
   current->next = (Node *)calloc(1, sizeof(Node *));
   current->val = *val;
   current = current->next;
   current->prev = prev;

}

void print_numbers(Node *start, int *length){
   Node *current ;
   current = start;
   while(current->next){
      printf("%d\n", current->val);
      current = current -> next;
   }
}
