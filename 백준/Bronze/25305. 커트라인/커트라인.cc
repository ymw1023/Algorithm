#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return *(int*)b-*(int*)a;
}

int main()
{
    int i,n,cnt;
    
    scanf("%d %d",&n,&cnt);
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    qsort(arr,n,sizeof(int),compare);
    
    printf("%d",arr[cnt-1]);
    
    return 0;
}