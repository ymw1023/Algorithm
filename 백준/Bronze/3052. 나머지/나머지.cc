#include <stdio.h>

int main()
{
    int i,j,k,tot=10,num[10];
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        num[i]%=42;
    }
    
    for(j=0;j<10;j++)
    {
        for(k=j;k<10;k++)
        {
            if(j==k)
            {
                continue;
            }
            
            else if(num[j]==num[k])
            {
                tot--;
                break;
            }
        }
    }

    
    printf("%d",tot);
    
    return 0;
}