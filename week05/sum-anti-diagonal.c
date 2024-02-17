#include <stdio.h>
#include <stdlib.h>


int sum_diagonal(int n, int arr[n][n]){
   int sum = 0;
   int *psum = &sum;
   int j = 0;
   for(int i = (n - 1); i >= 0; i--){
      sum += *(*(arr + j) + i);
      j ++;
   }
   return *psum;
}
void get_arr(char **arguments, int n, int arr[n][n]){
   int pos = 2;
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         arr[i][j] = atoi(arguments[pos]);
         pos++;
      }
   }
}

int main(int argc, char*argv[]){
   int n = atoi(argv[1]);
   int matrix[n][n];
   get_arr(argv, n, matrix);
   int diagonal_total = sum_diagonal(n, matrix);
   printf("%d\n", diagonal_total);
   return 0;
}
