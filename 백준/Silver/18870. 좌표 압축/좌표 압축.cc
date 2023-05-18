#include <stdio.h>
#include <stdlib.h>

int compare(const void* A,const void* B){
    return *(int*)A-*(int*)B;
}
int del(int* arr,int size){
    int j=0;
    for(int i=1;i<size;i++)
    {
        if(arr[j]!=arr[i])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    return j+1;
}
int binarysearch(int* arr,int size,int key) //틀림
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
            return mid;
    }
}

int main()
{
    int i,n,cnt;
    
    scanf("%d",&n);
    int arr[n],brr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        brr[i]=arr[i];
    }
    
    qsort(brr,n,sizeof(int),compare);
    
    cnt=del(brr,n);
    
    for(i=0;i<n;i++)
    {
        printf("%d ",binarysearch(brr,cnt,arr[i]));
    }

    return 0;
}
