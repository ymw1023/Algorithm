#include <stdio.h>

int main()
{
    int up,down,top,dis,cnt;
    
    scanf("%d %d %d",&up,&down,&top);
    
    dis=up-down;
    cnt=(top-up)/dis+1;
    if((top-up)%dis)
    {
        cnt++;
    }
    
    printf("%d",cnt);
    
    return 0;
}