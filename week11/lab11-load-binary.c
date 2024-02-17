#include <stdio.h>
#include <stdlib.h>


typedef struct Student Student;

struct Student{
   char name[50];
   char college[40];
   int age;
   float grade;
};

Student * get_student();
void print_student(Student *student);
int main()
{
   Student * student = get_student();
   print_student(student);
   return 0;
}

Student * get_student(){
   FILE *pfile = NULL;  // File pointer
   Student * student = (Student *)calloc(1, sizeof(Student*));
   int name_length;
   int college_length;
   char *filename = "studentBinary.bin"; //So a binary file has an extension of '->bin'
   pfile = fopen(filename, "rb"); //open a file with a binary mode
   if(!pfile) //check if the open operation work correctly
   {
      printf("Error opening %s for writing-> Program terminated\n", filename);
      exit(1);
   }
   fread(&name_length, sizeof(int), 1, pfile);
   fread(student->name, sizeof(char), name_length, pfile);
   fread(&college_length, sizeof(int), 1, pfile);
   fread(student->college, sizeof(char), college_length, pfile);
   fread(&student->age, sizeof(int), 1, pfile);
   fread(&student->grade, sizeof(float), 1, pfile);
   return student;
   }
void print_student(Student *student){
   printf("Name: %s\nCollege: %s\nAge: %d\nGrade: %.2f\n", student->name, student->college, student->age, student->grade);
}
