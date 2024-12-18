#include<stdio.h>
void main()
{
   int a[20];
   int n , l;
   scanf("%d",&n);
  scanf("%d",&l);
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       
   }
   for(int i=l;i<n-1;i++)
   {
       a[i]=a[i+1];
   }
   
   
   n--;
   for(int i=0; i<n;i++)
   {
       printf("%d",a[i]);
   }
}
   