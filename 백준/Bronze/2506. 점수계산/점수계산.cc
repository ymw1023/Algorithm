#include <stdio.h>

int main()
{
    int i,n,sum=0,score=0;

    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(arr[i])
        {
            score+=1;
            sum+=score;
        }
        else
        {
            score=0;
        }
    }
    
    printf("%d",sum);
    
    return 0;
}