#include <stdio.h>

int main()
{
    int i,score,asum=0,bsum=0;
    
    for(i=0;i<3;i++)
    {
        scanf("%d",&score);
        asum+=score*(3-i);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&score);
        bsum+=score*(3-i);
    }
    if(asum>bsum)
    {
        printf("A");
    }
    else if(bsum>asum)
    {
        printf("B");
    }
    else
    {
        printf("T");
    }
    
    return 0;
}