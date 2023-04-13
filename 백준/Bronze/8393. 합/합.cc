#include <stdio.h>

int main()
{
    int i,j,sum=0;
    
    scanf("%d",&i);
    
    for(j=1;j<=i;j++)
    {
        sum=sum+j;
    }
    printf("%d",sum);

    return 0;
}