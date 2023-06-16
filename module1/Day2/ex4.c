#include<stdio.h>
int find_setbits(int [],int);
int single_bits(int);
int main()
{
int a[3] = {0x1, 0xF4, 0x10001};
int size=sizeof(a)/sizeof(a[0]);
int ans=find_setbits(a,size);
printf("total =%d",ans);
return 0;
 
}
int find_setbits(int arr [],int size)
{
    int count=0;
     for(int i=0;i<size;i++)
     {
        count+=single_bits(arr[i]);
     }
     return count;
}
int single_bits(int val)
{

   int count = 0;
    while (val) {
        count += val & 1;
        val >>= 1;
    }
    return count;

}