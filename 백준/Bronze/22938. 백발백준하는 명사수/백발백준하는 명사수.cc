#include <stdio.h>
#include <math.h>

int main()
{
    long long L,a,b,c,d,e,f;
   
    scanf("%lld %lld %lld",&a,&b,&c);
    scanf("%lld %lld %lld",&d,&e,&f);
    
    if(a==d&&b==e)
    {
        printf("YES");
    }
    else
    {
        L=sqrt(pow(a-d,2)+pow(b-e,2));
        if(L<c+f)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    
    
    return 0;
}