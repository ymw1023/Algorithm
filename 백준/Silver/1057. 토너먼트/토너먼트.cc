#include <stdio.h>

int main()
{
    int n,a,b,num=1;
    scanf("%d %d %d",&n,&a,&b);
    
    while(a!=b)
    {
        if(n%2)
            n=(n+1)/2;
        else
            n/=2;
        if(a%2)
            a=(a+1)/2;
        else
            a/=2;
        if(b%2)
            b=(b+1)/2;
        else
            b/=2;
        num++;
    }
    
    num--;
    
    printf("%d",num);
    
    return 0;
}