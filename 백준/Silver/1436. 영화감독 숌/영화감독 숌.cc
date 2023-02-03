#include <stdio.h>

int main()
{
    int b,n,i=0,num=665;
    scanf("%d",&n);
    while(i!=n)
    {
        num++;
        b=1;
        while(num/b>=666)
        {
            if(num/b%1000==666)
            {
                i++;
                break;
            }
            else
            {
                b*=10;
            }
        }
    }
    printf("%d",num);

    return 0;
}
