#include <stdio.h>

int main()
{
    int i,j,k,d;
    
    scanf("%d",&i);
    
    for(j=1;j<=i;j++)
    {
        scanf("%d %d",&k,&d);
        printf("Case #%d: %d\n",j,k+d);
    }
    
    return 0;
}