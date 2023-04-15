#include <stdio.h>

int main()
{
    long long i,num1,num2;
    
    scanf("%lld %lld",&num1,&num2);
    
    if(num1>num2)
    {
        printf("%lld\n",num1-num2-1);
        for(i=num2+1;i<num1;i++)
        {
            printf("%lld ",i);
        }
    }
    else if(num1<num2)
    {
        printf("%lld\n",num2-num1-1);
        for(i=num1+1;i<num2;i++)
        {
            printf("%lld ",i);
        }
    }
    else
    {
        printf("0");
    }

    return 0;
}