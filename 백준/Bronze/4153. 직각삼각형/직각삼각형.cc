#include <stdio.h>

int main ()
{
    int a,b,c,chk;
    
    scanf("%d %d %d",&a,&b,&c);
    
    while(!(a==0||b==0||c==0))
    {
        chk=0;
        if(a>b&&a>c)
        {
            chk=a*a==b*b+c*c?1:0;
        }
        else if(b>a&&b>c)
        {
            chk=b*b==a*a+c*c?1:0;
        }
        else
        {
            chk=c*c==a*a+b*b?1:0;
        }
        
        if(chk)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
        
        scanf("%d %d %d",&a,&b,&c);
    }
    return 0;
}