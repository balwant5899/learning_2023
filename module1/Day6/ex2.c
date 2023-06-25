#include<stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void initialize(struct Student *s1,int size)
{
    for(int i=0;i<size;i++)
    {
        s1[i].rollno=45;
        strcpy(s[i].name,"Radhe");
        s1[i].marks=100.00;
    }
    
}
int main()
{
    int n=3;
    struct Student student[n];
     initialize(student,n);
 for (int i = 0; i < n; i++) {
        printf("Roll No: %d\n", student[i].rollno);
        printf("Name: %s\n", student[i].name);
        printf("Marks: %.2f\n", student[i].marks);
        printf("\n");
    }

    return 0;
}