#include<stdio.h>
void main()
{
   int a[20];
   int n , l, e;
   scanf("%d",&n);
  scanf("%d%d",&l,&e);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       
   }
   for(int i=n-1;i>=l;i--)
   {
       a[i+1]=a[i];
   }
   
   a[l]=e;
   n++;
   for(int i=0; i<n ;i++)
   {
       printf("%d",a[i]);
   }
}