#include<stdio.h>
void find_smallest_greatest(int n);
int main()
{
    int n;
    printf("Enter n values");
    scanf("%d",&n);
    find_smallest_greatest(n);


}
void find_smallest_greatest(int n)
{
    int num;
    for(int i=0;i<n;i++)
    {
        printf("enter the number");
        scanf("%d",&num);
         int largest=0,smallest=num;
         if(num<10)
        {
            printf("Not valid\n");
            continue;
        }
        while(num>0)
        {
            int digits=num%10;
            if ((digits)>largest)
            {
                largest=digits;
            }
            if ((digits)<smallest)
            {
                smallest=digits;
            }
            num=num/10;
            
        }
        printf("smallest %d",smallest);
        printf("largest %d\n",largest);

    }

}