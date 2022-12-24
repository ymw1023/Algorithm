#include <stdio.h>

int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    while(!(i==0&&j==0))
    {
        printf("%d\n",i+j);
        scanf("%d %d",&i,&j);
    }
   
    return 0;
}