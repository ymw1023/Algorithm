#include <stdio.h>

int main()
{
    int i,t,n;
    char ca[4],cb[4];
    scanf("%s",ca);
    scanf("%s",cb);
    for(i=3;i>0;i--)
    {
        n=i-1;
        if(ca[n]>cb[n])
        {
            t=1;
            break;
        }
        else if(ca[n]<cb[n])
        {
            t=0;
            break;
        }
    }
    if(t?1:0)
    {
        for(i=3;i>0;i--)
        {
            printf("%c",ca[i-1]);
        }
    }
    else
    {
        for(i=3;i>0;i--)
        {
            printf("%c",cb[i-1]);
        }
    }
    
    
    return 0;
}