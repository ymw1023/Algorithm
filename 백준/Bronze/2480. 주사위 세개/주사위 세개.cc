#include <stdio.h>

int main()
{
    int i,j,k,d,max;
    
    scanf("%d %d %d",&i,&j,&k);
    if(i==j&&i==k)
    {
        printf("%d",10000+i*1000);
    }
    else if(i!=j&&i!=k&&j!=k)
    {
        if(i>j)
        {
            if(i>k)
            {
                max=i;
            }
            else
            {
                max=k;
            }
        }
        else
        {
            if(j>k)
            {
                max=j;
            }
            else
            {
                max=k;
            }
        }
        printf("%d",max*100);
    }
    else
    {
        if(i==j)
        {
            printf("%d",1000+i*100);
        }
        else if(i==k)
        {
            printf("%d",1000+k*100);
        }
        else
        {
            printf("%d",1000+j*100);
        }
    }
    
    return 0;
}