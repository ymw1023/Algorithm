#include <stdio.h>

int main()
{
    int i,j,sum,N;
    
    scanf("%d",&N);
    
    for(i=1;i<N;i++)
    {
        sum=j=i;
        while(j>=1)
        {
            sum+=j%10;
            j/=10;
        }
        if(sum==N)
        {
            break;
        }
    }
    printf("%d",sum==N?i:0);
    
    return 0;
}
