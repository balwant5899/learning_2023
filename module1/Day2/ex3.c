#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int sum=0;
    for(int i=0;i<5;i=i+2)
    {
        sum+=a[i];
    }
    printf("sum is %d",sum);
}