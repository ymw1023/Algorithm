#include <stdio.h>

int main()
{
    int i,n;
    int arr[30]={0,};
    
    for(i=0;i<28;i++)
    {
        scanf("%d",&n);
        arr[n-1]=1;
    }
    
    for(i=0;i<30;i++)
    {
        if(!arr[i])
        {
            printf("%d\n",i+1);
        }
    }
    
    return 0;
}