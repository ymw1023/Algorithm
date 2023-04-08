#include <stdio.h>

int main()
{
    int n,i,a,b;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        
        if(a<b)
        {
            printf("NO BRAINS\n");
        }
        else
        {
            printf("MMM BRAINS\n");
        }
    }
    
    return 0;
}