#include <stdio.h>

int main()
{
    
    int i,j,k,n,a,b,w,h,sum=0;
    
    int arr[100][100]={0,};
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        
        h=a+10>100?100:a+10;
        w=b+10>100?100:b+10;
        
        for(k=a;k<h;k++)
        {
            for(j=b;j<w;j++)
            {
                arr[k][j]=1;
            }
        }
    }
    
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            if(arr[i][j])
            {
                sum++;
            }
        }
    }
    
    printf("%d",sum);

    return 0;
}
