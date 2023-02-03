#include <stdio.h>

int main()
{
    int i;
    char n,arr[10]={0,};
    
    scanf("%c",&n);
    while(n!='\n')
    {
        arr[n-48]++;
        scanf("%c",&n);
    }
    for(i=9;i>=0;i--)
    {
        while(arr[i])
        {
            printf("%d",i);
            arr[i]--;
        }
    }

    return 0;
}
