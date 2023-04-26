#include <stdio.h>

int main()
{
    int n,i,arr[5],cnt=0;
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
