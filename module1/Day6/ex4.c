/*
Task 4
Write a function to sort the array of structures in descending order based on marks 
Example String : "1001 Aron 100.00" 
Example Structure : 
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };

*/

#include <stdio.h>
#include <stdlib.h>
struct Student
{
   int rollno;
   char name[20];
   float marks;
};
int compareByMarks(const void *a, const void *b)
{
   const struct Student *s1 = (const struct Student *)a;
   const struct Student *s2 = (const struct Student *)b;

   if (s1->marks < s2->marks)
      return 1;
   else if (s1->marks > s2->marks)
      return -1;
   else
      return 0;
}
void sortByMarks(struct Student *students, int size)
{
   qsort(students, size, sizeof(struct Student), compareByMarks);
}
int main()
{
 
   int size;

   
   printf("Enter the number of students: ");
   scanf("%d", &size);
   getchar();

   struct Student *students = malloc(size * sizeof(struct Student));

   for (int i = 0; i < size; i++)
   {
      printf("Enter student %d details (rollno name marks): ", i + 1);
      scanf("%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
      getchar();
   }
   sortByMarks(students, size);
   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("Roll No: %d\n", students[i].rollno);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.2f\n\n", students[i].marks);
   }
   free(students);
   return 0;
}


