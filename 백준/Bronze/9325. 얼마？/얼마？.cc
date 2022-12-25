#include <stdio.h>

int main()
{
    int a,i,j,n,cnt,pri,m;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d %d",&cnt,&pri);
            a=a+cnt*pri;
        }
        printf("%d\n",a);
        
    }
    
    return 0;
}