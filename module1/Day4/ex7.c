//convert string into integer
int stringtoint(const char * );
#include<stdio.h>

int main()
{
    char a[]="5278";
    int num=stringtoint(a);
    printf("number is %d",num);
}

int stringtoint(const char * str)
{
    int result=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&& str[i]<='9')
        {
            int digits=str[i]-'0';
            result=(result*10)+digits;
        }
        else{
            break;
        }
    }
    return result;
}