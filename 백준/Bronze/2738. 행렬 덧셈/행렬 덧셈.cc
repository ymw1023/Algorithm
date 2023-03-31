#include <stdio.h>

int main()
{
    int i,j,n,m,num;
    
    scanf("%d %d",&n,&m);
    
    int arr[n][m];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&num);
            arr[i][j]=arr[i][j]+num;
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
