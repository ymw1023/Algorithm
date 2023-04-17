#include <stdio.h>

int main()
{
    int i,n,m,sum=0;
    
    scanf("%d",&n);
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&m);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            sum++;
        }
    }
    
    printf("%d",sum);
    
    return 0;
}