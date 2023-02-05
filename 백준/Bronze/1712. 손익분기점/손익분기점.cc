#include <stdio.h>

int main()
{
    int a,b,c,cnt=0,sum=0;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if(b>=c)
    {
        cnt=-1;
    }
    else
    {
        cnt=a/(c-b)+1;
    }
    printf("%d",cnt);
    
    return 0;
}