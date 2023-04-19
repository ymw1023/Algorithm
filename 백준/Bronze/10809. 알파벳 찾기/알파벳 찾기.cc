#include <stdio.h>

int main()
{
    int i,j,cb;
    char n, ca[100];
    
    scanf("%s",ca);
    
    for(i=0;i<26;i++)
    {
        n=i+97;
        cb=-1;
        j=0;
        while(ca[j]!='\0')
        {
            if(ca[j]==n)
            {
                cb=j;
                break;
            }
            j++;
        }
        printf("%d ",cb);
    }

    return 0;
}