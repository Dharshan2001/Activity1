//Write a program to find the sum of n different numbers using 4 functions
#include<stdio.h>
void main()
{
    int a[100],i,n,sum=0;
    printf("enter the number of element to be added :");
    scanf("%d",&n);
    printf("enter the elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n;i++)
    sum = sum+a[i];
    printf("sum is:%d",sum);
}
