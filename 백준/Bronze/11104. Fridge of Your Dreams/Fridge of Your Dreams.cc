#include <stdio.h>

int main()
{
    int i,j,n,sum,cnt,arr[24];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        sum=0;
        cnt=1;
        for(j=0;j<24;j++)
        {
            scanf("%1d",&arr[j]);
        }
        for(j=23;j>=0;j--)
        {
            if(arr[j])
            {
                sum+=cnt;
            }
            cnt*=2;
        }
        printf("%d\n",sum);
    }
    
    return 0;
}