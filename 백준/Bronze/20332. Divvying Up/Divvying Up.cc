#include <stdio.h>

int main()
{
    int i,num,pri,sum=0;
    
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&pri);
        sum+=pri;
    }
    printf("%s",sum%3?"no":"yes");
    
    return 0;
}