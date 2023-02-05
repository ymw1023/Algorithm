#include <stdio.h>

int main()
{
    int n,i,j,num,cnt=0;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num>=2)
        {
            cnt++;
            for(j=2;j<num;j++)
            {
                if(num%j==0)
                {
                    cnt--;
                    break;
                }
            }
        }
    }
    
    printf("%d",cnt);

    return 0;
}