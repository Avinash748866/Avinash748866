#include<stdio.h>
#include<math.h>
 void toh(int n,char A ,char B, char C)
   
{
   if(n==1)
  {
     printf("move disc %d from %c to %c \n",n , A,C);
     return;
  }
 toh(n-1,A,C,B);
   printf("move disc %d from %c to %c \n",n,A,C);
 toh(n-1,B,A,C);

}
void main()
{
    int n;
    scanf("%d",&n);
    char A='A';
    char B='B';
    char C='C';
    toh(n,A,B,C);
    printf("no. of steps=%d ",(1<<n)-1);
}