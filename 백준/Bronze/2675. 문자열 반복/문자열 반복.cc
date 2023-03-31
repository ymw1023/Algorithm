#include <stdio.h>

int main()
{
    int n, cnt, k, j, i;
    char ca[20];
    
    scanf("%d",&n);
    
    for(k=0;k<n;k++)
    {
        scanf("%d",&cnt);
        scanf("%s",ca);
        i=0;
        while(ca[i]!='\0')
        {
            for(j=0;j<cnt;j++)
            {
                printf("%c",ca[i]);
            }
            i++;
        }
        printf("\n");
    }
    return 0;
}