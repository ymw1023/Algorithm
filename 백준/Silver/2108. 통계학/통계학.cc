#include <stdio.h>

int main()
{
    int i,j,a,n;
    
    int arr[8001]={0,};
    scanf("%d",&n);
    
    double sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        sum+=a;
        arr[a+4000]++;
    }
    printf("%.0lf\n",(sum/n>-1&&sum/n<0)?-sum/n:sum/n);
    
    int cnt=0;
    i=0;
    while(cnt<(n+1)/2)
    {
        cnt+=arr[i];
        i++;
    }
    printf("%d\n",i-4001);
    
    cnt=0;
    int m,max,min,chk1=1,chk2=1;;
    for(i=0;i<8001;i++)
    {
        if(arr[i]>cnt)
        {
            cnt=arr[i];
            m=i-4000;
            chk1=1;
        }
        else if(arr[i]==cnt&&chk1)
        {
            cnt=arr[i];
            m=i-4000;
            chk1--;
        }
        if(arr[i]&&chk2)
        {
            min=i-4000;
            chk2--;
        }
        if(arr[i])
        {
            max=i-4000;
        }
    }
    printf("%d\n%d",m,max-min);
    return 0;
}