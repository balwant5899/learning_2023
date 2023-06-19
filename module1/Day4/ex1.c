#include <stdio.h>
int sum(int [],int );
int average(int,int);
int main()
{
    int arr[]={12,84,20,36,64,56,72,10,45,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    int add=sum(arr,size);
    int avg=average(add,size);
    printf("sum is %d and avg is %d",add,avg);

}
int sum(int arr[],int len)
{
    int total=0;
    for(int i=0;i<len;i++)
    {
        total=total+arr[i];
    }
    return total;
}
int average(int num,int len)
{
    int av=num/len;
    return av;

}