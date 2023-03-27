#include <stdio.h>

int main()
{
    int i,j,k,d,e,f;
    
    scanf("%d %d",&i,&j);
    scanf("%d",&k);
    
    d=j+k;
    e=d/60;
    f=d%60;
    i=i+e;
    
    if(i>23)
    {
        i=i-24;
    }
    
    printf("%d %d",i,f);
    
    return 0;
}