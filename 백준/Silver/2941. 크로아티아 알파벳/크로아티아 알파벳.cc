#include <stdio.h>
#include <string.h>

int main()
{
    int i=0,cnt;
    char ca[100];
    
    scanf("%s",ca);
    cnt=strlen(ca);
    
    for(i=0;i<strlen(ca);i++)
    {
        if(ca[i]=='=')
        {
            if(ca[i-1]=='c')
            {
                cnt--;
            }
            if(ca[i-1]=='s')
            {
                cnt--;
            }
            if(ca[i-1]=='z')
            {
                cnt--;
                if(ca[i-2]=='d')
                {
                    cnt--;
                }
            }
        }
        if(ca[i]=='-')
        {
            if(ca[i-1]=='c')
            {
                cnt--;
            }
            if(ca[i-1]=='d')
            {
                cnt--;
            }
        }
        if(ca[i]=='j')
        {
            if(ca[i-1]=='l')
            {
                cnt--;
            }
            if(ca[i-1]=='n')
            {
                cnt--;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}