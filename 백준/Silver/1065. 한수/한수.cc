#include <stdio.h>

int main()
{
    int i,a,n,sum,b,c,cnt=0;
    
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        a=i;
        b=a%10;
        c=(a/10)%10-b;
        while(1)
        {
            a/=10;
            if(a<1)
            {
                cnt++;
                break;
            }
            if(c!=a%10-b)
            {
                break;
            }
            b=b+c;
        }
    }
    
    printf("%d",cnt);

    return 0;
}
