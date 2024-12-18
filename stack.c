#include<stdio.h>
int stack[50],top=-1,n,choice;
void push()
{
    int x;
    if(top>=n-1)
    {
        printf("overflow");
    }
    else{
        
        top=top+1;
        scanf("%d",&x);
        stack[top]=x;
    }
}
int main()
{
    int choice;
    scanf("%d",&choice);
    char z;
    while (z=='y')
    {
       switch (choice)
       {
       case 1:
        push();
        break;
        // case 2:
        // pop();
        // break;
        // display();
       }
        scanf(" %c",&z);
    }
    
}

    