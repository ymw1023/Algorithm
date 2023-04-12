#include <stdio.h>

int main()
{
    int n,i,j,cnt;
    
    scanf("%d",&n);
    int wei[n],hei[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&wei[i],&hei[i]);
    }
    for(i=0;i<n;i++)
    {
        cnt=1;
        for(j=0;j<n;j++)
        {
            if(wei[j]>wei[i]&&hei[j]>hei[i])
            {
                cnt++;
            }
        }
        printf("%d ",cnt);
    }
    
    return 0;
}
