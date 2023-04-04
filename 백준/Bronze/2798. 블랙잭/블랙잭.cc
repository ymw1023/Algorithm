#include <stdio.h>

int main()
{
    int n,i,j,k,asum,sum,max=0;
    
    scanf("%d %d",&n,&sum);
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                asum=arr[i]+arr[j]+arr[k];
                if(asum<=sum&&asum>max)
                {
                    max=asum;
                }
                if(max==sum)
                {
                    break;
                }
            }
            if(max==sum)
            {
                   break;
            }
        }
        if(max==sum)
        {
            break;
        }
    }
    
    printf("%d",max);
    
    return 0;
}
