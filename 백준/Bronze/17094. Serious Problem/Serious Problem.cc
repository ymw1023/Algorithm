#include <stdio.h>

int main()
{
    int n,i,cnt=0;
    
    scanf("%d",&n);
    
    char arr[n+1];
    
    scanf("%s",arr);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]=='2')
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    
    if(cnt>0)
    {
        printf("2");
    }
    else if(cnt<0)
    {
        printf("e");
    }
    else
    {
        printf("yee");
    }
    
    return 0;
}