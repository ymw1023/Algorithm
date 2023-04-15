#include <stdio.h>

int main()
{
    int i,n,j,m,sum;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&m);
        for(j=1;j<=m;j+=2)
        {
            sum+=j;
        }
        printf("%d\n",sum);
    }

    return 0;
}
