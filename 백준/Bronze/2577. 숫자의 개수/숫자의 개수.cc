#include <stdio.h>

int main()
{
    int a,b,i,j,k,sum=1,num,d[10];
    
    for (i=0;i<3;i++)
    {
        scanf("%d",&num);
        sum=sum*num;
    }
    
    for(k=0;k<10;k++)
    {
        d[k]=0;
    }
    
    for(j=0;sum>0;j++)
    {
        a=sum%10;
        d[a]+=1;
        sum/=10;
    }
    
    for(b=0;b<10;b++)
    {
        printf("%d\n",d[b]);
    }
    
    return 0;
}