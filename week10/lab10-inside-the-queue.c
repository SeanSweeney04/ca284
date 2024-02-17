#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
   int  val;
   Node *next, *prev;
};

Node * get_numbers();

void print_numbers(Node * start);
void pop(Node *first);
void push(Node *first, int *val);
void add_number(Node *start,int *arr_member, int *addition);

int main(int argc, char*argv[]){
   int arr_member = atoi(argv[1]);
   int addition = atoi(argv[2]);
   int arr[] = {8, 7, 3, 4, 5, 6, 9, 2, 14, 12};
   int *ptr = arr;
   int length = sizeof(arr)/sizeof(arr[0]);
   Node * start = get_numbers(&length, ptr);
   add_number(start, &arr_member, &addition);
   print_numbers(start);
   return 0;
}

Node * get_numbers(int *length, int *arr){
   Node * current, *first, *prev;
   first = (Node *)calloc(1, sizeof(Node));
   current = first;
   current->prev = NULL;
   for (int i = 0; i < *length; ++i){
      prev = current;
      current->next = (Node *)calloc(1, sizeof(Node *));
      current->val = *(arr + i);
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

void print_numbers(Node *start){
   Node *current ;
   current = start;
   while(current->next){
      printf("%d\n", current->val);
      current = current -> next;
   }
}

void add_number(Node *start,int *arr_member, int *addition){
   Node *current, *tmp;
   current = start;
   while (current->val != *arr_member){
      current = current->next;
   }
   tmp = current->next;
   current->next = (Node *)calloc(1, sizeof(Node));
   current = current->next;
   current->val = *addition;
   current->next = tmp;
}

