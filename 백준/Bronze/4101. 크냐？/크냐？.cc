#include <stdio.h>

int main()
{
    int n,m;
    
    scanf("%d %d",&n,&m);
    while(!(n==0||m==0))
    {
        if(n>m)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        scanf("%d %d",&n,&m);
    }
    return 0;
}