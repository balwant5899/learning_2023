#include<stdio.h>
int find_max(int [],int);
int find_minm(int [],int);
int main()
{
    int arr[]={64,84,20,36,12,90,72,10,45,56};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxm=find_max(arr,size);
    int minm=find_minm(arr,size);
    printf("maximum = %d minimum = %d",maxm,minm);
}
int find_max(int arr [],int size)
{
    int maxm=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxm)
        {
            maxm=arr[i];
        }

    }
    return maxm;
}
int find_minm(int arr [],int size)
{
    int minm=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]<minm)
        {
            minm=arr[i];
        }

    }
    return minm;
}
