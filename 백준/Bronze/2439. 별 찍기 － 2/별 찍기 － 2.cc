#include <stdio.h>

int main()
{
    int i,j,k,d;
    
    scanf("%d",&k);
    
    for(i=1;i<=k;i++)
    {
        for(d=k-1;d>=i;d--)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}