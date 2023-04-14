#include <stdio.h>

int main()
{
    int i,j,k,n,N,arr[20000]={0,1};
    scanf("%d",&n);
    
    for(k=0;k<n;k++)
    {
        scanf("%d",&N);
        for(i=2;i<=N;i++)
        {
            for(j=2;i*j<=N;j++)
            {
                arr[i*j]=1;
            }
        }
        for(i=N/2;i>0;i--)
        {
            if(arr[i]!=1&&arr[N-i]!=1)
            {
                printf("%d %d\n",i,N-i);
                break;
            }
        }
    }
    return 0;
}
