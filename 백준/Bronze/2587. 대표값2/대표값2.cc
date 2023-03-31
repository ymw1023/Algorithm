#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a)-(*(int*)b);
}

int main()
{
    int i,sum=0,arr[5];
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    
    qsort(arr,5,sizeof(int),compare);
    
    printf("%d\n%d",sum/5,arr[2]);
    
    return 0;
}
