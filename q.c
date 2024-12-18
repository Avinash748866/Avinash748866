#include<stdio.h>
void enqueue();
void dequeue();
void display();
int queue[40],f=-1,r=-1,n,x,choice;
void main()
{
    scanf("%d",&n);
    do
    {
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: enqueue();
        break;
        case 2 : dequeue();
        break;
        case 3: display();
        break;
        }
    }while (choice!=4);
}
    void enqueue()
    {
        if(f==0 && r==n-1)
        {
            printf("Queue is full\n");
            return;
        }
        if(f==-1 && r==-1)
        {
            f=0;
            r=0;
        }
        else
        {
            r=r+1;
        }
        scanf("%d",&x);
        queue[r]=x;
    }
    void dequeue()
    {
        if (f==-1)
        {
            printf("underflow");
            return;
        }
        int y = queue[f];
        printf("delete the element is %d\n",y);
        if (f==r)
        {
            f=-1;
            r=-1;
        }
        else{
            f++;
        }
        
        
    }
    void display()
        {
            if (r>=0)
            {
                for (int i = f; i <=r; i++)
                {
                    printf("%d ", queue[i]);
                }
                
            }
            
        }
    
