//Generate the fibonacci series up to n terms using recursion

#include <stdio.h>

int fibo(int n){
    if (n==1)
        return 1;
    else if(n==0)
        return 0;
    else
        return fibo(n-1)+fibo(n-2);
}

int main(){
    int n,i;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalud number of terms.");
    }
    printf("Fibonacci series upto %d terms is: \n",n);
    for(i=0;i<n;i++){
        printf("%d ",fibo(i));
    }
    return 0;
}