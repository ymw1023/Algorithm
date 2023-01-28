#include <stdio.h>

int main()
{
    int i,j,cnt,t,max=0;
    char temp, ca[1000000];
    scanf("%s",ca);
    
    for(i=0;i<26;i++)
    {
        cnt=0;
        j=0;
        while(ca[j]!='\0')
        {
            if(ca[j]==i+65)
            {
                cnt++;
            }
            else if(ca[j]==i+97)
            {
                cnt++;
            }
            j++;
        }
        if(max==cnt)
        {
            t=1;
        }
        else if (cnt>max)
        {
            max=cnt;
            temp=i;
            t=0;
        }
    }
    if(t==0)
    {
        printf("%c",temp+65);
    }
    else
    {
        printf("\?");
    }
    
    return 0;
}