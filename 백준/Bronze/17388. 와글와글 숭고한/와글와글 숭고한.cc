#include <stdio.h>

int main()
{
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if((a+b+c)>=100)
    {
        printf("OK");
    }
    else
    {
        if(a<b&&a<c)
        {
            printf("Soongsil");
        }
        else if(b<a&&b<c)
        {
            printf("Korea");
        }
        else
        {
            printf("Hanyang");
        }
    }
    
    return 0;
}