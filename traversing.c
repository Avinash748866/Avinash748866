#include<stdio.h>
void main()
{
    int a[5];
    int n;
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}