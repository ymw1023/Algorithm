#include <stdio.h>

int main()
{
    int i,n,a,b,c,d,e;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        
        d=c/a+1;
        e=c%a;
        
        if(e==0)
        {
            d--;
            e=a;
        }
        printf("%d\n",100*e+d);
    }

    return 0;
}