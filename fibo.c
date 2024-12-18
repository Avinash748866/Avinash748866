#include<stdio.h>
int dat[1001];
int fib(int n){
    if(n==1 || n==2){
    return dat[n]=n-1;
    }
    else  {
        if(dat[n]==0)
        dat[n]=(fib(n-1)+fib(n-2));
    }
    return dat[n];
    
}
    int main(){
        int n ;
        printf("enter the number of terms :\n");
        scanf("%d",&n);
        printf("fibonacci series : ");
        for(int i=0;i<n;i++){
            printf("%d %d \n",i,fib(i));
        }
        return 0;
    }