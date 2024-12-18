# include<stdio.h>
void push();
void pop();
void display();
int stack[20],top=-1,n,x;
void main()
{
    int choice=1;
    printf("Enter the size of a stack");
    scanf("%d",&n);
     
    do
    {
    printf("Enter the choice 1. Push\n2.Pop\n3.Display");
   scanf("%d",&choice);
    switch(choice)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3: display();
        break;
        default:
            printf("please enter a valid choice");
    }
    
    }
    
    while(choice!=4);
}
void push()
{
    if(top>=n-1)
        printf("Overflow");
    else
    {
        printf("Enter the element to be pushed");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        int y=stack[top];
        printf("Deleted element=%d",y);
        top=top-1;
    }
}
void display()
{
   
        for(int i=top;i>-1;i--)
        printf("%d ",stack[i]);
    
    
}