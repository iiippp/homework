#include<stdio.h>
int prod(int t[],int n){
    if (n==1)
    {
        return t[0];
    }
    else{
    return prod(t,n-1)+t[n-1];
    }
}
int main()
{
    int n=3;
    int t[3]={2,2,2};
    printf("%d",prod(t,n));

    return 0;
}
