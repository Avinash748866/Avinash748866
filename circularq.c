#include <stdio.h>
int q[40],f=-1,r=-1,n,item=0,ele;
void q_insert()
{
    if( f==0 && r==n-1)
    {
    printf("Overflow");
    return;
    }
    if(f==-1 && r==-1 || f==r+1)
    {
        f=0;
        r=0;    
    }
    else if (r==n-1)
    {
        r=0;
    }
    
    else
    {
        r++;
    }
    printf("enter the items ");
    scanf("%d",&item);
    q[r]=item;
}
void q_delete ()
{
    if(f==-1) 
    {
        printf("Underflow");
    }
    ele=q[f];
    if(f==r)
    {
        f=-1;
        r=-1;
    }
    else if (f==n-1)
    {
        f=0;
    }
    
    else
    {
        f=f+1;
    }
}
void q_display()
{
    for(int i=f;i<n;i++)
    {
        printf("%d ",q[i]);
    }if(f>r){
    for(int i=0;i<r;i++)
    {
        printf("%d ",q[i]);
    }
    }
}
void main()
{
    scanf("%d",&n);
    int c;
    do
    { 
        scanf("%d",&c);
        switch(c)
        {
            case 1: q_insert();
                break;
            case 2: q_delete ();
                break;
            case 3: q_display ();
                break;
        }
        }while(c!=4);
}