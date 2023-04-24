#include <stdio.h>

int main()
{
    int i,n,a,arr[20001]={0,};
    
    scanf("%d",&n);
   
    for(i=0;i<n;i++)
    {
       scanf("%d",&a);
       arr[a+10000]++;
    }
    for(i=0;i<20001;i++)
    {
        while(arr[i])
        {
            printf("%d\n",i-10000);
            arr[i]--;
        }
    }
    
    return 0;
}