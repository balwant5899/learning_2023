/*2. Write a program to print the grade of the given student using if else if block
90 to 100 ->'Grade A'
75 to 89 -> 'Grade B'
60 to 74 -> 'Grade C'
50 to 59 -> 'Grade D'
0 to 49 -> 'Grade F'


*/
#include<stdio.h>
int main()
{
    int st_marks;
    printf("Enter the marks of student\n");
    scanf("%d",&st_marks);
    if(st_marks>=90 && st_marks<=100)
    {
        printf("Grade A\n");
    }
    else if(st_marks>=75 && st_marks<=89)
    {
        printf("Grade B\n");
    } 
    else if(st_marks>=60 && st_marks<=74)
    {
        printf("Grade C\n");
    }  
    else if(st_marks>=50 && st_marks<=59)
    {
        printf("Grade D\n");
    }
    else if(st_marks>=0 && st_marks<=49)
    {
        printf("Grade F\n");
    }     
    return 0;
        
}