#include <stdio.h>

int main()
{
    int i,j,max=0,n[9];
    
    for(i=0;i<9;i++)
    {
        scanf("%d",&n[i]);
        
        if(n[i]>max)
        {
            max=n[i];
            j=i+1;
        }
        
    }
    
    printf("%d\n%d",max,j);
    
    return 0;
}