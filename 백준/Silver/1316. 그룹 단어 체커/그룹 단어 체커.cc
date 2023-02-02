#include <stdio.h>

int main()
{
    int m,n,i,j,k,cnt,count=0;
    char ca[100],group[100],first;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%s",ca);
        cnt=1;
        m=0;
        k=0;
        first='\0';
        do
        {
            if(ca[m]!=first)
            {
                first=ca[m];
                for(j=0;j<k;j++)
                {
                    if(first==group[j])
                    {
                        cnt=0;
                        break;
                    }
                }
                group[k]=first;
                k++;
            }
            if(cnt==0)
            {
                break;
            }
            m++;
        }while(ca[m]!='\0');
        if(cnt)
        {
            count++;
        }
    }
    
    printf("%d",count);
    
    return 0;
}