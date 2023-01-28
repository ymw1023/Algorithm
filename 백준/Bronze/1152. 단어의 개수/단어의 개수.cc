#include <stdio.h>

int main()
{
    int i=0,cnt=1;
    char ca[1000000];
    
    scanf("%[^\n]",ca);
    if(ca[i]==' ')
    {
        cnt--;
    }
    while(ca[i]!='\0')
    {
        if(ca[i]==' ')
        {
            cnt++;
        }
        i++;
    }
    
    if(ca[i-1]==' ')
    {
        cnt--;
    }
    printf("%d",cnt);
    return 0;
}