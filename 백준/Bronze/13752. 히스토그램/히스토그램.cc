#include <stdio.h>

int main()
{
    int T,i,j,n;
    
    scanf("%d",&T);
    
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            printf("=");
        }
        printf("\n");
    }
}
