#include <stdio.h>

int main()
{
    int n,T,num1,num2,i,j;
    
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d %d",&num1,&num2);
            printf("%d %d\n",num1+num2,num1*num2);
        }
    }
    
    return 0;
}