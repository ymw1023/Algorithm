#include <stdio.h>

int main()
{
    int i,b,sum,n=1;
    
    int arr[10001]={0,};
    
    while(n<=10000)
    {
        b=n;
        sum=n;
        while(b>0)
        {
            sum=sum+b%10;
            b/=10;
        }
        if(sum<=10000)
            arr[sum]=1;
        n++;
    }
    for(i=1;i<=10000;i++)
    {
        if(!(arr[i]))
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
