#include <stdio.h>
#include <stdlib.h>

int rugbyScore(int tries, int conversions, int penalties, int dropGoals){
   int totalTries = tries * 5;
   int totalConversions = conversions * 2;
   int totalPenalties = penalties * 3;
   int totalDropGoals = dropGoals * 3;
   return totalTries + totalConversions + totalPenalties + totalDropGoals;
}

int main(int argc, char*argv[]){
   if (argc < 5){
      printf("Error\n");
   } else{
        int i;
        for (i = 1; i < argc; i ++){
           if (atoi(argv[i]) < 0){
              printf("Error\n");
              break;
           }
        int sum = rugbyScore(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]));
        printf("%d\n", sum);

        }
     }
   return 0;
}
