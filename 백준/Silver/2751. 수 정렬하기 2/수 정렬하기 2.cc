#include <stdio.h>

int main()
{
    int i,n,a,arr[2000001]={0,};
    
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
       scanf("%d",&a);
       arr[a+1000000]='1';
    }
    for(i=0;i<2000001;i++)
    {
        if(arr[i])
        {
            printf("%d\n",i-1000000);
        }
    }
    
    return 0;
}