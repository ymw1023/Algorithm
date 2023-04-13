#include <stdio.h>

int main()
{
    int n, i, j, cnt, sum;
    char ox[80];
    
    scanf("%d", &n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s",ox);
        
        j=0;
        cnt=1;
        sum=0;
        
        while(ox[j]!='\0')
        {
            if(ox[j]=='O')
            {
                sum+=cnt;
                cnt++;
            }
            else if(ox[j]=='X')
            {
                cnt=1;
            }
            j++;
        }
        printf("%d\n",sum);
        cnt=1;
    }
    
    return 0;
}