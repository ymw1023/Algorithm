#include <stdio.h>

int main()
{
    int n,cnt=0;
    
    scanf("%d",&n);
    
    while(n!=0)
    {
        cnt++;
        if(n%2)
        {
            printf("%d. odd %d\n",cnt,(n-1)/2);
        }
        else
        {
            printf("%d. even %d\n",cnt,n/2);
        }
        scanf("%d",&n);
    }
    
    return 0;
}