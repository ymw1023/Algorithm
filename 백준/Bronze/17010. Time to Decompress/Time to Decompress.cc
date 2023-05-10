#include <stdio.h>

int main()
{
    int i,j,T,n;
    char c;
    
    scanf("%d",&T);
    
    for(i=0;i<T;i++)
    {
        scanf("%d %c",&n,&c);
        for(j=0;j<n;j++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    
    return 0;
}