#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return *(int*)a-*(int*)b;
}
int binarysearch(int* arr, int size, int key)
{
    int left=0, right=size-1, mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]<key)
            left=mid+1;
        else if(arr[mid]>key)
            right=mid-1;
        else
            return 1;
    }
    
    return 0;
}

int main()
{
    int i,n,m;
    
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    int brr[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&brr[i]);
    }
    
    qsort(arr,n,sizeof(int),compare);
    
    for(i=0;i<m;i++)
    {
        printf("%d ",binarysearch(arr,n,brr[i]));
    }
    
    return 0;
}