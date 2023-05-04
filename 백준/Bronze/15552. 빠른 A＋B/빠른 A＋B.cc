#include <stdio.h>

int main()
{
    int i,j,k,d;
    
    scanf("%d",&i);
    
    for(j=0;j<i;j++)
    {
        scanf("%d %d",&k,&d);
        printf("%d\n",k+d);
    }

    
    return 0;
}