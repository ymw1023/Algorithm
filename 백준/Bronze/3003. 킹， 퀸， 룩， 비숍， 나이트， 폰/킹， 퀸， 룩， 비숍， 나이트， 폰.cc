#include <stdio.h>

int main()
{
    int c,arr[6]={1,1,2,2,2,8};
    
    for(int i=0;i<6;i++)
    {
        scanf("%d",&c);
        arr[i]=arr[i]-c;
    }
    
    for(int i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
