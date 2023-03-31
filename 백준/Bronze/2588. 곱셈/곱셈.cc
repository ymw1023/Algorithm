#include <stdio.h>

int main()
{
    int i,j;
    int h,t,o;
    
    scanf("%d",&i);
    scanf("%d",&j);
    
    h=j/100;
    t=(j%100)/10;
    o=j%10;
    
    printf("%d\n",i*o);
    printf("%d\n",i*t);
    printf("%d\n",i*h);
    printf("%d\n",i*j);
    
    return 0;
    
}