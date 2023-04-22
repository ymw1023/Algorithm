#include <stdio.h>

int Fibo(int n)
{
    if(n>1)
    {
        return Fibo(n-1)+Fibo(n-2);
    }
    else
    {
        return n;
    }
}

int main()
{
    int n;
    
    scanf("%d",&n);
    
    printf("%d",Fibo(n));
    
    return 0;
}