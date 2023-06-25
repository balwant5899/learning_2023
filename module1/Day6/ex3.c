#include<stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
void parse(const char* info,struct Student *students,int size)
{
    int count=0;
    int index=0;
    while (info[index] != '\0')
    {   
        sscanf(&info[index],"%d",&students[count].rollno);
        while(info[index]!=' ')
        {
            index++;
        }
        index++;
        int strindex=0;        
        while(info[index]!=' ')
        {
            students[count].name[strindex++]=info[index++];
        }
        students[count].name[strindex] = '\0';
        index++;
        sscanf(&info[index],"%f",&students[count].marks);
        while (info[index] != ' ' && info[index] != '\0')
         {
            index++;
         }
         index++;
         if(count++ >= size)
         {
            break;
         }
    }
}
void Display(struct Student *s1,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("roll no  is %d \n",s1[i].rollno);
        printf("name is %s \n",s1[i].name);
        printf("marks is %f \n",s1[i].marks);
    }
}
int main()
{
    int size=1;
    const char* info="1001 john 100.00";
    struct Student students[size];
    parse(info,students,size);
    Display(students,size);
    
}