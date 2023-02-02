#include <stdio.h>

int main()
{
    int i,l,m,n=1,sum=0,num=0,arr[1001];
    arr[0]=0;
    while(n<=1001)
    {
        num++;
        for(i=0;i<num;i++)
        {
            arr[n]=num;
            n++;
            if(n>1001)
                break;
        }
        
    }
    scanf("%d %d",&l,&m);
    
    for(i=l;i<=m;i++)
    {
        sum+=arr[i];
    }
    printf("%d",sum);
    
    return 0;
}