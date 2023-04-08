#include <stdio.h>

int main()
{
    int i,j,n,sum,cnt,score[1000];
    double account, avg;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&cnt);
        
        sum=0;
        account=0;
        
        for(j=0;j<cnt;j++)
        {
            scanf("%d",&score[j]);
            sum+=score[j];
        }
        
        avg=(double)sum/cnt;
        
        for(j=0;j<cnt;j++)
        {
            if(score[j]>avg)
            {
                account++;
            }
        }
        printf("%.3lf%%\n",(account/cnt)*100);
    }
    
    return 0;
}