#include <stdio.h>

int main()
{
    int n,cnt=2;
    
    scanf("%d",&n);
    
    if(n!=1)
    {
        while(n!=1)
        {
            if(n%cnt==0)
            {
                n/=cnt;
                printf("%d\n",cnt);
            }
            else
            {
                cnt++;
            }
        }
    }
    
    return 0;
}