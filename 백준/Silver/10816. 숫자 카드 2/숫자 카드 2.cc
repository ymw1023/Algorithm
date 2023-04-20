#include <stdio.h>
#include <stdlib.h>

int compare(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}

int del(int* arr,int size,int* brr){    //중복제거
    int i=0,j=0;
    for(i=1;i<size;i++)
    {
        if(arr[i]==arr[j]){
            brr[j]++;
            continue;
        }
        j++;
        arr[j]=arr[i];
    }
    return j+1;
}

int binary(int* arr,int size,int key,int* brr){
    int num=0,left=0,right=size-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(arr[mid]<key)
            left=mid+1;
        else if(arr[mid]>key)
            right=mid-1;
        else{
            return brr[mid];
        }
    }
    return 0;
}

int main()
{
    int i,n,m,cnt;
    
    scanf("%d",&n);
    int arr[n];
    int crr[n];
    for(i=0;i<n;i++)
    {
        crr[i]=1;
    }
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
    
    qsort(arr,n,sizeof(int),compare);   //오름차순
    
    cnt=del(arr,n,crr);
    
    for(i=0;i<m;i++)    //출력
    {
        printf("%d ",binary(arr,cnt,brr[i],crr));
    }
    
    return 0;
}