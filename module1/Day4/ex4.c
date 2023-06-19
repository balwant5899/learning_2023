#include<stdio.h>
#include <stdlib.h>
int Diff_odd_even(int *arr,int);
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter elements in the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n diffrence is = %d",Diff_odd_even(arr,size));
}
int Diff_odd_even(int *arr,int size)
{   int odd_sum=0,even_sum=0;
    for(int i=0;i<size;i++)
    {
        if((*(arr + i)&1)==1)
        {
            odd_sum+=*(arr+i);
        }
        else{
            even_sum+=*(arr+i);
        }
    }
    return (abs(odd_sum-even_sum));
}