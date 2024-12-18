#include<stdio.h>
int fib(int n){
    if(n==0)
    return 0;
    else if (n==1)
    return 1;
    else
    return(fib(n-1)+fib(n-2));
}
    int main(){
        int n ;
        printf("enter the number of terms :\n");
        scanf("%d",&n);
        printf("fibonacci series : ");
        for(int i=0;i<n;i++){
            printf("%d \n",fib(i));
        }
        return 0;
    }