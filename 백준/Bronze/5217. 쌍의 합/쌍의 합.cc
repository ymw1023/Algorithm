#include <stdio.h>

int main()
{
    int n,num,k,j,i,cnt;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        printf("Pairs for %d:",num);
        cnt=0;
        k=num-1;
        for(j=1;k>j;j++)
        {
            if(cnt)
            {
                printf(",");
            }
            printf(" %d %d",j,k);
            k--;
            cnt++;
        }
        printf("\n");
    }
    
    return 0;
}