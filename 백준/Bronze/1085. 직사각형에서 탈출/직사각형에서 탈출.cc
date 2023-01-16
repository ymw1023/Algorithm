#include <stdio.h>

int main()
{
    int x,y,w,h,min;
    
    scanf("%d %d %d %d",&x,&y,&w,&h);
    
    min=x>(w-x)?(w-x):x;
    min=min>y?y:min;
    min=min>(h-y)?(h-y):min;
    
    printf("%d",min);
    return 0;
}