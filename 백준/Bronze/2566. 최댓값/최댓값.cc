#include <stdio.h>

int main()
{
    int i,a,b,n,max=0;
    
    for(i=1;i<=81;i++)
    {
        scanf("%d",&n);
        if(n>=max)
        {
            max=n;
            a=i/9+1;
            b=i%9;
            if(!b)
            {
                a--;
                b=9;
            }
        }
    }
    
    printf("%d\n%d %d",max,a,b);

    return 0;
}
