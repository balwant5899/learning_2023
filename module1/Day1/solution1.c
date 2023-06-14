#include<stdio.h>
int find_big(int,int);
int main()
{
    int num1,num2;
    printf("Enter two number");
    scanf("%d%d",&num1,&num2);
    int x=find_big(num1,num2);
    (x==1)?printf("num1 is bigger than num2"):printf("num2 is bigger than num1");
 }

int find_big( int num1,int num2)
{
    int val;
    if (num1 > num2)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}