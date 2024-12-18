#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],i,j,k,m,n,p,q;
    printf("enter the order of matrix a : ");
    scanf("%d%d",&m,&n);
    printf("enter the order of matrix b : ");
    scanf("%d%d",&p,&q);
    if(n=p)
    {
        printf("enter the element of matrix a : ");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);

            }
        }
        printf("enter the element of matrix b : ");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        //multiplication
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                c[i][j]=0;
                for(k=0;k<n;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        //print resultant matix
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ",c[i][j]);

            }
            printf("\n");
        }
    }
    else
    {
        printf("multiplication is not possible");
    }
  
}