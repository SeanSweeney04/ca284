#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student Student;
struct Student{
   char *name;
   char *programme;
   float grade;
};

Student get_student(char *argv[], int *index){
   Student student;
   student.name = argv[*index];
   student.programme = argv[*index + 1];
   student.grade = atof(argv[*index + 2]);
   *index += 3;
   return student;
}

float get_average(Student *student, int *length){
   float total = 0;
   for(int i = 0; i < *length; i++){
      total += student[i].grade;
   }
   float average = total / *length;
   return average;
}
void print_student(Student *student, int *length, float *average){
   for(int i = 0; i < *length; i++){
      if(strcmp(student[i].programme , "CSCE") == 0 && student[i].grade >= *average){
         printf("%s, %.2f\n", student[i].name, student[i].grade);
      }
   }
}

int main(int argc, char * argv[]){
   Student *students = (Student*)calloc(2, sizeof(Student));
   int index = 1;
   for(int i = 0; i < 2; i++){
      students[i] = get_student(argv, &index);
   }
   int number_of_students = (argc - 1) / 3;
   if(number_of_students > 2){
      Student *tmp = realloc(students, number_of_students *sizeof(Student));
      students = tmp;
      for (int i = 2; i < number_of_students; i++){
         students[i] = get_student(argv, &index);
      }
   }
   float av = get_average(students, &number_of_students);
   print_student(students, &number_of_students, &av);

   printf("Average grade: %.2f\n", av);

   free(students);
   students = NULL;
   return 0;
}

