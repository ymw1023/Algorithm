#include <stdio.h>

int main()
{
    int m,n,j,i,arr[1000001]={0,};
    arr[1]=1;
    
    scanf("%d %d",&m,&n);
    
    for(i=2;i<=n;i++)
    {
        for(j=2;i*j<=n;j++)
        {
            arr[i*j]=1;
        }
    }
    for(i=m;i<=n;i++)
    {
        if(arr[i]==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}